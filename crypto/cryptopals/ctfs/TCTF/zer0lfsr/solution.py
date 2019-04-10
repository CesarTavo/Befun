from z3 import *

class lfsr():
    def __init__(self, init, mask, length):
        self.init = init
        self.mask = mask
        self.lengthmask = 2**(length+1)-1
        self.length = length

    def next(self):
        nextdata = (self.init << 1) & self.lengthmask
        i = self.init & self.mask & self.lengthmask

        output = 0
        for j in range(self.length):
            output ^= (i & 1)
            i = i >> 1

        nextdata ^= output
        self.init = nextdata
        return output

def combine(x1,x2,x3):
    return (x1*x2)^(x2*x3)^(x1*x3)

init1 = BitVec('init1', 48)
init2 = BitVec('init2', 48)
init3 = BitVec('init3', 48)

l1 = lfsr(init1, 0b100000000000000000000000010000000000000000000000, 48)
l2 = lfsr(init2, 0b100000000000000000000000000000000010000000000000, 48)
l3 = lfsr(init3, 0b100000100000000000000000000000000000000000000000, 48)

s = Solver()
with open('decoded-keystream', 'rb') as f:
    keystream = f.read()

bits = int(input("Introduzca el tamaño de bits: "))
outputs = []
for b in keystream:
    arr = []
    tmp = b
    for i in range(8):
        arr += [tmp]
        tmp //= 2

    tmp = 0
    for l in arr[::-1]:
        outputs += [l - (tmp * 2)]
        tmp = l
    
for i in range(bits):
    s.add(outputs[i] == combine(l1.next(), l2.next(), l3.next()))
    #print(i)

s.check()
print(s.model())

def XOR(s1,s2):
    return ''.join(chr(ord(a) ^ ord(b)) for a,b in zip(s1,s2))

string=input("Ingrese el primer valor hexadecimal: ")
value_input_1 = bytes.fromhex(string)
string=input("Ingrese el segundo valor hexadecimal: ")
value_input_2 = bytes.fromhex(string)
print(XOR(value_input_1,value_input_2).hex())

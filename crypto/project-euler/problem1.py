'''
Instructions: 
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
'''

def multiple(valor, multiple1, multiple2):
    '''
    Funtion to know if the num is a multiple or not
    using module
    '''
    res1 = valor % multiple1
    res2 = valor % multiple2
    if res1 == 0 or res2 == 0:
        return True
    else:
        return False

# List with multiple values
multiples_3_and_5=[]
suma = 0

# ask below 1000
for i in range (1,1000):

    if multiple(i, 3, 5):
        multiples_3_and_5.append(i)
        suma += i

print("The multiples of 3 and 5 are: ", multiples_3_and_5)
print("Total: ", suma)

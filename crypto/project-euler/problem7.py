'''
10001st prime
Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto primo es 13.

¿Cuál es el número primo 10 001st?
'''

import math

def isprime(num):
    '''
    Function to know if a number is prime
    '''
    if (num == 1):
        return False
    elif (num == 2):
        return True
    else: 
        for x in range(2,num):
            if (num % x == 0):
                return False
        return True

if __name__ == "__main__":
    numbers = []
    for i in range(10000,100000):
        if(isprime(i)):
            numbers.append(i)
    print numbers[400], len(numbers)


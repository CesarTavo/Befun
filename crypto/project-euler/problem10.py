'''
Summation of primes

Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
'''

'''
Summation of primes

Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
'''


'''
10001st prime
Al enumerar los primeros seis numeros primos: 2, 3, 5, 7, 11 y 13, 
podemos ver que el sexto primo es 13.

Cual es el numero primo 10001st?
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
    elif(num > 2 and num <= 10000): 
        for x in range(2,num):
            if (num % x == 0):
                return False
        return True
    else:
        for x in range(2,int(math.sqrt(num))+1):
            while num%x == 0:
                return False
        return True

if __name__ == "__main__":
    numbers = []
    c = 0
    for i in range(1,2000000):
        if(isprime(i)):
            numbers.append(i)
            c += i
    print numbers,c


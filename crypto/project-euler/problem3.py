'''
Instructions:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
'''

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

def pfactor(num):
    '''
    Function to know the largest prime factor
    '''
    factor=[]
    for x in range(1,num):
        if(isprime(x)):
            while num % x == 0:
                factor.append(x)
                num = num / x

    print(factor)

if __name__ == "__main__":
    print(pfactor(13195))



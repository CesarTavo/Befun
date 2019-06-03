import math
'''
Instructions:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
'''

def pfactor(num):
    '''
    Function to know the largest prime factor
    '''
    # Lemma. 
    # Every composite number has a proper factor less than or equal to 
    # its square root.
    for x in range(2,int(math.sqrt(num))):
        while num % x == 0:
            print x,
            num = num / x

if __name__ == "__main__":
    num = 600851475143
    pfactor(num)



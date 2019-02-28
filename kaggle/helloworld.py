'''
Intro

The first exercise is very easy,
you have to understand the next code

initialize the variable spam_amount in 0
after print, add 4 to its value and if greater than 0
print "But I don't want ANY spam!" (of course its more than 0)
and initialize a new variable viking_song equals to spam_amount times
the string "Spam " and printed
'''

spam_amount = 0
print(spam_amount)

# Ordering Spam, egg, Spam, Spam, bacon and Spam (4 more servings of Spam)
spam_amount = spam_amount + 4

if spam_amount > 0:
    print("But I don't want ANY spam!")

viking_song = "Spam " * spam_amount
print(viking_song)


'''
To assign a value use =, which 
is called the assigment operator
It doesn't require us to declare before
assigning to it and the type of value
'''
number = 23

print("\n\n")

print(number)

# NUMBERS AND ARITHMETIC IN PYTHON

print(number)
print(type(number))
print(viking_song)
print(type(viking_song))

number = 23.123
print(number)
print(type(number))

'''
| Operator   | Name           | Description                                   |
| --         | --             | --                                            |
| a + b      | Addition       | Sum of a and b                                |
| a - b      | Substraction   | Difference of a and b                         |
| a * b      | Multiplication | Product of a and b                            |
| a / b      | True Division  | Quotient of a and b                           |
| a // b     | Floor division | Quotient of a and b, removing fracional parts |
| a % b      | Modulus        | Integer remainder after division of a by b    |
| a **       | Exponentiation | a raised to the power of b                    |
| -a         | Negation       | The negative of a                             |
| min(1,2,3) | Minimum        | Return the minimun number                     |
| max(1,2,3) | Maximum        | Return the maximum number                     |
| abs(-23)   | Absolute       | Return the absolute value                     |
'''

print("\n Operaciones dentro de print \n")
print(10 / 8)
print(7.5 / 2)
print(7.5 // 2)
print(10 % 2)

# Order of operations

'''
PEMDAS 
Parentheses, Exponents, Multiplication/Division, Addition/Substraction.
'''
print("\nPEMDAS:")
print("Parentheses, Exponents, Multiplication/Division, Addition/Substraction.\n")

# Min and Max

print("\n Min and Max")
print(min(9, 8 ,6))
print(max(9, 8 ,6))



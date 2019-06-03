'''
Instructions:
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
'''

#def fibonacci(numero):
#    if(numero == 0):
#      return 0
#    elif(numero == 1):
#      return 1
#    else:
#      return fibonacci(numero - 1) + fibonacci(numero - 2)

if __name__ == "__main__":
    prev, cur = 0, 1
    x = 1
    total = 0
    while True:
        prev, cur = cur, prev + cur
        if cur >= 4000000:
            break
        if(cur % 2 == 0):
            total += cur
        print(x, cur)
        x += 1
                    
    print("Sum of the even-valued terms:", total)

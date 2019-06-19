'''
Suma suma cuadrada

La suma de los cuadrados de los primeros diez números naturales es,

1 2 + 2 2 + ... + 10 2 = 385
El cuadrado de la suma de los primeros diez números naturales es,

(1 + 2 + ... + 10) 2 = 55 2 = 3025
Por lo tanto, la diferencia entre la suma de los cuadrados de los primeros diez números naturales y el cuadrado de la suma es 3025 - 385 = 2640.

Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.
'''

a = 0
b = 0
for i in range (1,101):
    b += i
    c = i*i
    a += c
print (pow(b,2)-a)


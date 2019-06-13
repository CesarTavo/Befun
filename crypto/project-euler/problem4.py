str_num = []
for i in range(0,1000):
    for j in range(0,1000):
        a = str(i*j)
        if(a == a[::-1]):
            str_num.append(int(a))
print(max(str_num))
            


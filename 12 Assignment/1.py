n=int(input("Enter the number: "))
revers=0
while n>0:
    rem=n%10
    revers=(revers*10)+rem
    n=n//10
print(revers)

    

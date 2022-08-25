n=int(input("Enter the value of n: "))
sum=0;
for a in range(1,(n+1)*2):
    if a%2==0:
        sum+=a
print("total sum of even numer is: ",sum)

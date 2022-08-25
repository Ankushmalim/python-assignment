n=int(input("Enter the value of n: "))
sum=0;
for a in range(n*2):
    if a%2==1:
        sum+=a
print("total sum of odd numer is: ",sum)

def fibonacci(n):
    if n == 0 or n == 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

number = int(input("Enter the number of terms: "))
sum = 0

for i in range(1, number+1):
    if fibonacci(i) % 2 == 0:
        sum += fibonacci(i)

print(sum)
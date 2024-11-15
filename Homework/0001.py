a = 1
sum = 0
while a <= 10:
    sum += a
    a += 1
print("The sum is " + str(sum))

sum = 0
sum = (1 + 10) * 10 / 2

print(int(sum))

def sum(a, b, step):
    sum = 0
    for i in range(a, b + 1, step):
        sum += i
    return sum

print(sum(1, 10, 1))

    
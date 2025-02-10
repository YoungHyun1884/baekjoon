N = []
while True:
    x, y, z = map(int(input().split))
    N.append([x, y, z])
    if x == 0 and y == 0 and z == 0:
        break
for i in range(len(N)):
    if N[i][0] == N[i][1] == N[i][2]:
        print("Equilateral")
    elif N[i][0] == N[i][1] or N[i][0] == N[i][2] or N[i][1] == N[i][2]:
        print("Isosceles")
    elif N[i][0] != N[i][1] != N[i][2]:
        print("Scalene")
    elif N[i][0] == N[i][1] == N[i][2] == 0:
        break
    elif max(N[i])<N[i][0]+N[i][1]+N[i][2]-max(N[i]):
        print("Invalid")
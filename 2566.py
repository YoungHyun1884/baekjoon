def main():
    MN = []
    for i in range(9):
        row = []
        for j in range(9):
            row.append(map(int,input().split()))
        MN.append(row)
    
    max = MN[0][0]
    for i in range(9):
        for j in range(9):
            if(max < MN[i][j]):
                max = MN[i][j]
                a = i
                b = j
            else:
                pass
    print(max)
    print(a,b)


if __name__ == "__main__":
    main()



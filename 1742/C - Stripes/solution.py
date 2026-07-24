t = int(input())
 
for _ in range(t):
    input()
    grid = []
    for i in range(8):
        grid.append(input())
 
    result = "B"
    for row in grid:
        if row == "RRRRRRRR":
            result = "R"
            break
 
    print(result)
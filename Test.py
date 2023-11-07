num_rows = 7

for i in range(1, num_rows + 1):
    if i % 2 != 0:  # If it's an odd row
        for j in range(i):
            print("*", end="")
        print()
    else:  # If it's an even row
        for j in range(i):
            print("*", end="")
        print()
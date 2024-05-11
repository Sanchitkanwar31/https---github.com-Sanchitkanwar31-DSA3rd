import numpy as np

t = int(input())  # Input the number of test cases

for _ in range(t):  # Loop over each test case
    n, c, d = map(int, input().split())  # Input n, c, and d for each test case

    arr = []  # Initialize an empty list to store the elements of the array
    for _ in range(n):  # Loop to input elements of each row
        row = list(map(int, input().split()))  # Input elements for the current row
        arr.append(row)  # Append elements of the current row to the list

    # Create a numpy array from the list of elements
    arr = np.array(arr)
    arr = arr.reshape(n, n)

    flag = 0
    for i in range(n - 1):
        for j in range(n - 1):
            if arr[i + 1, j] != arr[i, j] + c or arr[i, j + 1] != arr[i, j] + d:
                flag = 1
                break
        if flag == 1:
            break

    if flag == 0:
        print("YES")
    else:
        print("NO")
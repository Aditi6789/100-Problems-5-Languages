originalStr = "Hello"
reversedStr = ""

for i in range(len(originalStr) - 1, -1, -1):
    reversedStr = reversedStr + originalStr[i]

print("Original String :", originalStr)
print("Reversed String :", reversedStr)
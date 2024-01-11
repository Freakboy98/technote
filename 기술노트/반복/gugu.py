val = int(input("Enter:"))
if 1 <= val <= 9:
    for i in range(1,10):
        res = val * i
        print(str(val) + " * " + str(i) + " = " + str(res))
else:
    print("Error!")

def addition(iNo1, iNo2):
    return iNo1 + iNo2

def subtraction(iNo1, iNo2):
    return iNo1 - iNo2

def multiplication(iNo1, iNo2):
    return iNo1 * iNo2;

def division(iNo1, iNo2):
    return iNo1 / iNo2

def main():
    print("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division")
    i = 0
    iRet = 0
    i = int(input())
    a = int(input("Enter first number : "))
    b = int(input("Enter second number : "))

 
    if i == 1:
        iRet = addition(a, b)
    elif i == 2:
        iRet = subtraction(a, b)
    elif i == 3:
        iRet = multiplication(a, b)
    elif i == 4:
        iRet = division(a, b)
    else:
        print("Invalid option selected !!")

    print("Answer is : ",iRet)

if __name__ == "__main__":
    main()

def factorial(number: int):
    if number == 0 or number == 1: 
        return 1
    else:
        return number * factorial(number - 1)

number = int(input("Enter A Number: "))
print(f"Factorial of {number} Is: {factorial(number)}")

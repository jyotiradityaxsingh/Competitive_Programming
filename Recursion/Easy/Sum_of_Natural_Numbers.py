def sumOfNaturalNumbers(number: int):
    if number == 0:
        return 0
    else:
        return number + sumOfNaturalNumbers(number - 1)

number = int(input("Enter A Number: "))
print(f"Sum of Natural Numbers Up To {number} Is: {sumOfNaturalNumbers(number)}")

def reverseAString(string: str):
    if len(string) <= 1:
        return string
    else:
        return reverseAString(string[1:]) + string[0]

string = input("> ")
print(f"Reversed: {reverseAString(string)}")

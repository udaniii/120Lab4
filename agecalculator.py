birth_year = int(input("Enter your birth year: "))
current_year = int(input("Enter the current year: "))


age = current_year - birth_year


if age >= 18:
    print("You are eligible to vote in both National and Local Elections.")
else:
    print("You are not eligible to vote yet.")

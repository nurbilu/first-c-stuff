def main():
    while True:
        user_input = input("Enter first number (float), or type 'q' to exit: ")
        if user_input.lower() == 'q':
            print("Exiting program.")
            break
        try:
            num1 = float(user_input)
            num2_input = input("Enter second number (float), or type 'q' to exit: ")
            if num2_input.lower() == 'q':
                print("Exiting program.")
                break
            num2 = float(num2_input)
            modulus = num1 % num2
            division = num1 // num2
            print(f"The modulus of {num1} and {num2} is {modulus}")
            print(f"The result of {num1} / {num2} is {division}")
        except ValueError:
            print("Invalid input, please enter a valid float or 'q' to exit.")

if __name__ == "__main__":
    main()

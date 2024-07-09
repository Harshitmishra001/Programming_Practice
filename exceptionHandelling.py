while True:
    try:
        x=int(input("Enter a Number:"))
        break
    except ValueError:
        print("No valid Number")
        break
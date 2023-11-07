#vowels in string
string = input("Enter a string: ")
string = string.lower()
vowel_count = 0
vowels = "aeiou"
for char in string:
    if char in vowels:
        vowel_count += 1
print(f"The number of vowels in the string is:{vowel_count}")
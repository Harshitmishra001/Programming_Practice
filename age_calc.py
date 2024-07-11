from datetime import datetime
dob_input = input("Enter your date of birth (dd/mm/yyyy): ")
dob = datetime.strptime(dob_input, "%d/%m/%Y")
current_date = datetime.now()
current = current_date - dob
years = current.days // 365
remaining_days_after_years = current.days % 365
months = remaining_days_after_years // 30
days = remaining_days_after_years % 30
print("You are",years,"years",months," months and ",days,"days old.\n")
if years>=60:
    print("You are Eligible for senior citizen Discount ")
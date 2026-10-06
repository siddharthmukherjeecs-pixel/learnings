print("Welcome to the tip calculator!")
bill= eval(input("what was the total bill?: ₹"))
tip = eval(input("how much tip u want to give ? 10 12 15: "))
people = int(input("how many people to split the bill?: "))
total_overall = bill + (tip/100*bill)
amount_paid = round(total_overall/people)

print(f"Each person should pay: ₹{amount_paid}")


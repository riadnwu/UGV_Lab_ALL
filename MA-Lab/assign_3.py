from itertools import combinations

available_numbers = [15.4, 19.35, 8.05, 27.60, 33.00]
desired_total = 51.05
num_numbers = 3

# Generate all possible combinations of num_numbers from available_numbers
combs = combinations(available_numbers, num_numbers)

# Check each combination to see if it adds up to the desired total
for c in combs:
    if round(sum(c), 2) == desired_total:
        answer = ', '.join([f'{num:.2f}' for num in c])
        print(f"Answer: {answer}")
        break
else:
    print("No combination of available numbers adds up to the desired total.")
# Demonstrates the use of a while loop to repeat a block of code while a condition is true
# Created by: Jacque Wilson on 10/05/2024 - OhanaCodes
"""
Explanation:
This program demonstrates the use of a while loop to print values from 1 to 5.
The loop will continue running as long as the `count` variable is less than or equal to 5.
After each iteration, the value of `count` is incremented by 1 to ensure the loop eventually stops.
"""

# Initialize the count variable
count = 1

# Loop unit count is greater than 5
while count <= 5:
    print(f"Count is :{count}")
    count += 1

# Output:
# Count is :1
# Count is :2
# Count is :3
# Count is :4
# Count is :5

# The while loop will continue to run as long as the count is less than or equal to 5.
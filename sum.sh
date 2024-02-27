#!/bin/bash

# Prompt the user to enter three numbers
echo "Enter three numbers:"
read num1
read num2
read num3

# Calculate the sum of the three numbers
sum=$((num1 + num2 + num3))

# Display the result
echo "The sum of $num1, $num2, and $num3 is: $sum"


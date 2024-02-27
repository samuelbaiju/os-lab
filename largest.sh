#!/bin/bash

# Prompt the user to enter the size of the array
echo "Enter the size of the array:"
read size

# Initialize an empty array
declare -a numbers

# Read numbers into the array based on the user-defined size
for ((i=0; i<size; i++)); do
    echo "Enter number $((i+1)):"
    read num
    numbers+=($num)
done

# Initialize variables for largest number and index
largest=${numbers[0]}

# Loop through the array to find the largest number
for num in "${numbers[@]}"; do
    if ((num > largest)); then
        largest=$num
    fi
done

echo "Numbers entered: ${numbers[@]}"
echo "The largest number entered is: $largest"


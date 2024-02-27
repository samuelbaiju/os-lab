#!/bin/bash

# Input the two numbers
echo "Enter the first number: "
read num1

echo "Enter the second number: "
read num2

echo "Numbers before swapping: $num1 $num2"

# Swapping the numbers
temp=$num1
num1=$num2
num2=$temp

echo "Numbers after swapping: $num1 $num2"

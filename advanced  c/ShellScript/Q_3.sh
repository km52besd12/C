#!/bin/sh
#3. Write script to print given number in reverse order, for eg. If no is 123 it must print as 321

echo -n "Enter the number:"
read var
result=0
while [ $var -gt 0 ]
do
	rem=$((var % 10))
	result=$((result * 10 + rem))
	var=$((var / 10))
done
echo "after number reverse:$result"


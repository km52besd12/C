#11.Write a shell script to find factorial of a given integer.
#!/bin/sh
echo -n "enter the number: "
read var
result=1
while [ $var -gt 1 ]
do
	result=$((result * var))
	var=$((var -1))
done
echo "the factorial of given number: $result"



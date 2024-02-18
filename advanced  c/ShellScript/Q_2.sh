#2. Write Script to find out biggest number from given three nos. Nos are supplied as command line arguments. Print error if sufficient arguments are not supplied.

#!/bin/sh

if [ $# -ne 3 ] ;then
	echo "usage:$0 num1 num2 num3"
	exit 1
fi
if [ $1 -gt $2 ] && [ $1 -gt $3 ]; then
	echo "$1 is biggest number"
elif [ $2 -gt $3 ] && [ $2 -gt $1 ]; then 
	echo "$2 is biggest number"
else
	echo "$3 is biggest number"
fi



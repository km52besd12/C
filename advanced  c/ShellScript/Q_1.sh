#1. Write shell script that will add two nos, which are supplied as command line argument, and if this two nos are not given show error and its usage


#!/bin/sh

if [ $# -ne 2 ]; then
    echo "Usage: $0 num1 num2"
    exit 1
fi

sum=$(expr $1 + $2)
echo "Sum: $sum"


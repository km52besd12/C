#!/bin/sh
#4. Write script to determine whether given file exist or not, file name is supplied as command line argument, Also check for sufficient number of command line arguments.

if [ $# -ne 1 ]; then
	echo "usage: $0 fileName"
	exit 1
fi
if [ -f "$1" ]; then
	echo "$1 file exsist"
else
	echo "$1 file doesn't exsist"
fi


#!/bin/bash
if [ $# -eq 0 ]; then
	echo "usage: $0 <file name>"
	exit 1
fi
for file in "$@"
do
	if [ !-f "$file" ]; then
		echo "Error $file File deosn't exsist or it is not a regular file"
		exit 1
		continue
	fi
	while IFS= read -r line
	do
		echo "$line"
		done	< "$file"
	done


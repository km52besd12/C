#7. Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it.
#
#!/bin/sh
if [ $# -lt 1 ]; then
	echo "usage: $0 word file name1,name2.."
	exit 1
fi
word=$1
shift
for file in "$@"
do
	if [ -f "$file" ]; then
		grep -v "$word" "$file" > "$file.tmp" && mv "$file.tmp" "$file"
	else
		echo "$file does not exist"
	fi
done


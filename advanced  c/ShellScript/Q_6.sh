#6. Write a shell script that accepts a file name, starting and ending line numbers as arguments and displays all the lines between the given line numbers.
#
#!/bin/sh
if [ "$#" -ne 3 ]; then
    echo "Usage: $0 filename start_line_number end_line_number"
    exit 1
fi
filename=$1
start_line=$2
end_line=$3
sed -n "${start_line},${end_line}p" "$filename"
#

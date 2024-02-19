#9. Write a shell script that receives any number of file names as arguments checks if every argument supplied is a file or a directory and reports accordingly. Whenever the argument is a file, the number of lines on it is also reported
#!/bin/sh
#!/bin/sh

for file in "$@"
do
    if [ -f "$file" ]; then
        echo "$file is a file."
        echo "Number of lines in $file: $(wc -l < "$file")"
    elif [ -d "$file" ]; then
        echo "$file is a directory."
    else
        echo "$file is neither a file nor a directory."
    fi
done


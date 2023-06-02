#! /bin/bash

echo "Enter file_name, start, end"
echo "Like temp.txt 20 30"
read FILE_NAME START END
echo $START $END $FILE_NAME
sed -n "$START,/$END/p" $FILE_NAME

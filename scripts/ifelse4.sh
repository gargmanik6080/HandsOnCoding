#!/bin/bash

read -p "Enter a number : " num

echo "the number entered was $num"
echo

if [ $num = "0010" ]; then
    echo "The number is a string"
elif [ $num -eq 10 ]; then
    echo "the number is 10"
fi

exit 0

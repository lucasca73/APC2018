#!/bin/bash

rm -f out.txt
touch out.txt

while IFS='' read -r line || [[ -n "$line" ]]; do
    rm -f aux.in
    touch aux.in
    echo $line > aux.in
    ./run < aux.in >> out.txt
    rm aux.in
done < "$1"
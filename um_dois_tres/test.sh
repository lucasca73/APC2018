
#!/bin/bash

rm -f out.txt
touch out.txt

while IFS= read -r line || [[ -n "$line" ]]; do
\trm -f aux.in
\ttouch aux.in
\techo $line > aux.in
\ttime ./run < aux.in >> out.txt
\trm aux.in
done < "$1"



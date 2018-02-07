make:
\trm -f run
\tgcc main.c -o run
\trm -f out.txt
\t./run < in.txt > out.txt
\tdiff -c out_expected.txt out.txt

alltests:
\tgcc main.c -o run
\tmake test
\tdiff -c out_expected.txt out.txt

test:
\tchmod +x test.sh
\t./test.sh in.txt



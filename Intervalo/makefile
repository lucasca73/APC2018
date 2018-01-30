make:
	gcc main.c -o run
	make test
	diff -c out_expected.txt out.txt

test:
	chmod +x test.sh
	./test.sh in.txt

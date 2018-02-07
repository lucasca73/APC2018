make:
	rm -f run
	gcc main.c -o run
	rm -f out.txt
	time ./run < in.txt > out.txt
	diff -c out_expected.txt out.txt

alltests:
	gcc main.c -o run
	make test
	diff -c out_expected.txt out.txt

test:
	chmod +x test.sh
	./test.sh in.txt



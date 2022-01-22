build: bubble-sort merge-sort radix-sort

bubble-sort: bubble-sort.c
	gcc -o bubble-sort bubble-sort.c -g -Wall -std=c99
merge-sort: merge-sort.cpp
	g++ -o merge-sort merge-sort.cpp -g -Wall
radix-sort: radix-sort.cpp
	g++ -o radix-sort radix-sort.cpp -g -Wall
.PHONY: clean
clean:
	rm -rf bubble-sort merge-sort radix-sort *.out

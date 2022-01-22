
output: main.o StdUtils.o
	gcc main.o StdUtils.o -o StdUtils.exe

StdUtils.o: StdUtils.c StdUtils.h
	gcc -c StdUtils.c


main.o: main.c
	gcc -c main.c

clean:
	rm *.o StdUtils.exe

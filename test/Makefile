
output: main.o StdUtils.o unity.o
	gcc main.o unity.o StdUtils.o -o TestStdUtils.exe
	./TestStdUtils.exe

unity.o: unity.c unity.h unity_internals.h
	gcc -c unity.c

StdUtils.o: StdUtils.c StdUtils.h
	gcc -c StdUtils.c

main.o: main.c StdUtils.h
	gcc -c main.c

clean:
	rm *.o TestStdUtils.exe

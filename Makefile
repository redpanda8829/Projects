libmyio.a: print.o
	ar crv libmyio.a print.o
libmyio.a: strtoint.o
	ar crv libmyio.a strtoint.o

print.o: print.c myio.h
	cc -c -g print.c
strtoint.o: strtoint.c myio.h
	cc -c -g strtoint.c


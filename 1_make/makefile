goldbach: goldbach.o functions.o 
	gcc -g -O0 -o goldbach goldbach.o functions.o
functions.o: functions.c
	gcc -O0 -c -Wall -Wextra -ansi functions.c
goldbach.o: goldbach.c func.h
	gcc -O0 -c -Wall -Wextra -ansi goldbach.c
clean:
	rm -rf *.o *.o~
fullclean:
	rm -rf *.o goldbach *.o~ *.c~ *.h~ makefile~
manual:
	cat manual.txt
help:
	cat help.txt
indent:
	indent -kr -nut -ts4 *.c
copy: goldbach
	cp ./goldbach ~/bin	
arch:
	tar --create --file goldbach.tar functions.c goldbach.c func.h makefile manual.txt help.txt	
wc:
	find . -name '*.c' | xargs wc -l
.DEFAULT:
	echo "Неизвестная команда."
	echo "Справка:"
	cat help.txt
.SILENT:
	manual .DEFAULT wc help
	
	
	
	
	
	
	
	
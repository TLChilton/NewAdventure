EXEC = run
CC = g++
CFLAGS = -c -Wall

# $(EXEC) has the value of shell variable EXEC, which is run.
$(EXEC) :main.o inventory.o character.o util.o

# run is created by the command g++ -o run etc
# note that the TAB before $(CC) is REQUIRED...
	$(CC) -o $(EXEC) main.o inventory.o character.o util.o

# main.o depends on the files main.h main.cpp
main.o :main.cpp
# main.o is created by the command g++ -c -Wall main.cpp
# note that the TAB before $(CC) is REQUIRED...
	$(CC) $(CFLAGS) main.cpp

util.o : util.cpp
	$(CC) $(CFLAGS) util.cpp

character.o :inventory.h character.cpp
	$(CC) $(CFLAGS) character.cpp

inventory.o :inventory.h inventory.cpp
	$(CC) $(CFLAGS) inventory.cpp

clean :
	rm *.o
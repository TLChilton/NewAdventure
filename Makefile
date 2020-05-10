EXEC = run
CC = g++
CFLAGS = -c -Wall

# $(EXEC) has the value of shell variable EXEC, which is run.
# run depends on the files main.o util.o heap.o
$(EXEC) :main.o inventory.o character.o

# run is created by the command g++ -o run main.o util.o heap.o graph.o
# note that the TAB before $(CC) is REQUIRED...
	$(CC) -o $(EXEC) main.o inventory.o character.o

# main.o depends on the files main.h main.cpp
main.o :main.cpp
# main.o is created by the command g++ -c -Wall main.cpp
# note that the TAB before $(CC) is REQUIRED...
	$(CC) $(CFLAGS) main.cpp

character.o :inventory.h character.cpp
	$(CC) $(CFLAGS) character.cpp

inventory.o :inventory.h inventory.cpp
	$(CC) $(CFLAGS) inventory.cpp

clean :
	rm *.o
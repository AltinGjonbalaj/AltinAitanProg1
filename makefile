P = Star
R = Planet
V = Vector
L = List
Q = program1
CFLAGS = -g -Wall -Werror -std=c++14

all: $(P)
#compiles and links them
$(P): $(R).o $(P).o  $(Q).o $(V).o $(L).o
	g++ $(CFLAGS) $(P).o $(R).o $(V).o $(L).o $(Q).o -o $(Q)
#produces object files then executables
$(P).o: $(P).cpp
	g++ $(CFLAGS) -c $(P).cpp -o $(P).o
$(R).o: $(R).cpp
	g++ $(CFLAGS) -c $(R).cpp -o $(R).o
$(V).o: $(V).cpp
	g++ $(CFLAGS) -c $(V).cpp -o $(V).o
$(L).o: $(L).cpp
	g++ $(CFLAGS) -c $(L).cpp -o $(L).o
$(Q).o: $(Q).cpp
	g++ $(CFLAGS) -c $(Q).cpp -o $(Q).o

.PHONY: clean run all
run: all
	./program1
	
#im not sure about this yet
clean:
	rm -rf *.o $(Q)

CC= g++
CCFLAGS= -std=c++17

calc: calc.cc
	$(CC) $(CCFLAGS) -o $@ $^

.PHONY: clean
clean: 
	rm calc

# vars
CC = g++
CFLAGS = -Wall 

default: Accts

# linke object files into a binary
Accts: Accts.o BankAcct.o MoneyMarketAcct.o CDAcct.o
	$(CC) $(FLAGS) -o Accts Accts.o BankAcct.o MoneyMarketAcct.o CDAcct.o

# compile source files into object files
Accts.o: Accts.cpp BankAcct.h MoneyMarketAcct.h CDAcct.h
	$(CC) $(FLAGS) -c Accts.cpp 

BankAcct.o: BankAcct.cpp BankAcct.h
	$(CC) $(FLAGS) -c BankAcct.cpp

MoneyMarketAcct.o: MoneyMarketAcct.cpp BankAcct.h MoneyMarketAcct.h
	$(CC) $(FLAGS) -c MoneyMarketAcct.cpp

CDAcct.o: CDAcct.cpp BankAcct.h CDAcct.h
	$(CC) $(FLAGS) -c CDAcct.cpp

# remove old binary, and object *.o files, and *~ backup files
clean:
	rm -rf Accts *.o *.~




# targets
LIB=square
TEST=runtests

# compiler settings
CC=g++

# target sources
LIBSRC=lib/square.cpp
TESTSRC=tests/main.cpp

test: $(TEST)

lib: $(LIB)

clean:
	@echo "Cleaning..."
	@rm -f lib$(LIB).so $(TEST) lib/*.o tests/*.o

$(TEST): $(LIB)
	@echo "Building tests..."
	$(CC) $(TESTSRC) -l$(LIB) -L. -Iinclude -o $(TEST)

$(LIB):
	@echo "Building library..."
	$(CC) -fPIC --shared $(LIBSRC) -o lib$(LIB).so


##############################################################################
# COMPILATION RULES
##############################################################################

# directories
BIN    = bin
OBJ    = obj
SRC    = src
CEXT   = c
HEXT   = h
C++EXT = cc # or c++, cpp, C, cxx, etc.
H++EXT = hh # or h++, hpp, H, hxx, h, etc.

$(OBJ)/%.o: $(SRC)/%.$(CEXT)
	$(CC) -c -o $@ $< $(CFLAGS)

$(OBJ)/%.oh: $(SRC)/%.$(CEXT) $(SRC)/%.$(HEXT)
	$(CC) -c -o $@ $< $(CFLAGS)

$(OBJ)/%.oo: $(SRC)/%.$(C++EXT)
	$(C++) -c -o $@ $< $(CFLAGS)

$(OBJ)/%.ooh: $(SRC)/%.$(C++EXT) $(SRC)/%.$(H++EXT)
	$(C++) -c -o $@ $< $(CFLAGS)

##############################################################################
# DIRECTORY RULES
##############################################################################

dirs:
	if [ ! -d "$(OBJ)" ]; then mkdir $(OBJ); fi
	if [ ! -d "$(BIN)" ]; then mkdir $(BIN); fi

clean:
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

rmdirs:
	rm -r -f $(BIN)
	rm -r -f $(OBJ)

##############################################################################
# LIBRARY DEFINITIONS
##############################################################################

# compilation / linking flags
LFLAGS = $(LIBGL) $(LIBGLU) -lm
CFLAGS = -Wall
LIBGLU = -lglfw # alternatively, -lglu, -lglut, -lglew, -lglfw, etc.

# test for correct OpenGL flag
# is it macOS?
ifeq ($(shell uname -s), Darwin)
    LIBGL = -framework OpenGL
# otherwise, it's Linux, Unix, etc.
else
    LIBGL = -lGL
endif

##############################################################################
# INCLUDE FILES
##############################################################################

INCLUDES = $(OBJ)/init.oh $(OBJ)/input.oh $(OBJ)/draw.oh

##############################################################################
# BINARY RULES
##############################################################################

one: $(OBJ)/one.o $(INCLUDES)
	$(CC) -o $@ $? $(LFLAGS)
include config.mk

SRC = main.cpp
OBJ = ${SRC:.cpp=.o}

all: tictactoe

tictactoe: ${OBJ}
	${CC} -o $@ ${OBJ} ${LDFLAGS}

clean:
	rm -f ${OBJ} tictactoe

.PHONY: all tictactoe clean

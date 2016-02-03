P=prompt
OBJECTS=
CFLAGS=-g -Wall -O3 mpc/mpc.c
LDLIBS=-ledit -lm
CC=c99

$(P): $(OBJECTS)

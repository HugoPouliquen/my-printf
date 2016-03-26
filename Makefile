################################################################################
# File Name       : Makefile                                                   #
# Created By      : Hugo POULIQUEN                                             #
# Creation Date   : 03 13th, 2016							                   #
# Last Changed By : Firstname Name                                             #
# Last Changed    : 03 13th, 2016											   #
# Purpose         : Provides compilation automation to the project             #
#                  - all   : Compile all source presents in the directory      #
#                  - clean : Clean all objects and executable presents in the  #
#                                                             directory        #
#                  - mrproper : Clean binary                                   #
################################################################################

.PHONY: clean, mrproper

#### DEFAULT PARAMETERS ####
EXECUTABLE = rocket_launch
# SOURCES = main.c hello.c
CFLAGS = -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic
CFLAGS += -l.
#LDFLAGS =
CC = gcc
# OBJECTS = $(SRCS:.c=.o)

#### CUSTOM PARAMETERS ####
RM = rm -f
PUTS = include/puts
STR  = include/str

all: main.o my_printf.o puts_char.o str_len.o
		$(CC) main.o puts_char.o str_len.o my_printf.o -o $(EXECUTABLE)

main.o: main.c $(PUTS)/puts_char.h $(STR)/str_len.h include/my_printf.h
		$(CC) -c main.c -o main.o $(CFLAGS)

my_printf.o: my_printf.c
		$(CC) -c my_printf.c -o my_printf.o $(CFLAGS)

puts_char.o: puts/puts_char.c
		$(CC) -c puts/puts_char.c -o puts_char.o $(CFLAGS)

str_len.o: str/str_len.c
		$(CC) -c str/str_len.c -o str_len.o $(CFLAGS)

clean:
		$(RM) *.o

mrproper: clean
		$(RM) $(EXECUTABLE)

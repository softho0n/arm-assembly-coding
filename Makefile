XP=xplayer
OP=oplayer

CC=arm-linux-gnueabi-gcc
AS=arm-linux-gnueabi-as
CFLAGS=--static -DXP='$(XP)' -DOP='$(OP)'

all: ttt
ttt: main.o is_end.o print_bd.o is_legal.o init_bd.o update_bd.o $(XP).o $(OP).o
	$(CC) $(CFLAGS) main.o is_end.o print_bd.o is_legal.o init_bd.o update_bd.o $(XP).o $(OP).o -o ttt
clean:
	rm -rf *.o ttt

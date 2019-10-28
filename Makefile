SHARED_SRC=src/cmplx.c src/io.c
SHARED_OBJ=$(patsubst %c, %o, $(SHARED_SRC))
INC=inc/
CFLAGS=-I $(INC)



all: exe/test01.elf exe/test02.elf exe/test03.elf exe/test04.elf exe/test05.elf exe/test06.elf exe/test07.elf exe/test08.elf exe/test_dft.elf exe/test_idft.elf


exe/%.elf: src/%.o $(SHARED_OBJ)
	gcc $< $(SHARED_OBJ) -o $@ -lm

%.o: %.c
	gcc -c $^ -I $(INC) -o $@ 

clean:
	rm -f exe/test*.elf src/*.o

test: all
	./exe/test01.elf;./exe/test03.elf;./exe/test04.elf;./exe/test05.elf;./exe/test06.elf;./exe/test07.elf;./exe/test08.elf;./exe/test_dft.elf;./exe/test_idft.elf

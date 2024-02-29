clean:
	rm -f *.o *.out *.a *.so *.gch my_executable
	find . -type f ! -name "*.*" ! -name "makefile" -delete

# Example: make SRC="ej1.c" OUT="ej1" compile
compile: $(SRC)
	gcc $(SRC) ../../utillist.c ../../getnum.c ../../rand.c -o $(OUT) -pedantic -Wall -std=c99 -lm -fsanitize=address

preprocess: $(SRC)
	gcc -E $(SRC) -pedantic -Wall -std=c99

.phony: clean compile
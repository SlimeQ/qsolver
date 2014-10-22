test: quad quad_math
	./quad
	./quad_math

quad: quad.c
	gcc -o quad quad.c

quad_math: quad_math.c
	gcc -o quad_math quad_math.c -lm

clean:
	rm quad quad_math

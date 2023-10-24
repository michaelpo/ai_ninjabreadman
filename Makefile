
clean:
	rm -f flip
	rm -f c_count_01
	rm -f c_count_mlbb

flip:
	cc -std=c99  flip.c  -o flip


c_count_01:
	cc -std=c99  c_count_01.c  -o c_count_01

c_count_mlbb:
	cc -std=c99  c_count_mlbb.c  -o c_count_mlbb


all:
	make clean
	make c_count_01
	make c_count_mlbb






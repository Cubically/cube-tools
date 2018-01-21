ifndef VERBOSE
.SILENT:
endif

all:
	echo "Please specify which target you want to build (tlf or rmm)."

tlf: c/top-left-front
rmm: c/remove-middles
cub: c/cubies

c/top-left-front:
	gcc c/src/top-left-front.c -o c/top-left-front

c/remove-middles:
	gcc c/src/remove-middles.c -o c/remove-middles

c/cubies:
	gcc c/src/cubies.c -o c/cubies

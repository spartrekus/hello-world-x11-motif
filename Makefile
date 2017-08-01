
all:
	    gcc -x c  -Wall -DLITTLE_ENDIAN -DINT_64 -O2 -I/usr/X11R6/include -L/usr/X11R6/lib -lm -lMrm -lXm -lXpm -lXext -lXt -lSM -lICE -lX11   hello-motif.c   -o file.out  
	#notworking gcc -lX11 -lXt -lXm hello-motif.c  -o file.out  ; ./file.out
 
run:
	 ./file.out 



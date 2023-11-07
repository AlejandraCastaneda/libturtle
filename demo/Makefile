all: demo

demo: demo.o
	g++ demo.o ../src/libturtle.a ../src/libpoint.a ../libembroidery/libembroidery.a -o demo

demo.o: demo.cpp
	g++ -g -c -std=c++1z -Wall -Wextra -pedantic -I../libembroidery demo.cpp

clean:
	rm *.o demo

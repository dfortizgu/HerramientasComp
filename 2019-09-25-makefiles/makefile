OBJ=sum1.o sum2.o sum3.o 

all : $(OBJ) sumas_error.x

%.o : %.cpp
	g++ -c $< -o $@

%.x : %.cpp
	g++ $^ -o $@

sumas_error.x : sumas_error.cpp $(OBJ)

.PHONY : clean
clean :
	rm -f  *.o *~ 


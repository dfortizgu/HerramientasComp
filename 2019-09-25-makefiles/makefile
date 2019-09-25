all : sumas.x datos.txt suma.pdf #Verifica que esten los archivos, si no estan los genera a partir de las reglas en el archivo
sumas.x : sumas_error.cpp
	g++ $< -o $@ 
datos.txt : sumas.x 
	./sumas.x > $@ 
suma.pdf : plot.gp datos.txt
	gnuplot plot.gp
#Borrar archivos basura, se ejecuta con $ make clean
.PHONY : clean
clean :
	rm -f sumas.x datos.txt suma.pdf

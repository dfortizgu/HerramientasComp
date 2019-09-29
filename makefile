#Este makefile añade los archivos .cpp 
all : github 

.PHONY : clean
clean :
	rm -f *~ *# *.x a.out *.exe

github : *.cpp
	git add $<
	git commit 
	#El commit se realiza en sublime en pc personal y en emacs en la universidad
	git push
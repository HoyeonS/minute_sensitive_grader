run: 
	gcc -o grade main.c score.c profile.c -Wall 
clean: 
	rm -f grade
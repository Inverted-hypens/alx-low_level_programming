Practice tasks to understand all about static libraries

Task 0:
- Created the object files for each of the function using ```gcc -c filname.c -o filename.o```
- Created the static library using ```ar rcs libmy.a filename.o filename2.o ...```

[Video for better understanding](https://youtu.be/3RmIVDgPmGk).


easy command for creating static library liball.a from the .c files in the directory
* ```gcc -c *.c``` 
* ```ar rc liball.a *.o```
* ```ranlib liball.a```

use ```ls *.c``` to see all files ending with ```.c```.
use ```ar -t staticlibraryname.a``` to view the objects files in it.

/*strlen: regresa la longitud de s */
#include <stdio.h>
#include <string.h>




main()

{

	int strlen_(char s[])
    int i;


    i=0;
    while (s[i] != '\0'){
    	++i;
	}
        
    return i;

}



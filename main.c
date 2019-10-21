#include <stdio.h>
#include <stdlib.h>


/*
    -s 'select'
        0 - Arithmetic mean
        1 - Weighted mean
        2 - Harmonic mean
        3 - Geometric mean

    -n 'number of factors'
*/

int main (int argc, char *argv[ ]) {
    int cont;
    puts("OK0");
	
	for(cont=0; cont < argc; cont++) {
        printf("ok");
        if (*argv[1] == 's') {
            switch(*argv[2]){
                case 0:
                    //arithmetic_calc();
                    break;
                case 1:
                    //weighted_calc();
                    break;
                case 2:
                    //harmonic_calc();
                    break;
                case 3:
                    //geometric_calc();
                    break;
                default:
                    printf("invalid mean");
            }
        }
    }
        
	getchar();
	return 0;    
}
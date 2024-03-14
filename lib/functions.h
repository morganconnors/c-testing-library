#include <stdio.h>


int test_input_argument(int test_int, char *test_char[]){
	printf("\n");
	for(int i = 0; i < test_int; i++){
		printf("Argument %d = %s\n", i, test_char[i]);
        }
	printf("\n");
	
	return 0;
}

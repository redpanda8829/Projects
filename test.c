#include "myio.h"
#include <stdio.h>
int main() {
	char input[] = "52_08";
	int k = strtoint(input);	
	printf("%d \n",42);
	printf("%d \n",strtoint("52_08"));
	printf("The int representation of 52_08 is %d \n",k);
	printf("%d\n", strtoint("42"));     
        printf("%d\n", strtoint("42_10"));  
        printf("%d\n", strtoint("0x2a_16"));
}


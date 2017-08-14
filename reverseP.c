#include <stdio.h>

int main() {

	char input[100], *ch;

	printf("Enter a message: ");
	
	for(ch = &input[0];ch < &input[100];ch++){
		*ch = getchar();
		if(*ch == '\n'){
			break;
		}
	}
	
	
	printf("\nReversal is: ");
	
	for(ch--;ch >= &input[0];ch--){
		putchar(*ch);
	}
	putchar('\n');

	

	return 0;
}

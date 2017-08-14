#include <stdio.h>



int main() {

	char ch;
	float wordLength=0.00, words=0.00, avgWordLength=0.00;

	printf("Enter a sentence :");
	ch = getchar();

	while (ch != '\n'){
		if(ch != ' '){
			wordLength++;
		}else if (ch == ' '){
			words++;
			avgWordLength += wordLength;
			wordLength = 0.00;
		}
		ch = getchar();
	}

	avgWordLength /= words;

	printf("Average word length: %.1f ", avgWordLength);

	return 0;
}

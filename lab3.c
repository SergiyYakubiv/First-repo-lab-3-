#include <stdio.h>

int main()
{
	system("color f0");
	char sent[] = { "Remove the spaces from the line and then return the resulting line" };
	int nospace = 0;
	printf("Sentence = %s\t %d\t", sent, strlen(sent));

	for (int i = 0, k = strlen(sent); i < k; i++) {

		if (sent[i] != ' ') {
			if (i != nospace) {
             
				sent[nospace] = sent[i];
			}
			nospace++;
		}
	}
	sent[nospace] = '\0';

	printf("\nNo space = %s\t %d\t", sent, strlen(sent));
	char temp;
	for (int i = 0, k = strlen(sent); i < k / 2; i++) {
		temp = sent[i];
		sent[i] = sent[k - i - 1];
		sent[k - i - 1] = temp;
	}
	printf("\nReverse = %s\t %d\t\n", sent, strlen(sent));

	system("pause");

	return 0;
}
	
	





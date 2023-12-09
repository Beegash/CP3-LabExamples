#include <stdio.h>

int main() {
	char filename[100];
	FILE *file;

	printf("Enter the file name: ");
	scanf("%s", filename);

	file = fopen(filename, "r");

	if (file == NULL) {
		printf("Error opening the file.\n");
		return 1;
	}


	char ch[100];
	while ((fgets(ch,100,file))) {
		printf("%s", ch);
	}

	fclose(file);

	return 0;
}

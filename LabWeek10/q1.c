#include <stdio.h>

int main()
{
	FILE *file;
	char input[100];

	file = fopen("/Users/ifozmen/Documents/CP3/LabWeek10/input.txt", "w");
	if (file == NULL)
	{
		printf("Unable to open the file.\n");
		return 1;
	}
	printf("Enter text: ");
	fgets(input, sizeof(input), stdin);
	fprintf(file, "%s", input);
	printf("Text written to file successfully.\n");

	fclose(file);

	return 0;
}

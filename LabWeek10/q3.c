#include <stdio.h>

void removeLineWithTempFile(const char* filename, int lineNumber) {
    // Open the input file in read mode
    FILE* inputFile = fopen(filename, "r");
    if (inputFile == NULL) {
        printf("Failed to open the input file.\n");
        return;
    }

    // Open a temporary file in write mode
    FILE* tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Failed to create the temporary file.\n");
        fclose(inputFile);
        return;
    }

    // Copy all lines from the input file to the temporary file except the specified line
    char buffer[1024];
    int currentLine = 1;
    while (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
        if (currentLine != lineNumber) {
            fputs(buffer, tempFile);
        }
        currentLine++;
    }

    // Close the input and temporary files
    fclose(inputFile);
    fclose(tempFile);

    // Remove the original file
    remove(filename);

    // Rename the temporary file to the original file name
    rename("temp.txt", filename);
}
int main() {
	const char* filename = "/Users/ifozmen/Documents/CP3/LabWeek10/input.txt";
	int lineNumber = 5;

	removeLineWithTempFile(filename, lineNumber);

	printf("Line %d removed from file %s.\n", lineNumber, filename);

	return 0;
}

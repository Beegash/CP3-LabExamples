#include <stdio.h>
#include <string.h>

int searchFile(const char* filename, const char* searchString) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return -1;
    }

    char line[256];
    int lineNumber = 1;
    int found = 0;

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, searchString) != NULL) {
            printf("Found '%s' at line %d: %s", searchString, lineNumber, line);
            found = 1;
        }
        lineNumber++;
    }

    fclose(file);

    if (!found) {
        printf("'%s' not found in the file.\n", searchString);
    }

    return 0;
}
int main() {
	const char* filename = "/Users/ifozmen/Documents/CP3/LabWeek10/q5.c";
	const char* searchString = "GitHub Copilot";

	searchFile(filename, searchString);

	return 0;
}

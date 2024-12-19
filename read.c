#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("output.csv", "r");
    if (file == NULL) {
        perror("Unable to open file");
        return 1;
    }

    char line[1024];
    while (fgets(line, sizeof(line), file)) {
        // Remove the newline character at the end, if present
        line[strcspn(line, "\n")] = '\0';

        // Tokenize the line based on commas
        char *token = strtok(line, ",");
        while (token) {
            printf("%s ", token);
            token = strtok(NULL, ",");
        }
        printf("\n");
    }

    fclose(file);
    return 0;
}

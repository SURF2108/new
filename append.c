#include <stdio.h>

int main() {
    FILE *file = fopen("output.csv", "a");
    if (file == NULL) {
        perror("Unable to open file");
        return 1;
    }

    // Appending a new row
    fprintf(file, "Diana,28,Australia\n");

    fclose(file);
    printf("Data appended to output.csv\n");
    return 0;
}

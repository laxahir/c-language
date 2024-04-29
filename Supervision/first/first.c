#include <stdio.h>

int main() {
  
    FILE *even_file = fopen("even_file.txt", "w");
    FILE *odd_file = fopen("odd_file.txt", "w");

    if (even_file == NULL || odd_file == NULL) {
        printf("Error opening files.");
        return 0;
    }

    for (int i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(even_file, "%d, ", i);
        } else {
            fprintf(odd_file, "%d, ", i);  
    }

    fclose(even_file);
    fclose(odd_file);

    printf("Even numbers from even_file.txt: ");
    for (int i = 50; i <= 70; i += 2) {
        printf("%d, ", i);
    }

    printf("\nOdd numbers from odd_file.txt: ");
    for (int i = 51; i <= 69; i += 2) {
        printf("%d, ", i);
    }

    return 0;
}

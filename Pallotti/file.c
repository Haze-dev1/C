#include <stdio.h>

int main() {
    int i;
    FILE *f_even, *f_odd;

    f_even = fopen("even.txt", "w");
    f_odd = fopen("odd.txt", "w");

    if (f_even == NULL || f_odd == NULL) {
        printf("Error: Unable to open the file\n");
        return 1;
    }

    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            fprintf(f_even, "%d\n", i);
        } else {
            fprintf(f_odd, "%d\n", i);
        }
    }

    fclose(f_even);
    fclose(f_odd);

    return 0;
}
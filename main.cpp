#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int max = 20;

    printf("Triples pitagóricos:\n");
    for (a = 1; a <= max; a++) {
        for (b = a; b <= max; b++) {
            c = sqrt(a * a + b * b);
            if (c * c == a * a + b * b) {
                printf("%d - %d - %d\n", a, b, c);
            }
        }
    }

    return 0;
}


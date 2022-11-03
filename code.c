#include <stdio.h>
int main() {
    int a, b, c, n, i, j;
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) {
        n = i;
        c = 0;

        while (n != 0) {
            if ((n % 10 == 3) || (n % 10 == 6) || (n % 10 == 9)) {
                c++;
            }
            n /= 10;
        }

        if (c == 0) {
            printf("%d ", i);
        } else {
            for (j = 0; j < c; j++) {
                printf("*");
            }
            printf(" ");
        }
    }
}
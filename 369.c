#include <stdio.h>
int main() {
    int f, l, cnt, s, i, j;
    scanf("%d %d", &f, &l);

    for (i = f; i <= l; i++) {
        s = i;
        cnt = 0;

        for (int k; ;) {
            if ((s % 10 == 3) || (s % 10 == 6) || (s % 10 == 9)) {
                cnt++;
            }
            s /= 10;
            if(s == 0) {
                break;
            }
        }

        if (cnt == 0) {
            printf("%d ", i);
        } else {
            for (j = 0; j < cnt; j++) {
                printf("*");
            }
            printf(" ");
        }
    }
}
/* 1251

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
}

----------*/

/* 1252

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

----------*/

/* 1253



----------*/

/* 1254



----------*/

/* 1255



----------*/

/* 1256



----------*/

/* 1257



----------*/

/* 1258



----------*/

/* 1259



----------*/

/* 1260



----------*/

/* 1261



----------*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if(a < b) {
        for (int i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = b; i <= a; i++) {
            printf("%d ", i);
        }
    }
}
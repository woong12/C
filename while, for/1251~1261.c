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

----------*/

/* 1254

#include <stdio.h>

int main() {
    char a, b;
    scanf("%c %c", &a, &b);

    for(int i = a; i <= b; i++) {
        printf("%c ", i);
    }
}

----------*/

/* 1255

#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    for(double i = a; i <= b; i+=0.01) {
        printf("%.2lf ", i);
    }
}

----------*/

/* 1256

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for(int i = 1; i <= a; i++) {
        printf("*");
    }
}

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

    for(int i = a; i <= b; i++) {
        if(i % 2 == 1) {
        printf("%d ", i);
        }
    }
}
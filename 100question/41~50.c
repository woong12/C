/* 1041

#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    printf("%c", a + 1);
}

----------*/

/* 1042

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a/b);
}

----------*/

/* 1043

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a%b);
}

----------*/

/* 1044

#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    printf("%lld", a + 1);
}

----------*/

/* 1045

#include <stdio.h>

int main() {
    int a, b ;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
    printf("%.2f\n", (float)a / b);     //형변환
}

----------*/

/* 1046

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n%.1f", a + b + c, (float)(a + b + c)/3);
}

----------*/

/* 1047

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a<<1);     //비트시프트연산 2배
}

----------*/

/* 1048

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a<<b);
}

----------*/

/* 1049

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(a > b) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }
}

----------*/

/* 1050

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if(a == b) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }
}

----------*/
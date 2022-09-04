/* 1061

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a|b);
}

----------*/

/* 1062

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a^b);
}

----------*/

/* 1063

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a > b ? a : b);     //삼항연산자
}

----------*/

/* 1064

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a > b ? b : a)> c ? c : (a > b ? b : a)); 
}

----------*/

/* 1065

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a%2==0){
    printf("%d\n", a);
    }

    if(b%2==0){
    printf("%d\n", b);
    }

    if(c%2==0){
    printf("%d\n", c);
    }
}

----------*/

/* 1066

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a % 2 == 0){
        printf("even\n");
    } else {
        printf("odd\n");
    }

    if(b % 2 == 0){
        printf("even\n");
    } else {
        printf("odd\n");
    }

    if(c % 2 == 0){
        printf("even\n");
    } else {
        printf("odd\n");
    }
}

----------*/

/* 1067

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a < 0) {
        if (a % 2 == 0) {
            printf("minus\neven");
        } else {
            printf("minus\nodd");
        }
    } else {
        if (a % 2 == 0){
            printf("plus\neven");
        } else {
            printf("plus\nodd");
        }
    }
}

----------*/

/* 1068

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a == 100) {
        printf("A");
    } else if (a >= 90) {
        printf("A");
    } else if (a >= 70) {
        printf("B");
    } else if (a >= 40) {
        printf("C");
    } else {
        printf("D");
    }
}

----------*/

/* 1069

#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    switch(a) {
        case 'A':
            printf("best!!!");
            break;
        case 'B':
            printf("good!!");
            break;
        case 'C':
            printf("run!");
            break;
        case 'D':
            printf("slowly~");
            break;
        default :
            printf("what?");
            break;
    }
}

----------*/

/* 1070

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    switch(a) {
        case 12:
        case 1:
        case 2:
            printf("winter");
            break;
        case 3:
        case 4:
        case 5:
            printf("spring");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer");
            break;
        case 9:
        case 10:
        case 11:
            printf("fall");
    }
}

----------*/
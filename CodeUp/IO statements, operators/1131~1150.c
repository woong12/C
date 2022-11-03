/* 1131

#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    printf("%c", a);
}

----------*/

/* 1132

#include <stdio.h>

int main() {
    char a[9];
    scanf("%s", &a);
    printf("%s", a);
}

----------*/

/* 1133

#include <stdio.h>

int main() {
    char a[31]="";
    fgets(a, 31, stdin);
    printf("%s", a);
}

----------*/

/* 1135

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a >= b) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }
}

----------*/

/* 1136

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

/* 1137

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a != b) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }
}

----------*/

/* 1138

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", !a);
}

----------*/

/* 1139

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 1 && b == 1) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }
}

----------*/

/* 1140

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 1 || b == 1) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }
}

----------*/

/* 1143

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a&b);
}

----------*/

/* 1144

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a|b);
}

----------*/

/* 1147

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a<<b);
}

----------*/

/* 1148

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a>>b);
}

----------*/

/* 1149

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }
}

----------*/

/* 1150

#include <stdio.h>

int main() {
    int a, b, c, min;
    min = 100;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < min) {
        min = a;
    }
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    printf("%d", min);
}

----------*/
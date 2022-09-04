/* 1021

#include <stdio.h>

int main() {
    char data[51]="";
    scanf("%s", &data);
    printf("%s", data);
}

----------*/

/* 1022

#include <stdio.h>

int main() {
    char data[2001]="";
    fgets(data, 2000, stdin); //공백문자가 포함되어있는 문장을 입력받아 저장할 수 있음
    printf("%s", data);
}

----------*/

/* 1023

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d.%d", &a, &b);
    printf("%d\n%d", a, b);
}

----------*/

/* 1024

#include <stdio.h>

int main() {
    char d[21]="";      //20자 이하의 단어
    scanf("%s", &d);

    for (int i = 0; d[i] != '\0'; i++)      //널문자가 아닐 때 까지 반복
    {
        printf("\'%c\'\n", d[i]);
    }
    
}

----------*/

/* 1025

#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]", a*10000, b*1000, c*100, d*10, e*1);
}

----------*/

/* 1026

#include <stdio.h>

int main() {
    int h, m, s;
    scanf("%02d:%02d:%02d", &h, &m, &s);
    printf("%d", m);
}

----------*/

/* 1027

#include <stdio.h>

int main() {
    int y, m, d;
    scanf("%04d.%02d.%03d", &y, &m, &d);
    printf("%02d-%02d-%04d", d, m, y);
}

----------*/

/* 1028

#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%u", &a);
    printf("%u", a);
}

----------*/

/* 1029

#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);
    printf("%.11lf", a);
}

----------*/

/* 1030

#include <stdio.h>

int main() {
    long long int a;
    scanf("%lld", &a);
    printf("%lld", a);
}

----------*/

/* 1201

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    if(a > 0) {
        printf("양수");
    } else if(a < 0) {
        printf("음수");
    } else {
        printf("0");
    }
}

----------*/

/* 1202

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    if(a >= 90) {
        printf("A");
    } else if(a >= 80) {
        printf("B");
    } else if(a >= 70) {
        printf("C");
    } else if(a >= 60) {
        printf("D");
    } else {
        printf("F");
    }
}

----------*/

/* 1203

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    if(a <= 10) {
        printf("정상");
    } else if(a <= 20) {
        printf("과체중");
    } else {
        printf("비만");
    }
}

----------*/

/* 1204

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    if (a == 11 || a == 12 || a == 13) {
        printf("%dth", a);
    } else if(a % 10 == 1) {
        printf("%dst",a);
    } else if(a % 10 == 2) {
        printf("%dnd", a);
    } else if(a % 10 == 3) {
        printf("%drd", a);
    } else {
        printf("%dth", a);
    }
}

----------*/

/* 1205        //어려움

#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    float plus, minus, minus2, multi, div, div2, math, math2, result;

    scanf("%f %f", &a, &b);

    plus=a+b; // +연산
    minus=a-b; // -연산 1
    minus2=b-a; // -연산 2
    multi=a*b; // X연산
    div=a/b; // /연산 1
    div2=b/a; // /연산 2
    math=pow(a,b); // 제곱연산 1
    math2=pow(b,a); // 제곱연산 2

    result=plus>=minus ? plus:minus;
    result=result>=minus2 ? result:minus2;
    result=result>=multi ? result:multi;
    result=result>=div ? result:div;
    result=result>div2 ? result:div2;
    result=result>math ? result:math;
    result=result>math2 ? result:math2;

    printf("%lf", result);
}

----------*/

/* 1206

#include <stdio.h>

int main() {
    int a, b, c , d;
    scanf("%d %d", &a, &b);
    
    if(a % b == 0) {
        c = a / b;
        printf("%d*%d=%d", b, c, a);
    } else if(b % a == 0) {
        d = b / a;
        printf("%d*%d=%d", a, d, b);
    } else {
        printf("none");
    }
}

----------*/

/* 1207

#include <stdio.h>

int main() {
    int a, b, c , d, sum = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    sum = a + b + c + d;
    if(sum == 1) {
        printf("도");
    } else if(sum == 2) {
        printf("개");
    } else if(sum == 3) {
        printf("걸");
    } else if(sum == 4) {
        printf("윷");
    } else {
        printf("모");
    }
}

----------*/

/* 1210

#include <stdio.h>

int main() {
    int a, b, cal1, cal2;
    scanf("%d %d", &a, &b);
    
    if(a == 1) {
        cal1 = 400;
    } else if(a == 2) {
        cal1 = 340;
    } else if(a == 3) {
        cal1 = 170;
    } else if(a == 4) {
        cal1 = 100;
    } else if(a == 5) {
        cal1 = 70;
    }

    if(b == 1) {
        cal2 = 400;
    } else if(b == 2) {
        cal2 = 340;
    } else if(b == 3) {
        cal2 = 170;
    } else if(b == 4) {
        cal2 = 100;
    } else if(b == 5) {
        cal2 = 70;
    }

    if(cal1 + cal2 > 500) {
        printf("angry");
    } else {
        printf("no angry");
    }
}

----------*/

/* 1212

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b && a > c) {
        if(a < b + c) {
            printf("yes");
        } else {
            printf("no");
        }
    } else if(b > a && b > c) {
        if(b < a + c) {
            printf("yes");
        } else {
            printf("no");
        }
    } else if(c > a && c > a) {
        if(c < a + b) {
            printf("yes");
        } else {
            printf("no");
        }
    } else {
        printf("yes");
    }
}

----------*/

/* 1214

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(b == 2) {
        if((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0)) {
            printf("29");
        } else {
            printf("28");
        }
    } else {
        if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
            printf("31");
        } else {
            printf("30");
        }
    }
}

----------*/

/* 1216

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a + c < b) {
        printf("advertise");
    } else if(a + c > b) {
        printf("do not advertise");
    } else {
        printf("does not matter");
    }
}


----------*/

/* 1218

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c)
    {
        if (a == b && b == c) {
            printf("정삼각형\n");
        } else if (a * a + b * b == c * c) {
            printf("직각삼각형\n");
        } else if (a == b || a == c || b == c) {
            printf("이등변삼각형\n");
        } else {
            printf("삼각형\n");
        }
    } else {
        printf("삼각형아님\n");
    }
}

----------*/

/* 1222

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    for(int i = a; i < 90; i+=5) {
        b++;
    }
    if(b > c) {
        printf("win");
    } else if(b < c) {
        printf("lose");
    } else {
        printf("same");
    }
}

----------*/

/* 1224



----------*/

/* 1226



----------*/

/* 1228



----------*/

/* 1229



----------*/

/* 1230



----------*/

/* 1231



----------*/


#include <stdio.h>

int main() {
    double a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((double)(a / b) > (double)(c / d)) {
        printf(">");
    } else if((double)(a / b) == (double)(c / d)) {
        printf("=");
    } else if((double)(a / b) < (double)(c / d)) {
        printf("<");
    }
}
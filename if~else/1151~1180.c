/* 1151

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a < 10) {
        printf("small");
    }
}

----------*/

/* 1152

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a < 10) {
        printf("small");
    } else {
        printf("big");
    }
}

----------*/

/* 1153

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a ,&b);
    if(a > b) {
        printf(">");
    } else if(b > a) {
        printf("<");
    } else if(a == b) {
        printf("=");
    }
}

----------*/

/* 1154

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a ,&b);
    if (a > b) {
        printf("%d", a-b);
    } else if(b > a) {
        printf("%d", b-a);
    } else if(a == b) {
        printf("%d", a-b);
    }
}

----------*/
/* 1155

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a%7==0) {
        printf("multiple");
    } else {
        printf("not multiple");
    }
}

----------*/

/* 1156

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a % 2 == 1) {
        printf("odd");
    } else {
        printf("even");
    }
}

----------*/

/* 1157

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a >= 50 && a < 60) {
        printf("win");
    } else {
        printf("lose");
    }
}

----------*/

/* 1158

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if((a >= 30 && a <= 40) || (a >= 60 && a <= 70)) {
        printf("win"); 
    } else {
        printf("lose");
    }
}

----------*/

/* 1159

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if((a >= 50 && a <= 70) || (a % 6 == 0)) {
        printf("win"); 
    } else {
        printf("lose");
    }
}

----------*/

/* 1160

#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);
    
    if(a % 2 == 1) { 
        printf("oh my god");
    }else{
        printf("enjoy");
    }
}

----------*/

/* 1161

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(a % 2 != 0) {
        printf("È¦¼ö+");
        if(b % 2 == 0) {
            printf("Â¦¼ö=È¦¼ö");
        } else {
            printf("È¦¼ö=Â¦¼ö");
        }
    } else if(a % 2 == 0) {
        printf("Â¦¼ö+");
        if(b % 2 == 0) {
            printf("Â¦¼ö=Â¦¼ö");
        } else {
            printf("È¦¼ö=È¦¼ö");
        }
    }
}

----------*/

/* 1162

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a - b + c) % 10 == 0) {
        printf("´ë¹Ú");
    } else {
        printf("±×·°Àú·°");
    }
}

----------*/


/* 1163

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if ((int)((a + b + c) / 100) % 2 == 0) {
        printf("´ë¹Ú");
    } else {
        printf("±×·°Àú·°");
    }
}

----------*/

/* 1164

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a <= 170) {
        printf("CRASH");
    } else if(b <= 170) {
        printf("CRASH");
    } else if(c <= 170) {
        printf("CRASH"); 
    } else {
        printf("PASS");
    }
}

----------*/

/* 1165

#include <stdio.h>

int main() {
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    b+=1;
    for(int i = a; i < 89; i++ ) {
        sum++;
        if(sum % 5 == 0) {
            b += 1;
        }
    }
    printf("%d", b);
}

----------*/

/* 1166



----------*/

/* 1167



----------*/

/* 1168



----------*/

/* 1169



----------*/

/* 1170



----------*/


/* 1171



----------*/

/* 1172



----------*/

/* 1173



----------*/

/* 1180



----------*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if(a % 400 == 0) {
        printf("Leap");
    } else if(a % 4 == 0 && a % 100 != 0) {
        printf("Leap");
    } else {
        printf("Normal");
    }

    
}
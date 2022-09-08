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



----------*/


/* 1163



----------*/

/* 1164



----------*/

/* 1165



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
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a - b + c == 0) {
        printf("´ë¹Ú");
    } else {
        printf("±×·°Àú·°");
    }
}
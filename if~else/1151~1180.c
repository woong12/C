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

----------*/

/* 1167

#include <stdio.h>

int main() {
    int a, b, c, result;
    result = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a <= b && a <= c) {
        if(b <= c) {
            result = b;
        } else {
            result = c;
        }
    } else if(b <= a && b <= c) {
        if(a <= c) {
            result = a;
        } else {
            result = c;
        }
    } else if(c <= a && c <= b) {
        if(a <= b) {
            result = a;
        } else {
            result = b;
        }
    }
    printf("%d",  result);
}

----------*/

/* 1168

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a / 10000;
    if(b == 1 || b == 2) {
        printf("%d", 2012 - (1900+c) + 1);
    } else {
        printf("%d", 2012 - (2000+c) + 1);
    }
}

----------*/

/* 1169

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d", &a);

    a = 2012 - a + 1; //ÅÂ¾î³­ ³ªÀÌ
    b = a % 100;  //ÅÂ¾î³­ ³ªÀÌ µÚÀÇ µÎ ÀÚ¸® ¼ö

    if(a < 2000) {
        printf("%d %d", b, 1);
    } else {
        printf("%d %d", b, 3);
    }
}

----------*/

/* 1170

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(c > 10) {
        printf("%d%d%d", a, b, c);
    } else {
        printf("%d%d0%d", a, b, c);
    }
}

----------*/


/* 1171

#include <stdio.h>

int main() {
    int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (b<10)
		printf("%d0%d", a, b);
	else
		printf("%d%d", a, b);
	
	if (c<10)
		printf("00%d", c);
	else if (c<100)
		printf("0%d", c);
	else
		printf("%d", c);
}

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
	
	if(a <= b && a < c) {
        if(b < c)  {
            printf("%d %d %d", a, b, c);
        } else {
            printf("%d %d %d", a, c, b);
        }
    } else if(b <= a && b < c) {
        if(a < c) {
            printf("%d %d %d", b, a, c); 
        } else {
            printf("%d %d %d", b, c, a);
        }
    } else if(c < a && c < b) {
        if(a < b) {
            printf("%d %d %d", c, a, b);
        } else {
            printf("%d %d %d", c, b, a);
        }
    }
}
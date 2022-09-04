/* 1071

#include <stdio.h>

int main() {
    int num;
    checkpoint:
        scanf("%d", &num);
        if(num!=0) {
            printf("%d\n", num);
            goto checkpoint;    //goto 문 scanf에서 받은 입력값이 0일 아닐 때 checkpoint로 돌아감
        }
}

----------*/

/* 1072

#include <stdio.h>

int main() {
    int n, m; 
    scanf("%d", &n);
    go:
        scanf("%d", &m);
        printf("%d\n", m);
        n -= 1;
        if(n > 0) goto go;
        
    return 0;
}

----------*/

/* 1073

#include <stdio.h>

int main() {
	int num;
	while (1) {
	scanf("%d", &num);
            if (num == 0) 
            break;
    printf("%d\n", num);
	}
	return 0;
}

----------*/

/* 1074

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    while(num != 0) {
        if(num >=0 && num <=100){
            printf("%d\n", num);
            num--;
        }
    }
	return 0;
}

----------*/

/* 1075

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    while(num != 0) {
        if(num >=0 && num <=100){
            num--;
            printf("%d\n", num);
        }
    }
	return 0;
}

----------*/

/* 1076

#include <stdio.h>

int main() {
    char c, a;
    a = 'a';
    scanf("%c", &c);

    do {
        printf("%c ", a);
        a++;
    } while(a <= c);
}

----------*/

/* 1077

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        printf("%d\n", i);
    }
    
}

----------*/

/* 1078

#include <stdio.h>

int main() {
    int num, sum = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }
        printf("%d", sum);
}

----------*/

/* 1079

#include <stdio.h>

int main() {
    char a;
    while (a != 'q'){
        scanf("%c", &a);
        printf("%c", a);
    }
}

----------*/

/* 1080

#include <stdio.h>

int main() { 
    int i=0, sum=0, n;
    scanf("%d", &n);

    while(sum < n) {
        i++;
        sum += i;
    }
    printf("%d", i);
}

----------*/
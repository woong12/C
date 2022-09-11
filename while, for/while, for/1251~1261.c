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

----------*/

/* 1258

#include <stdio.h>

int main() {
    int sum = 0, a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++) {
        sum += i;
    }
    printf("%d", sum);
}

----------*/

/* 1259

#include <stdio.h>

int main() {
    int sum = 0, a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }
    printf("%d", sum);
}

----------*/

/* 1260

#include <stdio.h>

int main() {
    int sum = 0, a, b;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++) {
        if(i % 3 == 0) {
            sum += i;
        }
    }
    printf("%d", sum);
}

----------*/

/* 1261

#include <stdio.h>

int main(){
	int num[11],i,b=0;
	for(i=0; i<11; i++){
		scanf("%d",&num[i]);
		if(num[i]%5==0){
			printf("%d",num[i]);
			b++;
			break;
		}
	}
	if(b==0)
		printf("0");
}

----------*/
/* 1081

#include <stdio.h>

int main() {
    int i, j, n, m;
    scanf("%d %d", &n, &m);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            printf("%d %d\n", i, j);
        }
    }
}

----------*/

/* 1082

#include <stdio.h>

int main() {
    int n;
    scanf("%x", &n);
    for(int i = 1; i <=15; i++) {
        printf("%X*%X=%X\n", n, i, n*i);
    }
}

----------*/

/* 1083

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0) {
            printf("X ");
            continue;
        }
        printf("%d ", i);
    }
}

----------*/

/* 1084

#include <stdio.h>

int main() {
    int r, g, b, sum = 0;
    scanf("%d %d %d", &r, &g, &b);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < g; j++) {
            for(int k = 0; k < b; k++) {
                printf("%d %d %d\n", i, j, k);
                sum++;
            }
        }
    }
    printf("%d", sum);
}

----------*/

/* 1085

#include <stdio.h>

int main() {
    long long int h, b, c, s;
    scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
    double mb = h*b*c*s;
    printf("%.1lf MB", mb/(8*1024*1024));
}

----------*/

/* 1086

#include <stdio.h>

int main() {
	double h, b, c ;
	scanf("%lf %lf %lf", &h, &b, &c);
	printf("%.2lf MB", (h*b*c)/(8 * 1024 * 1024));
}

----------*/

/* 1087


#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += i;
        if(sum >= n) {
            break;
        }
    }
    printf("%d", sum);
}

----------*/

/* 1088

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i % 3 !=0) {
            printf("%d ", i);
        }
    }
}

----------*/

/* 1089

#include <stdio.h>

int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    for(int i = 1; i <n; i++) {
        a += b;
    }
    printf("%d", a);
}

----------*/

/* 1090

#include <stdio.h>

int main() {
    long long int a, b, n;
    scanf("%lld %lld %lld", &a, &b, &n);
    for(int i = 1; i < n; i++) {
        a *= b;
    }
    printf("%lld", a);
}

----------*/
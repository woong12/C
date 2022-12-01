/* 1

#include <stdio.h>

int main() {
    int i;

    int num[3];

    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    for (i = 0; i < 3; i++) {
        printf("num[%d] = %d\n", i, num[i]);
    }
}

----------*/

/* 2

#include <stdio.h>

int main() {
    int arr[5] = {10, 15, 85, 66, 20};
    printf("%d\n", arr[0]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[4]);
}

----------*/

/* 3

#include <stdio.h>

int main() {
    int a[10], i;
    for (i = 0; i < 10; i++) {
        a[i] = 5;
    }
    printf("a[5]: %d\n", a[5]);
    printf("a[7]: %d\n", a[7]);
}

----------*/

/* 4-hint

#include <stdio.h>

int main() {
    int data[6], i;

    for (i = 0; i < 6; i++) {
        printf("정수를 입력 : ");
        scanf("%d", &data[i]);
    }
    for (i = 5; i >= 0; i--) {
        printf("%d ", data[i]);
    }
}

----------*/

/* 5

#include <stdio.h>

int main() {
    int score[5];
    int i, sum = 0;

    for (i = 0; i < 5; i++) {
        printf("%d번 학생의 프로그래밍 성적을 입력: ", i + 1);
        scanf("%d", &score[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += score[i];
    }
        printf("총점 : %d \n", sum);
        printf("평균 : %.2lf \n", sum / 5.0);
}

----------*/

/* 6

#include <stdio.h>

int main() {
    int score[5];
    int i, max = 0;
    
    for (i = 0; i < 5; i++) {
        printf("%d번 학생의 프로그래밍 성적을 입력: ", i + 1);
        scanf("%d", &score[i]);
    }

    for (i = 0; i < 5; i++) {
        if (max < score[i]) {
            max = score[i];
        }
    }
    printf("최고점수 : %d \n", max);
}

----------*/

/* 7

#include <stdio.h>

int main() {
    int h[]={170, 178, 175, 180, 177, 167, 189};
    int i, h_min = h[0], num;

    for (i = 0; i < 7; i++) {
        if (h[i] < h_min) {
            h_min = h[i];
            num = i + 1;
        }
    }
    printf("가장 키가 작은 학생번호 = %d번, 키 = %dcm \n", num, h_min);
}

----------*/

/* 8

#include <stdio.h>

int main() {
    char str[10];
    printf("당신의 이름은 무엇입니까? : ");
    scanf("%s", &str);
    printf("안녕하세요 %s님\n", str);
}

----------*/

/* 9



----------*/

/* 10



----------*/

/* 11



----------*/

/* 12



----------*/

/* 13



----------*/

/* 14



----------*/

/* 15



----------*/

/* 16



----------*/

/* 17



----------*/

/* 1



----------*/

/* 2



----------*/

/* 3



----------*/

/* 4



----------*/

/* 5



----------*/

/* 6



----------*/

/* 7



----------*/

/* 8



----------*/

/* 9



----------*/

/* 10



----------*/
#include <stdio.h>

int main() {
    char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str2[] = "world!";
    int i;

    printf("%s\n", str1);
    for (i = 0; str2[i] != '\0'; i++) {
        printf("%c", str2[i]);
    }
    // printf("%s\n", str2);

    printf("\nstr1의 크기 : %d\n", sizeof(str1));
    printf("str2의 크기 : %d\n", sizeof(str2));
    str2[5] = '~';
    printf("%s\n", str2);
}

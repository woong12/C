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
        printf("������ �Է� : ");
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
        printf("%d�� �л��� ���α׷��� ������ �Է�: ", i + 1);
        scanf("%d", &score[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += score[i];
    }
        printf("���� : %d \n", sum);
        printf("��� : %.2lf \n", sum / 5.0);
}

----------*/

/* 6

#include <stdio.h>

int main() {
    int score[5];
    int i, max = 0;
    
    for (i = 0; i < 5; i++) {
        printf("%d�� �л��� ���α׷��� ������ �Է�: ", i + 1);
        scanf("%d", &score[i]);
    }

    for (i = 0; i < 5; i++) {
        if (max < score[i]) {
            max = score[i];
        }
    }
    printf("�ְ����� : %d \n", max);
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
    printf("���� Ű�� ���� �л���ȣ = %d��, Ű = %dcm \n", num, h_min);
}

----------*/

/* 8

#include <stdio.h>

int main() {
    char str[10];
    printf("����� �̸��� �����Դϱ�? : ");
    scanf("%s", &str);
    printf("�ȳ��ϼ��� %s��\n", str);
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

    printf("\nstr1�� ũ�� : %d\n", sizeof(str1));
    printf("str2�� ũ�� : %d\n", sizeof(str2));
    str2[5] = '~';
    printf("%s\n", str2);
}

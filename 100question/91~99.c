/* 1091

#include <stdio.h>

int main() {
    long long int a, m, d, n;
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
    for(int i = 1; i < n; i++) {
        a *= m;
        a += d;
    }
    printf("%lld", a);
}

----------*/

/* 1092

#include <stdio.h>

int main() {
    int a, b, c, sum = 1;
    scanf("%d %d %d", &a, &b, &c);
    while(sum % a != 0 || sum % b != 0 || sum % c != 0) {
        sum++;
    }
    printf("%d", sum);
}

----------*/

/***********************어려움***********************/

/* 1093

#include <stdio.h>

int main() {
    int n, t;
    int a[24]={0,};
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &t);
        a[t] = a[t]+1;
    }
    for(int j = 1; j <= 23; j++) {
        printf("%d ", a[j]);
    }
}

----------*/

/* 1094

#include <stdio.h>

int main() {
	int n;
	int a[10001] = {0,};
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &a[i]);
	}
	for(int i=n; i>=1; i--) {
		printf("%d ", a[i]);
	}
}

----------*/

/* 1095

#include <stdio.h>

int main() {
	int n, min=23;
	int input[10001] = {0,};
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &input[i]);
	}
	for(int i=1; i<=n; i++) {
		if(input[i] < min) {
			min = input[i];
		} 
	}
	printf("%d", min);
}

----------*/

/* 1096

#include <stdio.h>

int main() {
    int n, i, j, x, y;
    int a[20][20]={0,};
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d %d", &x, &y);
        a[x][y] = 1;
    }
    for(i = 1; i <= 19; i++) {
        for(j = 1; j <= 19; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

----------*/

/* 1097

#include <stdio.h>

int main(){
    int n, i, j, x, y;
    int a[20][20]={0,};	//빈 배열 생성
    for(i=1;i<=19;i++){		//배열 입력받기
        for(j=1;j<=19;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        for(j=1;j<=19;j++){
            a[x][j] = !a[x][j];	//뒤집기
            a[j][y] = !a[j][y];	//뒤집기
        }
    }
    for(i=1;i<=19;i++){
        for(j=1;j<=19;j++){
            printf("%d ",a[i][j]);	//배열 출력
        }
        printf("\n");
    }
}

----------*/

/* 1098

#include <stdio.h>

int main(){
    int h,w,n, l, d, x, y; //세로, 가로, 막대수, 막대길이, 방향, 좌표  
	scanf("%d %d", &h, &w);
	int p[101][101] = {0, };
	
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		int count = 0;
		for(int j=1; j<=l; j++) {
			if(d == 0) { //가로 
				p[x][y+count] = 1;
				count++;
			} else { //세로
				p[x+count][y] = 1;
				count++;
			}
		}
	}
	for(int i=1; i<=h; i++) {
		for(int j=1; j<=w; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}

----------*/

/* 1099	***어려움

#include <stdio.h>

int main() {
	int p[11][11] = {0, };
	for(int i=1; i<=10; i++) {
		for(int j=1; j<=10; j++) {
			scanf("%d", &p[i][j]);
		}
	}
	
	int x = 2;
	int y = 2;
	while(1) {
		if(p[x][y] == 0) {
			p[x][y] = 9;
			y++ ;
		}
		if(p[x][y] == 1) {
			y-- ;
			x++ ;
		}
		if(p[x][y] == 2) {
			p[x][y] = 9;
			break;
		} else if (p[x][y+1] == 1 && p[x+1][y] == 1) {
			if(p[x][y] == 0)
				p[x][y] = 9;
			break;
		}
	}
	
	for(int i=1; i<=10; i++) {
		for(int j=1; j<=10; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}

//설명
먼저 10 * 10 크기의 미로 상자의 구조와 먹이의 위치를 입력받는다. 
문제에서 개미는 (2, 2)에서 출발하기 때문에 초기 좌표 x, y 값을 각각 2로 설정한다.
while문 내에서는 해당 좌표가 0이라면 갈 수 있는 곳이기 때문에
해당 좌표의 값을 9로 변경한 후 오른쪽으로 움직이기 위해 y값을 1 증가시킨다.
만약 해당 좌표가 1이라면 벽 또는 장애물로 인해 갈 수 없기 때문에 y값을 감소시켜 다시 되돌아온 후 
아래쪽으로 이동하기 위해 x의 값을 증가시킨다.
만약 해당 좌표가 2라면 먹이에 해당하기 때문에 해당 좌표를 9로 변경한 후 반복문을 빠져나온다. 
else if 문은 문제에서 제시한 바와 같이 맨 아래의 가장 오른쪽에 도착한 경우,
더 이상 움직일 수 없는 경우에 더이상 이동하지 않고 그 곳에 머무르기 위해 작성한다.


----------*/


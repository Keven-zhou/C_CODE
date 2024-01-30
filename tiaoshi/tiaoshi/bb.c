#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
////按位异或用法：0^a=a,a^a=0
//
//int singledog(int a[], int nums) {
//	int ret = 0;
//	for (int i = 0; i < nums; i++) {
//		ret ^= a[i];
//	}
//	return ret;
//}
//
//int  main() {
//
//	int a[] = { 1,2,3,4,5,1,2,3,4 };
//	int x=singledog(a, sizeof(a) / sizeof(a[0]));
//	printf("%d\n", x);
//
//	return 0;
//}
 

//奇数位
void Print1(int a) {
	for (int i = 30; i >= 0; i -= 2) {
		if (((a >> i) & 1) == 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

//偶数位

void Print2(int a) {
	for (int i = 31; i >=1; i -= 2) {
		if (((a >> i) & 1) == 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

int main26() {

	int n = 0;
	scanf("%d", &n);
	Print1(n);
	Print2(n);

	return 0;
}


#include <stdio.h>

//static int digui2(char board[1000][1000], int x, int y) {
//    int nums = 0;
//    for (int i = x - 1; i <= x + 1; i++) {
//        for (int j = y - 1; j <= y+ 1; j++) {
//            if (board[i][j] == '*') {
//                nums++;
//            }
//        }
//    }
//    return nums;
//}
//
//int main() {
//
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    getchar();
//    char board[1000][1000];
//    for (int x = 1; x <= n; x++) {
//        for (int y = 1; y <= m; y++) {
//            scanf("%c", &board[x][y]);
//        }
//        getchar();
//    }
//    int a;
//    for (int x = 1; x <= n; x++) {
//        for (int y = 1; y <= m; y++) {
//            if (board[x][y] == '.') {
//                a = digui2(board, x, y);
//                board[x][y] = '0'+a;
//            }
//        }
//    }
//    for (int x = 1; x <= n; x++) {
//        for (int y = 1; y <= m; y++) {
//            printf("%c", board[x][y]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

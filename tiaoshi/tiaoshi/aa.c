#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;//统计第3个斐波那契数被计算的次数
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main() {
//
//	printf("%d\n", 153);
//	printf("%d\n", 0x6b);
//
//	return 0;
//}

//迭代法
#include <stdio.h>
int main23() {

	int n = 0;
	scanf("%d", &n);
	int x = 1;
	int y = 1;
	int z = 1;
	if (n <= 2) {
		printf("1");
	}
	else {
		while (n > 2) {
			x = y;
			y = z;
			z = x + y;
			n--;
		}
		printf("%d\n", z);
	}
	return 0;
}

//递归法
int Keven(int n) {

	if (n <= 2) {
		return 1;
	}
	else {
		return Keven(n - 1) + Keven(n - 2);
	}

}

int main2() {

	int n = 0;
	scanf("%d", &n);
	int ret=Keven(n);
	printf("%d\n", ret);
	return 0;
}


int digui(int x, int y) {

	if (y > 1)
		return x * digui(x, y - 1);
	else if (y == 1)
		return x;
	else if (y == 0) {
		return 1;
	}

}

int main3() {

	int n, k;
	scanf("%d %d", &n, &k);
	int ret=digui(n, k);
	printf("%d\n", ret);
	return 0;
}


int DigitSum(int x) {
	if (x > 9) {
		int a = x % 10;
		return a + DigitSum(x / 10);
	}
	else {
		return x;
	}
}

int main4() {

	int n = 0;
	scanf("%d", &n);
	int ret=DigitSum(n);
	printf("%d\n", ret);
	return 0;
}



//迭代法
int Fact(int n) {
	int ret = 1;
	for (int i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}

int main5() {

	int n;
	scanf("%d", &n);
	int ret = Fact(n);
	printf("%d\n", ret);
	return 0;
}


//递归法实现n的阶乘
int Fact1(int K) {

	if (K > 0)
		return K * Fact(K - 1);
	else
		return 1;
}

int main6() {

	int n=0;
	scanf("%d", &n);
	int ret = Fact1(n);
	printf("%d\n", ret);
	return 0;
}

void print(int x) {
	if (x > 9)
		print(x / 10);
	printf("%d ", x % 10);
}

int main7() {

	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}
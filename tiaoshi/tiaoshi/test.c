#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//
//	int i= 0;
//	for (i = 0; i < 10; i++) {
//		printf("hehe\n");
//	}
//	for (int k = 0; k < 10; k++) {
//		printf("haha\n");
//	}
//
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int num = 100;
//	char c = 'w';
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//int main() {
//
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	
//	for (n = 1; n <= 3; n++) {
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//
//
//
//	return 0;
//}



#include <stdio.h>
////int main()
////{
////	
////	int i = 0;
////	int arr[10] = { 0 };
////	for (i = 0; i <= 12; i++)
////	{
////		arr[i] = 0;
////		printf("hehe\n");
////	}
////	return 0;
////}
////
////迭代法
//int main5() {
//
//	
//	int qishui = 20;//汽水
//	int empty_bottle = 20;//空瓶
//
//	while (empty_bottle > 1) {
//		qishui += empty_bottle / 2;
//		empty_bottle = empty_bottle / 2 + empty_bottle% 2;
//	}
//	printf("%d\n", qishui);
//
//
//	return 0;
//}
//
//
//
//int f(int kongping) {
//	
//	if (kongping > 1) {
//		return f(kongping / 2)+ (kongping / 2 + kongping % 2) ;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main3() {
//
//	int qishui = 20;//汽水
//	int kongping = 20;//空瓶
//
//	int qishui2 = f(kongping);
//	printf("%d\n", qishui2+qishui);
//
//	return 0;
//}
//
//
//
//
//
//
//
//
////int main() {
////
////	printf("hehe\n");
////	main();
////
////	return 0;
////}
//
//#include <stdio.h>
//int main4() {
//
//	//打印上半段
//	for (int i = 1; i <=7; i++) {
//		for (int j = 1; j <= 7 - i; j++) {
//			printf(" ");
//		}
//		for (int k = 1; k <= 2 * i - 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半段
//	for (int i = 1; i < 7; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf(" ");
//		}
//		for (int k = 1; k <= 2 * (7 - i) - 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//
//#include <stdio.h>
//int flower(int x) {
//
//	int cnt = 0;
//	int p = x;
//	//求出这个水仙花是多少位数
//	while (p) {
//		cnt += 1;
//		p /= 10;
//	}
//	int sum = 0;
//	int a = x;
//	while (a) {
//		int t = 1;
//		int cnt2 = cnt;
//		int b = a % 10;
//		while (cnt2--) {
//			t *= b;//求出每一位的次方出来
//		}
//		a /= 10;
//		sum += t;
//	}
//
//	
//	if (sum == x) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//
//}
//
//int main1() {
//
//	for (int i = 0; i <= 100000; i++) {
//		if (flower(i)) {
//			printf("%d ", i);
//		}
//	}
//	putchar('\n');
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main2() {
//
//	int Sn = 0;
//	int total_sum = 0;
//	int a = 0;
//	scanf("%d", &a);
//	for (int x = 0; x < 5; x++) {
//		Sn += a * (int)pow(10, x);
//		total_sum += Sn;//将Sn的各项值累加起来
//	}
//	printf("Sn前5项和为%d\n", total_sum);
//
//	return 0;
//}
//
//
//
//
//void Keven(int x) {
//	if (x >= 2)
//		Keven(x / 2);//让它每次都÷2，从而得到它的二进制数
//	printf("%d", x % 2);
//}
//
//int main9() {
//
//	int n;
//	scanf("%d", &n);
//	Keven(n);
//	return 0;
//}


//int main() {
//
//	int Sn = 0;
//	int total_sum = 0;
//	int a = 0;
//	scanf("%d", &a);
//	for (int x = 0; x < 5; x++) {
//		Sn = Sn * 10 + a;
//		total_sum+=Sn;
//	}
//	printf("前5项和为%d\n", total_sum);
//	return 0;
//}
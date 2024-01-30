#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main15() {
	int a = 10;
	int b = 20;
	printf("交换前的值：a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;//b=a^b^b=a^0=a
	a = a ^ b;//a=a^a^b=0^ b=b;
	printf("交换后的值：a=%d,b=%d\n", a, b);
	           
	return 0;
}
                           
int main13() {
	int a, b;
	scanf("%d %d", &a, &b);
	int tmp=a^b;//因为按位异或是"相同为0，相异位1”的原则，从而可以求得出这里有多少位不同
	int count = 0;
	/*for (int i = 0; i < 32; i++) {
		if (((tmp >> i) & 1) == 1)
			count++;
	}*/
	while (tmp) {
		tmp &= (tmp - 1);
		count += 1;
	}
	printf("%d\n", count);
	return 0;
}

//结构体的关键字：struct
//结构体是用来描述一个复杂对象的


//struct student //student是结构体类型的名字
//{
//
//	char name[20];//名字
//	int age;//年龄
//	int high;//身高
//	float weight;//体重
//	char id[16];//学号
//}; s4, s5, s6;//这里的分号不能少
////s4,s5,s6 是结构体变量 (全局的)
//struct student s7;//全局的
//
//int main() {
//
//	struct student s1 = {"周乐燊",19,168.5,80.4,"2023233203328"};//初始化
//	struct student s2 = { .age = 20,.high = 170,.id = "2023233203321" };
//	struct student s3;
//	//s1,s2,s3是三个结构体变量(局部的)
//
//	return 0;
//}

//struct s {
//
//	char x;
//	int n;
//};
//
//struct b {
//	struct s q;
//	int* p;//指针变量
//	char arr[10];
//	float sc;
//};
//
//int main() {
//
//	struct b a = { {'x',99},NULL,"bite",85.5f};
//	printf("%c %d %s %3f %zd", a.q.x, a.q.n,a.arr,a.sc,a.p);
//	//使用方式：结构体变量.成员名
//	return 0;
//}
//
//

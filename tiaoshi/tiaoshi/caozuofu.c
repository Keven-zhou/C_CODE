#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main15() {
	int a = 10;
	int b = 20;
	printf("����ǰ��ֵ��a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;//b=a^b^b=a^0=a
	a = a ^ b;//a=a^a^b=0^ b=b;
	printf("�������ֵ��a=%d,b=%d\n", a, b);
	           
	return 0;
}
                           
int main13() {
	int a, b;
	scanf("%d %d", &a, &b);
	int tmp=a^b;//��Ϊ��λ�����"��ͬΪ0������λ1����ԭ�򣬴Ӷ�������ó������ж���λ��ͬ
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

//�ṹ��Ĺؼ��֣�struct
//�ṹ������������һ�����Ӷ����


//struct student //student�ǽṹ�����͵�����
//{
//
//	char name[20];//����
//	int age;//����
//	int high;//���
//	float weight;//����
//	char id[16];//ѧ��
//}; s4, s5, s6;//����ķֺŲ�����
////s4,s5,s6 �ǽṹ����� (ȫ�ֵ�)
//struct student s7;//ȫ�ֵ�
//
//int main() {
//
//	struct student s1 = {"���֟�",19,168.5,80.4,"2023233203328"};//��ʼ��
//	struct student s2 = { .age = 20,.high = 170,.id = "2023233203321" };
//	struct student s3;
//	//s1,s2,s3�������ṹ�����(�ֲ���)
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
//	int* p;//ָ�����
//	char arr[10];
//	float sc;
//};
//
//int main() {
//
//	struct b a = { {'x',99},NULL,"bite",85.5f};
//	printf("%c %d %s %3f %zd", a.q.x, a.q.n,a.arr,a.sc,a.p);
//	//ʹ�÷�ʽ���ṹ�����.��Ա��
//	return 0;
//}
//
//

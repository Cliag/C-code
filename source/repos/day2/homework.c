#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<math.h>
#define PI 3.141592

int main()
{
//������ҵһ
//���������ε������߳����������ε������
//��֪��ʽΪs=��a+b+c��/2��area=�����µ�s(s-a)(s-b)(s-c)
	float a, b, c, s, area;
	printf("�����������ε������ߵĳ��ȣ�\n");
	scanf("%f%f%f", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("�����ε����Ϊ��%7.2f\n", area);
	//������ҵ��������Բ�İ뾶��Բ���ĸߣ���Բ�ĵ������������������
	float r, h, ds, ms, v;
	printf("������Բ�İ뾶��Բ���ĸ�:\n");
	scanf("%f%f", &r, &h);
	ds = PI * r * r;
	ms = 2 * ds + 2 * PI * r * h;
	v = ds * h;
	printf("�����Ϊ��%.2f\n�����Ϊ��%.2f\n���Ϊ��%.2f\n", ds, ms, v);
	//������ҵ�����Ӽ�������һ����д��ĸ�������Ӧ��Сд��ĸ��
	getchar();
	char c1, c2;
	printf("�������д��ĸ��");
	scanf("%c", &c1);
	printf("������Ĵ�д��ĸ�ǣ�%c\n", c1);
	c2 = c1 + 32;
	printf("ת��ΪСд�ǣ�%c\n", c2);
	//������ҵ�ģ�����a,b,c���󷽳�ax*x+bx+c=0�ĸ��������跽��������ʵ����
	double a1, b1, c3, disc, x1, x2, p, q;
	printf("�����뷽�̵�����ϵ����");
	scanf("%lf%lf%lf", &a1, &b1, &c3);
	disc = b1 * b1- 4 * a1 * c3;
	p = -b1 / (2.0 * a1);
	q = sqrt(disc) / (2.0 * a1);
	x1 = p + q;
	x2 = p - q;
	printf("x1=%7.2lf\nx2=%7.2lf\n", x1, x2);
	return 0;
}
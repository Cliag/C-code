#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<math.h>
#define PI 3.141592

int main()
{
//国庆作业一
//输入三角形的三个边长，求三角形的面积。
//已知公式为s=（a+b+c）/2，area=根号下的s(s-a)(s-b)(s-c)
	float a, b, c, s, area;
	printf("请输入三角形的三条边的长度：\n");
	scanf("%f%f%f", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("三角形的面积为：%7.2f\n", area);
	//国庆作业二：输入圆的半径和圆柱的高，求圆的底面积、表面积和体积。
	float r, h, ds, ms, v;
	printf("请输入圆的半径和圆柱的高:\n");
	scanf("%f%f", &r, &h);
	ds = PI * r * r;
	ms = 2 * ds + 2 * PI * r * h;
	v = ds * h;
	printf("底面积为：%.2f\n表面积为：%.2f\n体积为：%.2f\n", ds, ms, v);
	//国庆作业三：从键盘输入一个大写字母，输出相应的小写字母。
	getchar();
	char c1, c2;
	printf("请输入大写字母：");
	scanf("%c", &c1);
	printf("你输入的大写字母是：%c\n", c1);
	c2 = c1 + 32;
	printf("转化为小写是：%c\n", c2);
	//国庆作业四：输入a,b,c，求方程ax*x+bx+c=0的根。（假设方程有两个实根）
	double a1, b1, c3, disc, x1, x2, p, q;
	printf("请输入方程的三个系数：");
	scanf("%lf%lf%lf", &a1, &b1, &c3);
	disc = b1 * b1- 4 * a1 * c3;
	p = -b1 / (2.0 * a1);
	q = sqrt(disc) / (2.0 * a1);
	x1 = p + q;
	x2 = p - q;
	printf("x1=%7.2lf\nx2=%7.2lf\n", x1, x2);
	return 0;
}
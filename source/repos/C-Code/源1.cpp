#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    printf("hellow,cliag!Today is day 1!");
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("sum=%d\n",sum);
    //考完计算机二级的几天后，忙了一阵子，该开始我的C语言的学习和练习路程
    // 今天的要练习的是输出比小写字母a的ASCII码分别小30和20的字符
    char cl = 'a', c2, c3;
    c2 = cl - 30;
    c3 = cl - 20;
    printf("%c%c", c2, c3);
    return 0;
}
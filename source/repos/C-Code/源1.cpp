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
    //�������������ļ����æ��һ���ӣ��ÿ�ʼ�ҵ�C���Ե�ѧϰ����ϰ·��
    // �����Ҫ��ϰ���������Сд��ĸa��ASCII��ֱ�С30��20���ַ�
    char cl = 'a', c2, c3;
    c2 = cl - 30;
    c3 = cl - 20;
    printf("%c%c", c2, c3);
    return 0;
}
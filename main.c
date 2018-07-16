/*************************************************************************
	> File Name: main.c
	> Author: HaoJie
	> Mail: 954487858@qq.com 
	> Created Time: 2018��07��10�� ���ڶ� 14ʱ00��36��
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main()
{

	//˳��ջ
    char c[10] = {'a','s','d','e','f','r','o','n','w','b'};
    int I[12] = {1,22,43,34,25,12,3,4,5,3,23,435};
    double d[10] = {1.43, 5.6, 2.43, 21.3, 56.23, 45.2, 45.32, 453.21, 45.32, 4.80};

    Stack* p = CreateStack(sizeof(char));
    Stack* p1 = CreateStack(sizeof(int));
    Stack* p2 = CreateStack(sizeof(double));
    //int��ջ
    for (int i = 0; i < 12; i++)
	{
		Push(p1,&I[i]);
    	printf("%d Push success!\n", *(int*)(p1->array + (p1->Top-1)*p1->data_size));
    }
    for (int i = 0; i < 12; i++)
	{
			printf("%d Pop success!\n", *(int*)Pop(p1));
	}
    //char��ջ
    for (int i = 0; i < 10; i++)
	{
		Push(p,&c[i]);
    	printf("%c Push success!\n", *(char*)(p->array + (p->Top-1)*p->data_size));
    }
    for (int i = 0; i < 10; i++)
	{
			printf("%c Pop success!\n", *(char*)Pop(p));
	}
    //double��ջ
    for (int i = 0; i < 10; i++)
	{
		Push(p2,&d[i]);
    	printf("%f Push success!\n", *(double*)(p2->array + (p2->Top-1)*p2->data_size));
    }
    for (int i = 0; i < 10; i++)
	{
			printf("%f Pop success!\n", *(double*)Pop(p2));
	}
	//�ж�ջ�Ƿ�Ϊ��
	IsEmpty(p2);
    //���ջ
	ClearStack(p2);
	
	return 0;
}

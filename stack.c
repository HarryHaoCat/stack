/*************************************************************************
	> File Name: stack.c
	> Author: HaoJie
	> Mail: 954487858@qq.com 
	> Created Time: 2018年07月10日 星期二 14时00分36秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include "stack.h"

//建栈
Stack* CreateStack(const size_t data_size) 
{
	Stack* p = (Stack*)malloc(sizeof(Stack));
    p->array =(void*) malloc(MAXSIZE * data_size);
    p->Top = 0; 
	p->len = MAXSIZE;  
    p->data_size = data_size;
	return p;
}

//进栈
void Push(Stack* PtrS, void* item) 
{
	if(PtrS->Top >= PtrS->len)
	{
		void* Array = (void *)malloc((PtrS->len + MAXSIZE)*(PtrS->data_size));
		int L = PtrS->len;
		memcpy(Array, PtrS->array, L * PtrS->data_size);
		free(PtrS->array);
		PtrS->array = Array;
		PtrS->len = L + MAXSIZE;
		
	}
    memcpy(PtrS->array + PtrS->Top*PtrS->data_size, item, PtrS->data_size);
	PtrS->Top = PtrS->Top+1;

}
//出栈
void* Pop(Stack * PtrS)  
{
	if(PtrS->Top == 0)
	{
		printf("This is a empty stack!");
		return 0;
	}
	void* data =  PtrS->array + (PtrS->Top-1)*PtrS->data_size;
	PtrS->Top = PtrS->Top - 1;
	return data;
}

int IsEmpty(Stack* S)   //判断栈是否为空；
{
	if (S->Top == -1)
	{
		
		printf("This is a empty stack!\n");
		return 1;
	}
	else
	{
		printf("This is not a empty stack!\n");
		return 0;
	}
}

//清除栈
void ClearStack(Stack* PtrS)
{
	free(PtrS);
	printf("ClearStack success!\n");
}

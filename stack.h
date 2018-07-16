/*************************************************************************
	> File Name: stack.h
	> Author: HaoJie
	> Mail: 954487858@qq.com 
	> Created Time: 2018年07月10日 星期二 14时00分36秒
 ************************************************************************/
#ifndef _STACK_H_
#define _STACK_H_
#define MAXSIZE 5
//typedef int ElementType;
typedef struct STACK{
	void* array;
	int Top;
	int len;
    size_t data_size;
}Stack;

Stack* CreateStack(const size_t data_size);		//建栈
void Push(Stack* s, void* item);	                     //进栈
void* Pop(Stack* s);				   //出栈
int IsEmpty(Stack* s);			            //判断栈是否为空
void ClearStack(Stack* s);			   //清除栈
#endif

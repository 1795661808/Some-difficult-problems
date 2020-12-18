#include <stdio.h>
#include<string.h>

/*
输入n，求和1到n，要求不能使用乘除法，不使用任何if while for 以及三目运算，怎么做？
*/

 int f(int n) //利用位运算来替代if 来表述跳出递归的条件
{
	n && (n += f(n - 1));
	return n;
}

int main(void) 
{
	int n = 0;

	scanf_s("%d", &n);

	printf("%d\n", f(n));
	return 0;
}


















//int sum(int n);
//int resum = 0;
//int sum(int n) 
//{
//
//    return n && (resum += n) && sum(n - 1);
//
//}
//int main(void)
//{
//    int x;
//
//    scanf_s("%d", &x);
//
//    printf("%d", sum(x));
//
//    
//
//
//
//}

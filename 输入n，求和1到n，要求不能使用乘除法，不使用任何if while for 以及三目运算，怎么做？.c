#include <stdio.h>
#include<string.h>

/*����n�����1��n��Ҫ����ʹ�ó˳�������ʹ���κ�if while for �Լ���Ŀ���㣬��ô����
*/

 int f(int n) 
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

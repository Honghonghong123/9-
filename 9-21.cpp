#include <bits/stdc++.h>
using namespace std;

//int main()
//{
//	//求最大公因数和最小公倍数
//	//一  输入两个数
//	int  divisor,dividend;
//	scanf("%d%d", &dividend, &divisor);
//	int t = divisor;
//	int p = dividend;
//	//二 利用 欧几里得算法 
//	while(dividend % divisor != 0)
//	{
//		divisor = dividend % divisor;
//		dividend = t;
//	}
//	printf("%d\n",divisor);
//	printf("%d\n",t*p/divisor);
//	return 0;
//}

//int is_pnumber(int number,int divisor[])
//{
//	int sum = 0;
//	for(int i = 1;i < number;i++)//待缩小fanwei 
//	{
//		if(0 == number%i)
//		{
//			sum += i;
//			*(divisor++) = 	i;			
//		}			
//	}
//	if(sum == number) return 1;
//	else return 0;//???
//}
//
//int main()
//{
//	//判断一个范围内的完数完数及其因子
//	//一  输入一个范围
//	int  range;
//	scanf("%d",&range);
//	//二 判断完数顺便存放其因子
//	for(int j = 6; j <= range;j++)
//	{
//		int divisor[100] = {0}; 
//		if(is_pnumber(j,divisor) == 1)
//		{
//			printf("%d is pnumber,divisor ",j);
//			for(int k = 0;divisor[k] != 0;k++)
//			{
//				printf("%d ",divisor[k]);
//			}
//			printf("\n");	
//		}		
//	}
//	return 0;
//}

//递归fibonacci，但记忆性 
//double fibonacci(int n)
//{
//	double arr[999] = {0};
//	arr[1] = 1;
//	arr[2] = 2;
//	if(arr [n] == 0)
//	{
//		arr[n] = fibonacci(n-1) + fibonacci(n - 2);
//		return arr[n];
//	}
//	else return arr[n];
//}
//
//double fibonacci1(int n)
//{
//	double arr[999] = {0};
//	arr[1] = 2;
//	arr[2] = 3;
//	if(arr [n] == 0)
//	{
//		arr[n] = fibonacci1(n-1) + fibonacci1(n - 2);
//		return arr[n];
//	}
//	else return arr[n];
//}
//int main ()
//{
//	int n = 0;
//	double sum = 0.0;
//	scanf("%d",&n);
//	for(int i = 1;i <= n;i++)
//	{
//		sum += fibonacci1(i)/fibonacci(i);	
//	}
//	printf("%.2lf\n",sum);
//	return 0;
//}


//计算规律下落 
//int main()
//{
////	一球从M米高度自由下落，每次落地后返回原高度的一半，再落下
//	int m, n;
//	double hight , len;10
//	scanf("%d%d",&m,&n);
//	hight = m*pow(0.5,n);
//	len = m*(1-pow(0.5,n))/0.5+ m/2*(1-pow(0.5,n))/0.5 - hight;
////	保留两位小数
//	printf("%.2lf %.2lf\n",hight,len);
//	return 0 ;
//}

int monkey(int day)
{
	int i = 1;
	int sum = 1;
	for(i=1;i<day;i++)
	{
		sum = (sum + 1) * 2;
	}
	return sum;		
}
int main()
{
//	第一天摘下若干个桃子，当即吃了一半加一个
//	以后每天早上都吃了前一天剩下的一半零一个
//	第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子
	int day;
	scanf("%d",&day);
	printf("%d\n",monkey(day));
	return 0;
}















#include <bits/stdc++.h>
using namespace std;

//int main()
//{
//	//�������������С������
//	//һ  ����������
//	int  divisor,dividend;
//	scanf("%d%d", &dividend, &divisor);
//	int t = divisor;
//	int p = dividend;
//	//�� ���� ŷ������㷨 
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
//	for(int i = 1;i < number;i++)//����Сfanwei 
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
//	//�ж�һ����Χ�ڵ�����������������
//	//һ  ����һ����Χ
//	int  range;
//	scanf("%d",&range);
//	//�� �ж�����˳����������
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

//�ݹ�fibonacci���������� 
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


//����������� 
//int main()
//{
////	һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬������
//	int m, n;
//	double hight , len;10
//	scanf("%d%d",&m,&n);
//	hight = m*pow(0.5,n);
//	len = m*(1-pow(0.5,n))/0.5+ m/2*(1-pow(0.5,n))/0.5 - hight;
////	������λС��
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
//	��һ��ժ�����ɸ����ӣ���������һ���һ��
//	�Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ��
//	��N���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ��������
	int day;
	scanf("%d",&day);
	printf("%d\n",monkey(day));
	return 0;
}















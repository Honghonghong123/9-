#include <bits/stdc++.h>
#include<string.h>
using namespace std;

//类型转化失败 
//int main()
//{
//	char str1[]="62";
//	char ch ='4';
//	int n,m;
//	int num = 0;
//	scanf("%d%d",&n,&m);
//	for(long long i = n;i <= m;i++)
//	{
//		if(NULL == strstr((char*)i,str1)  && NULL == strchr((char*)i,ch))
//			num++;
//		printf("%s\n",i);
//	}
//	printf("%d\n",num);
//	return 0;
//}


//迭代 求X的平方根
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	double x = 1.0 ;x1;
//	while(fabs(x-x1)>1e-5)
//	{
//		x1 = x;
//		x = (x1+a/x1)/2;
//	}
//	printf("%.3lf\n",x);
//	return 0;
//} 


//int main()
//{
//	int range;
//	scanf("%d",&range);
//	do
//	//while(range1--)有问题。下面数据在变化 
//	{
//		int i;
//		if(2 == range) printf("%d\n",range);
//		for(i = 2; i <= sqrt(range); i++)
//		{
//			if(range % i == 0) break;
//		}
//	if(range % i == 0) continue;
//	if(1 == range) break;
//	printf("%d\n",range);
//	}while(range--);
//	return 0;
//}


//sort排序 
//int main()
//{
//	int arr[10];
//	for(int i =  0;i < 10;i++)
//		scanf("%d",&arr[i]);
//	for(int i =  0;i < 10;i++)
//	{
//		for(int j = i+1;j < 10;j++)
//		{
//			if(arr[i] > arr[j])
//			{
//			int tem = arr[i];
//			arr[i] =arr[j];
//			arr[j] = tem;			
//			}
//		}
//	}
//	for(int i =  0;i < 10;i++)	printf("%d\n",arr[i]);
//	return 0;
//}


//int main()
//{
//	int arr[3][3],sum1,sum2,i,j;
//	sum1 = sum2 =0;
//	for(i = 0;i<3;i++)
//	{
//		for(j = 0;j<3;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for(i= j =0;i<3;i++,j++)
//		sum1 += arr[i][j];
//	for(i=0, j =2;j>=0;i++,j--)
//		sum2 += arr[i][j];
//	printf("%d %d\n",sum1,sum2);		
//	return 0;
//}


//int main()
//{
//	int cow[100],i,day;
//	while(true)
//	{
//	scanf("%d",&day);
//	for(i = 1;i <= day;i++)
//	{
//		if(i<5)
//		{
//			cow[i]=i;
//		}
//	cow[i+1]=cow[i]+cow[i-2];
//	}
//	if(day == 0) break;
//	printf("%d\n",cow[day]);		
//	}
//	return 0 ;
//}



























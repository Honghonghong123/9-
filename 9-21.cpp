//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	//�������������С������
//	//һ  ����������
//	int  divisor,dividend,a,t,p,row;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d%d", &dividend, &divisor);
//		t = a = divisor;
//		p = dividend;
//		//�� ���� ŷ������㷨 
//		while(dividend % divisor != 0)
//		{
//			divisor = dividend % divisor;
//			dividend = t;
//			t = divisor;
//		}
//		printf("%d ",divisor);
//		printf("%d\n",a*p/divisor);
//	}
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

////����������� 
//int main()
//{
////	һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬������
//	int m, n;
//	double hight , len;
//	scanf("%d%d",&m,&n);
//	hight = m*pow(0.5,n);
//	len = m*(1-pow(0.5,n))/0.5+ m/2*(1-pow(0.5,n))/0.5 - hight;
////	������λС��
//	printf("%.2lf %.2lf\n",hight,len);
//	return 0 ;
//}


//���ӳ������� //	��һ��ժ�����ɸ����ӣ���������һ���һ��
//	�Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ��
//	��N���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ��������

//int monkey(int day)
//{
//	int i = 1;
//	int sum = 1;
//	for(i=1;i<day;i++)
//	{
//		sum = (sum + 1) * 2;
//	}
//	return sum;		
//}
//int main()
//{
//	int day, row;
//	scanf("%d",&row);
//	while(row--)
//	{
//		scanf("%d",&day);
//		printf("%d\n",monkey(day));	
//	}
//
//	return 0;
//}


//int main()
//{
//	int n,a,b,a1,b1;
//	scanf("%d",&n);
//	a=1;
//	b=(n-1)/2;
//	while(a!=n)
//	{
//		a1=a;
//		b1=b;
//		while(b1--)
//		{
//			printf("_");
//		}
//		while(a1--)
//		{
//			printf("*");
//		}
//		b1=b;
//		while(b1--)
//		{
//			printf("_");
//		}
//		a += 2;
//		b--;
//		printf("\n");
//	}
//	a1=a;
//	while(a1--)
//	{
//		printf("*");
//	}
//	printf("\n");
//	a -=2;
//	b++;
//	while(a!= -1)
//	{
//		a1=a;
//		b1=b;
//		while(b1--)
//		{
//			printf("_");
//		}
//		while(a1--)
//		{
//			printf("*");
//		}
//		b1=b;
//		while(b1--)
//		{
//			printf("_");
//		}
//		a -= 2;
//		b++;
//		printf("\n");
//	}	
//	return 0;
//}












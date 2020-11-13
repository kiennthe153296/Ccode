///* bai 1 */
//
//#include <stdio.h>
//int check (int a)
//{
// int i, count;
//	count = 0;
//	for (i=1; i<a; i++){
//		if (a % i ==0) count ++;
//	}
//	if (count == 1) return 1;
//	else return 0;
//}
//int main ()
//{
//	int i, n;
//	printf ("Nhap n"); scanf ("%d", &n);
//	if (n <= 1){
//		printf ("khong co gia tri");
//	}
//	else{
//		printf ("\nCac so nguyen to la");
//		for (i=1; i<=n; i++) {
//			if (check (i)) printf ("%4d", i);
//		}
//	}
//	return 1;
//}

//#include <stdio.h>
//#include <math.h>
//main ()
//{
//	int n, i;
//	printf ("Input n=");
//	scanf ("%d", &n);
//	printf ("\n OUTPUT: \n");
//	int m = sqrt(n);
//	printf ("\n Cac uoc so cua n la:");
//	for (i=1; i<=m; i++){
//		if (n%i==0)
//		printf ("\n %d %d", i, n/i);
//	}
//}

/* bai 2*/ 
//#include <stdio.h>
//int main ()
//{
//	int n,i;
//	printf ("Input n=");
//	scanf ("%d", &n);
//	printf ("\n OUTPUT: \n");
//		for (i=2; i<n; i++){
//			if (n%i==0) break;
//		}
//		if (i==n) printf ("n la SNT");
//		else 
//		printf ("n khong phai la SNT");
//}

#include<stdio.h>
#include<stdbool.h>

int main()
{
	int N,i,k;
	printf("input N : ");
	scanf("%d",&N);
	bool check[N+1];
	for(i=2;i<=N;i++) 
	{
	check[i]=true;
	}
	for(i=2;i<=N;i++)
	{
		if (check[i]==true)
		{
			int j;
			for(j=2*i;j<=N;j+=i)
			{
				check[j]=false;	
			}
		}
	}
	if(check[N]==true)
	{
	printf("la snt");
	}	
	else if (check[N]==false)
	{
		printf("ko la snt\n");
		for(i=1;i<=N;i++){
			if(N%i==0) printf("%d ",i);
		}
	}
}



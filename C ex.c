//BAI1*********************************************************************************************
//#include <stdio.h>
//main()
//{
//	int n, i, max;
//	int arr[100];
//	printf("Nhap so phan tu: ");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < n - 1; i++) {
//		if (max < arr[i + 1]) {
//			max = arr[i + 1];
//		}
//	}
//	printf("Max: %d", max);
//}
//BAI2*********************************************************************************************
//#include <stdio.h>
//main()
//{
//	float a, b, x;
//	printf("cho phuong trinh ax+b=0");
//	printf("\nnhap so a: ");
//	scanf("%f", &a);
//	printf("nhap so b: ");
//	scanf("%f", &b);
//	x=-b/a;
//	if (a!=0) printf ("nghiem cua phuong trinh la: %f", x);
//	else if (b!=0) printf ("phuong trinh vo nghiem");
//	else printf ("phuong trinh vo nghiem");
//}
//BAI3********************************************************************************************
//#include <stdio.h>
//main()
//{
//	float a, b, c, max;
//	printf("nhap 3 so a, b, c: ");
//	scanf("%f%f%f", &a, &b, &c);
//	max = a;
//	if (b>max) max = b;
//	if (c>max) max = c;
//	printf("max is %f", max);
//}
//BAI4*******************************************************************************************
//#include <stdio.h>
//main()
//{
//	float a, b, c;
//	printf("nhap 3 so: ");
//	scanf("%f%f%f",&a,&b,&c);
//	if (a>b && a>c) printf("max is %f", a);
//	else if (b>c) printf ("max is %f", b);
//	else printf( "max is %f", c);
//}
////BAI5*******************************************************************************************
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	float a, b, c, e;
//	double d;
//	printf("Cho phuong trinh ax^2+bx+c=0\n");
//	printf("nhap a, b, c:");
//	scanf("%f%f%f",&a,&b,&c);
//	d = (b*b-4*a*c);
//	e = (-c)/b;
//	if (a==0) 
//		{if (b==0)
//			{if (c==0) printf ("phuong trinh vo so nghiem");
//				else printf("phuong trinh vo nghiem");}
//		else printf("phuong trinh co mot nghiem: %f ", e);
//		}
//	else 
//	{
//		if (d<0) printf("phuong trinh vo nghiem");
//		if (d==0) printf("phuong trinh co 1 nghiem duy nhat: %f", (-b)/(2*a));
//	else printf("phuong trinh co 2 nghiem phan biet: %f va %f", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
//	}	
//}
//BAI6*****************************************************************************************************	
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	float a, b, c, p;
//	printf("nhap 3 canh cua tam giac: ");
//	scanf("%f%f%f", &a,&b,&c);
//	p = (a+b+c)/2;
//	if (a>0&&b>0&&c>0&&(a+b)>c&&(a+c)>b&&(b+c)>a)
//	{
//	printf("3 canh da cho tao thanh 1 tam giac\n");
//	printf("chu vi cua tam giac la %0.2f\n", (float)a+b+c);
//	printf("dien tich tam giac la %0.2f", (float)sqrt(p*(p-a)*(p-b)*(p-c)));
//	}
//	else printf("day khong phai tam giac");
//}
//BAI7*******************************************************************************
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int f = 1,i,n;
//	printf("nhap so n");
//	scanf("%d", &n);
//	for (i=1;i<=n;i++)
//	{f = f * i;}
//	printf("Giai thua cua %d la: %d", n, f);
//}
//****************************************************************************************
//#include <stdio.h>
//main()
//{
//	int n,d,t500,t200,t100,t50,t20,t10,t5,t2;
//	printf("nhap so tien: (nghin dong)");
//	scanf("%d",&n);
//	if (n>0)
//	{
//	t500=n/500;
//	n=n-500*t500;
//	t200=n/200;
//	n=n-200*t200;
//	t100=n/100;
//	n=n-100*t100;
//	t50=n/50;
//	n=n-50*t50;
//	t20=n/20;
//	n=n-20*t20;
//	t10=n/10;
//	n=n-10*t10;
//	t5=n/5;
//	n=n-5*t5;
//	t2=n/2;
//	n=n-2*t2;
//	printf("so to tien 500, 200, 100, 50, 20, 10, 5, 2, 1 nghin lan luot la: %d %d %d %d %d %d %d %d %d", t500, t200, t100, t50, t20, t10, t5, t2, n);
//	}
//	else printf("so tien khong hop le");
//}
//*************************************************************************************************************************************************************
//#include<stdio.h>
//#include<math.h>
//main()
//{
//	int n;
//	printf("nhap n:");
//	scanf("%d",&n);
//	if ((n/500)>0){
//		printf("\n so to 500 nghin la: %d", n/500);}
//		n=n%500;
//	if ((n/200)>0){
//		printf("\n so to 200 nghin la: %d", n/200);}
//		n=n%200;	
//	if ((n/100)>0){
//		printf("\n so to 100 nghin la: %d", n/100);}
//		n=n%100;	
//	if ((n/50)>0){
//		printf("\n so to 50 nghin la: %d", n/50);}
//		n=n%50;	
//	if ((n/20)>0){
//		printf("\n so to 20 nghin la: %d", n/20);}
//		n=n%20;	
//	if ((n/10)>0){
//		printf("\n so to 10 nghin la: %d", n/10);}
//		n=n%10;	
//	if ((n/5)>0){
//		printf("\n so to 5 nghin la: %d", n/5);}
//		n=n%5;	
//	if ((n/2)>0){
//		printf("\n so to 2 nghin la: %d", n/2);}
//		n=n%2;
//	if (n!=0){
//		printf("\n so to 1 nghin la: %d", n);}
//	else printf(" ");
//	
//	
//}//#include <stdio.h>
//main()
//{
//	int i,j;
//	for(i=1;i<10;i++)
//	{printf("\n");
//	for(j=1;j<10;j++)
//	{
//	printf("%d x %d = %d\t", i, j, i*j);
//	}
//	}	
//}
//****************************************************************************tam giac deu
//#include<stdio.h>
//main()
//{
//	int i,j,n;
//	printf("nhap so canh cua tam giac:");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++) 
//	{for (j=1;j<=n-i;j++)
//	printf(" ");
//	for (j=1;j<=i;j++)
//	printf("* ");
//	printf("\n");
//	}
//}
////*****************************************************************************
//#include <stdio.h>
//main()
//{
//	int x;
//	while (x<100)
//	{printf("%d\n",x);
//	x++;
//	}
//}
//*****************************************************************************
//#include <stdio.h>
//main()
//{
//	int n,i,t=0;
//	printf("nhap so n: ");
//	scanf("%d", &n);
//	for(i=1;i<n;i++)
//	{if (n%i == 0) t+=i;}
//	if (t==n) printf ("so %d la so hoan hao", n);
//	else printf ("so %d khong la so hoan hao", n);
//}
//********************************************************************************
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int a,b;
//	printf ("nhap so a:");
//	scanf("%d", &a);
//	b= sqrt(a);
//	if (a==b*b) printf ("%d la so chinh phuong", a);
//	else printf ("%d khong la so chinh phuong", a);
//}
//*******************************************************************************
//#include<stdio.h>
//main()
//{
//	int n1=0, n2=1, n3, i, n;
//	printf("nhap so phan tu:");
//	scanf("%d",&n);
//	if (n==1) printf("\n 0");
//	else if (n==0) printf("khong hop le");
//	else
//	{
//	printf("\n%d %d", n1, n2);
//	for(i=2;i<n;i++)
//	{
//		n3=n1+n2;
//		printf(" %d", n3);
//		n1=n2;
//		n2=n3;
//	}
//	}	
//}
//*****************************************************************************************
//#include<stdio.h>
//main()
//{
//	int n;
//	printf("nhap n:");
//	scanf("%d",&n);
//#include<math.h>
//	if ((n/500)>0){
//		printf("\n so to 500 nghin la: %d", n/500);}
//		n=n%500;
//	if ((n/200)>0){
//		printf("\n so to 200 nghin la: %d", n/200);}
//		n=n%200;	
//	if ((n/100)>0){
//		printf("\n so to 100 nghin la: %d", n/100);}
//		n=n%100;	
//	if ((n/50)>0){
//		printf("\n so to 50 nghin la: %d", n/50);}
//		n=n%50;	
//	if ((n/20)>0){
//		printf("\n so to 20 nghin la: %d", n/20);}
//		n=n%20;	
//	if ((n/10)>0){
//		printf("\n so to 10 nghin la: %d", n/10);}
//		n=n%10;	
//	if ((n/5)>0){
//		printf("\n so to 5 nghin la: %d", n/5);}
//		n=n%5;	
//	if ((n/2)>0){
//		printf("\n so to 2 nghin la: %d", n/2);}
//		n=n%2;
//	if (n!=0){
//		printf("\n so to 1 nghin la: %d", n);}
//	else printf(" ");
//}
//***********************************************************************************************************
//#include<stdio.h>
//main()
//{
//	int n;
//	printf("nhap n:");
//	scanf("%d",&n);
//	printf("%d ngay ", n/86400);
//	n=n%86400;
//	printf("%d gio ", n/3600);
//	n=n%3600;
//	printf("%d phut ", n/60);
//	printf("%d giay ", n%60);
//}
//***************************************************************************************************************
//#include <stdio.h>
//main()
//{
//	int n,i,tong= 0;
//	printf("nhap mot so: ");
//	scanf("%d", &n);
//	if (n%2 == 0) printf("%d la so chan", n);
//	else printf("%d la so le", n);
//	while (n>0)
//	{
//	i = n%10;
//	tong += i;
//	n /= 10;
//	}
//	printf("\ntong cac chu so la %d", tong);
//}
//*****************************************************************************************
//#include<stdio.h>
//#include<math.h>
//main()
//{
//	int i, n;
//	printf("Input n= ");
//	scanf("%d", &n);
//	printf("\n OUTPUT: \n");
//	int m=sqrt(n);
//	printf("\nCac uoc so cua n la: ");
//	for (i=1;i<=m;i++)
//	{
//		if (n%i==0)
//		printf("\n %d %d", i, n/i);
//	}
//}
//*******************************************************
//#include<stdio.h>
//main()
//{
//	int n,i;
//	printf("input n= ");
//	scanf("%d",&n);
//	printf("\nOUTPUT: \n");
//	for(i=2;i<n;i++)
//	{if (n%i == 0)break;
//	}
//	if (i==n) printf("n la snt");
//	else printf("n khong phai la snt");
//}
//*********************************************************************************
//#include<stdio.h>
//main()
//{
//	int a,b,uoc,boi;
//	printf("input a: ");
//	scanf("%d",&a);
//	printf("input b: ");
//	scanf("%d",&b);
//	boi=(a*b);
//	if (a>0 && b>0)
//	{
//	while(a!=b)
//	{if (a>b) a-=b;
//	else b-=a;}
//	boi=boi/a;
//	printf("UCLN = %d", a);
//	printf("\nBCNN = %d", boi);
//	}
//	else printf("khong hop le");
//}

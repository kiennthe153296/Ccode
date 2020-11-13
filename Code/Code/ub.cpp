//#include<stdio.h>
//main()
//{
//	int a,b,boi;
//	printf("nhap so a: "); scanf("%d",&a);
//	printf("nhap so b: "); scanf("%d",&b);
//	boi=(a*b);
//	while (a!=b)
//	{
//	if (a>b) a=a-b;
//	else b=b-a;
//	}
//	boi=boi/a;
//	printf("uoc chung lon nhat cua 2 so la: %d", a);
//	printf("\nboi chung nho nhat cua 2 so la: %d", boi);
//}
//**************************************************************
#include<stdio.h>
main()
{
	int a,b,uoc,boi;
	printf("input a: ");
	scanf("%d",&a);
	printf("input b: ");
	scanf("%d",&b);
	boi=(a*b);
	if (a>0 && b>0)
	{
	while(a!=b)
	{if (a>b) a-=b;
	else b-=a;}
	boi=boi/a;
	printf("UCLN = %d", a);
	printf("\nBCNN = %d", boi);
	}
	else printf("khong hop le");
}

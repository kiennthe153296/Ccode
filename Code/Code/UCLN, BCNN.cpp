/* nhap vao 2 so va tinh ra uoc so chung lon nhat va boi chung nho nhat cua no */

//#include<stdio.h>
//int main (){
//	int a,b, uoc, boi,x;
//	scanf ("%d%d", &a, &b);
//	x=a*b;
//	while(a!=b){
//		if(a>b)
//		a=a-b;
//		else b=b-a;
//		uoc=b;
//		boi=x/uoc;
//	}
//	printf("%d", uoc);
//	printf ("\n%d", boi);
//	}

//#include<stdio.h>
//int main(){
//	int a,b,uc,bc;
//	scanf("%d%d", &a,&b);
//	for(uc=a; uc>=1; uc--){
//		if (a%uc==0&& b%uc==0){
//		printf("UCLN(%d,%d) la %d",a,b,uc);
//		break;
//		}
//	}
//	for (bc=a; bc<=a*b; bc++){
//		if (bc%a==0 && bc%b==0){
//			printf("\nBCNN(%d,%d) la %d", a, b, bc);
//			break;
//		}
//	}
//}


#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	int temp1=a, temp2=b;
	while(a!=b){
		if (a>b) a-=b;
		else b-=a;
	}
	printf("%d", a);
	printf("\n%d", temp1*temp2/a);
}


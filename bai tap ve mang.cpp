/*sap xep mang*/
//#include<stdio.h>
//int a[100];
//int main()
//{
//	int i,j,n,k;
//	scanf("%d",&n);
//	for(i = 0; i < n; i++) {
//		printf("a[%d]: ",i+1);
//		scanf("%d", &a[i]);
//	}
//	for(i = 0; i < n-1; i++) {
//		for(j = i+1; j < n; j++) {
//			if(a[i]>a[j]) {
//				k=a[i];
//				a[i]=a[j];
//				a[j]=k;
//			}
//		}
//	}
//	printf("mang sau khi sap xep: ");
//	for(i = 0; i < n; i++) {
//		printf(" %d ", a[i]);
//	}
//}
//**************************************************************************************
/*tinh tong va trung binh cong cac phan tu trong mang*/
//#include<stdio.h>
//int a[100];
//int main() {
//	int s = 0, i, n;
//	float t;
//	scanf("%d",&n);
//	for(i = 0; i<n; i++) {
//	printf("a[%d]: ", i+1);
//	scanf("%d", &a[i]);
//	}
//	for(i = 0; i < n; i++) {
//		if(a[i] % 2==0) {
//		s+=a[i];
//	}
//	}
//	t=s/n;
//	printf("tong cac phan tu chan trong mang: %d", s);
//	printf("\ntrung binh cong cac phan tu chan trong mang: %.3f", t);
//	return 0;
//}
//**************************************************************************************
/*tinh tong chu so trong mang*/
//#include<stdio.h>
//int a[100];
//int main() {
//	int s=0,n,i,k;
//	scanf("%d",&n);
//	for(i=0;i<n;i++) {
//		printf("nhap a[%d]: ", i+1);
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<n;i++) {
//		while(a[i]>0) {
//		k=a[i]%10;
//		s+=k;
//		a[i]/=10;
//		}
//	}
//	printf("tong chu so trong mang la %d", s);
//	return 0;
//} 
////**************************************************************************************
/*sap xep so chan le*/
//#include<stdio.h>
//int a[100];
//int main() {
//	int i,j,n,temp;
//	scanf("%d",&n);
//	for(i=0;i<n;i++) {
//		printf("a[%d] = ", i+1);
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<n-1;i++) {
//		for(j=i+1;j<n;j++) {
//			if(a[i]>a[j]&&a[i]%2==0&&a[j]%2==0) {
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//			else if(a[i]>a[j]&&a[i]%2==1&&a[j]%2==1){
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	printf("mang sau khi sap xep: ");
//	for(i=0;i<n;i++) {
//		printf(" %d ", a[i]);
//	}
//	return 0;
//}
//**************************************************************************************
/*sap xep so nguyen to*/
//#include<stdio.h>
//#include<math.h>
//int a[100];
//int nto(int n) {
//	for(int i=2;i<=sqrt(n);i++) {
//		if(n%i==0)
//		return 0;
//		}
//		return n>1;
//}
//int main() {
//	int i,j,n,temp;
//	scanf("%d", &n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]= ", i+1);
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<n-1;i++) {
//		for(j=i+1;j<n;j++) {
//			if(a[i]<a[j]&&nto(a[i])&&nto(a[j])) {
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	printf("mang sau khi sap xep la: ");
//	for(i=0;i<n;i++) {
//		printf(" %d ", a[i]);
//	}
//	return 0;
//}
//***********************************************************************
/*them so 00 vao truoc 2 don vi doi voi phan tu thu 3 la so chan*/
//#include<stdio.h>
//int a[100];
//int main() {
//	int i,j,n;
//	scanf("%d",&n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]= ", i+1);
//		scanf("%d",&a[i]);
//	}
//	return 0;
//}
//************************************************************************
/*xoa bo phan tu chan thu 2*/
//#include<stdio.h>
//int a[100];
//int main() {
//	int i,j,n,count=0,pos;
//	scanf("%d",&n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]= ", i+1);
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<n;i++) {
//		if(a[i]%2==0) 
//			continue; {
//		printf(" %d", a[i]);
//		count++;
//		if(count == 2) break; {
//			printf("%d", a[i]);
//			}
//		}
//    }
//	return 0;
//}
/*xoa 2 phan tu dung sau phan tu chan thu 2*/
/*thay so nguyen to thu 2 tu duoi len bang so binh phuong cua no*/
/*xoa cac so nguyen to*/
/*xoa 3 so nguyen to dau tien*/
/*sua cac so nguyen to thanh so 99*/
//#include<stdio.h>
//#include<math.h>
//int a[100];
//int nto(int n) {
//	int i;
//	for(i=2;i<=sqrt(n);i++) {
//		if (n%i==0)
//		return 0;
//	}
//	return n>1;
//}
//int main() {
//	int i,n;
//	scanf("%d",&n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]= ", i+1);
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<n;i++) {
//		if(nto(a[i])) {
//			a[i]=99;
//		}
//	}
//	for(i=0;i<n;i++) {
//		printf(" %d ", a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int a[100];
//int main() {
//	int i,n,pos;
//	printf("nhap so phan tu: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]= ", i+1);
//		scanf("%d",&a[i]);
//	}
//	for (int i=pos+1;i<=n-1;i++) {
//		a[i-1] = a[i];
//	}
//	--n;
//	for(i=0;i<n;i++) {
//	printf(" %d ", a[i]);
//	}
//}
//#include<stdio.h>
//#include<math.h>
//int a[100];
//int nto(int n) {
//	for(int i=2;i<=sqrt(n);i++) {
//		if(n%i==0)
//		return 0;
//		}
//		return n>1;
//}
//void xoa(int a[], int n, int pos) {
//	for(int i=pos;i<n-1;i++) {
//		a[i]=a[i+1];
//	}
//	n--;
//}
//int main() {
//	int i,n,pos;
//	scanf("%d",&n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]: ", i+1);
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<n;i++) {
//		if(nto(a[i])) {
//			xoa(a,n,i);
//			n--;
//			i--;
//		}
//		
//	}
//	printf("mang sau khi xoa: \n");
//	for(i=0;i<n;i++) {
//		printf("%d  ", a[i]);
//	}
//	return 0;
//}
//******************************************************************************************
//#include<stdio.h>
//#include<math.h>
//int nto(int n) {
//	int i;
//	for(i=2;i<=sqrt(n);i++) {
//		if(n%i==0) return 0;
//	}	
//	return n>1;
//}
//int main() {
//	int a[100];
//	int i,n;
//	scanf("%d", &n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]: ", i+1);
//		scanf("%d", &a[i]);
//	}
//	int count=0;
//	for(i=0;i<n;i++){
//		if(nto(a[i])){
//			count++;
//		}
//		if(count==2) {
//			a[i-1]=0;
//			a[i-2]=0;
//			a[i-3]=0;
//			break;
//		}
//	}
//	for(i=0;i<n;i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//Xoa 3 so nguyen to dau tien
#include<stdio.h>
#include<math.h>
void xoa(int a[],int n,int pos){
	for(int i=pos;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int main(){
	int n;
	printf("Nhap so phan tu trong mang:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(nt(a[i])){
			cnt++;
			xoa(a,n,i);
			n--;
			i--;	
		}
		if(cnt==3){
			break;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}


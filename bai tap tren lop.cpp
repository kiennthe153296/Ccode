//BAI1*******************************************************************
//#include<stdio.h>
//#include<math.h>
//
//int fb(int n) {
//	if(n==0||n==1||n==2) return 1;
//	int fib1=1,fib2=1,fib=2;
//	while(fib1+fib2<=n){
//		fib=fib1+fib2;
//		fib1=fib2;
//		fib2=fib;
//	}
//	if(fib==n){
//		return 1;
//	}
//	return 0;
//}
//int cp(int n) {
//	int x=sqrt(n);
//	if(x*x==n) return 1;
//	return 0;
//}
//int main() {
//	int a[100];
//	int i,n;
//	scanf("%d", &n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]= ", i+1);
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<n;i++) {
//		if(cp(a[i])) {
//			a[i]=99;
//		}
//		if(fb(a[i])) {
//			a[i]=111;
//		}
//	}
//	printf("mang sau khi sua: \n");
//	for(i=0;i<n;i++) {
//		printf("%d  ", a[i]);
//	}
//	return 0;
//}
//BAI2************************************************************************
//#include<stdio.h>
//#include<math.h>
//int nto(int n) {
//	for(int i=2;i<=sqrt(n);i++) {
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
//	for(i=0;i<n;i++) {
//		if(nto(a[i])){
//			count++;
//			if(count==3) {
//			a[i-1]=0;
//			a[i+1]=0;
//		    break;
//			}
//		}
//	}
//	for(i=0;i<n;i++) {
//		printf("%d  ", a[i]);
//	}
//	return 0;
//}
//BAI3: Thay 2 phan tu ben canh so chinh phuong thu 2**********************************************************************
//#include<stdio.h>
//#include<math.h>
//int cp(int n) {
//	int x=sqrt(n);
//	if(x*x==n) return 1;
//	return 0;
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
//	for(i=n;i>0;i--) {
//		if(cp(a[i])) {
//			count++;
//			if(count==2) {
//				a[i-1]=0;
//				a[i+1]=0;
//				break;
//			}
//		}
//	}
//	for(i=0;i<n;i++) {
//		printf("%d   ", a[i]);
//	}
//}
//BAI4: Thay 3 phan tu truoc phan tu nguyen to thu 2 bang so 0***************************************************************
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
//	for(i=0;i<n;i++) {
//		if(nto(a[i])) {
//			count++;
//			if(count==2) {
//				a[i-1]=0;
//				a[i-2]=0;
//				a[i-3]=0;
//				break;
//			}
//		}
//	}
//	for(i=0;i<n;i++) {
//		printf("%d  ", a[i]);
//	}
//	return 0;
//}
//BAI5: Them vao truoc cac so chinh phuong so 99******************************************************************************
//#include<stdio.h>
//#include<math.h>
//int cp(int n) {
//	int m=sqrt(n);
//	if(m*m==n) return 1;
//	return 0;
//}
//int main () {
//	int a[100];
//	int i=0,n,j;
//	scanf("%d", &n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]: ", i+1);
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<n;i++) {
//		if(cp(a[i])) {
//			for(j=n-1;j>=i;j--) {
//				a[j+1]=a[j];
//			}
//			a[i]=99;
//			n++;
//			i++;
//		}
//	}
//	for(i=0;i<n;i++) {
//		printf("%d  ", a[i]);
//	}
//}
//BAI5: them 3 so 0 vao truoc so chinh phuong thu 2
//#include<stdio.h>
//#include<math.h>
//int cp(int n) {
//	int m=sqrt(n);
//	if(m*m==n) return 1;
//	return 0;
//}
//int main() {
//	int a[100];
//	int i=0,n,j, count=0,pos;
//	scanf("%d", &n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]: ", i+1);
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<n;i++) {
//		if(cp(a[i])) count++;
//		if(count==2) {
//			pos=i;
//			for(i=n+2;i>pos;i--) {
//				a[i]=a[i-3];
//			}
//			a[pos]=0;
//			a[pos+1]=0;
//			a[pos+2]=0;
//			n++;
//			i++;
//		}
//	}
//	for(i=0;i<n+2;i++) {
//		printf("%d  ", a[i]);
//	}
//}
//BAI6: them 2 so 0 vao sau ptu ngto thu 2 tu duoi len
//#include<stdio.h>
//#include<math.h>
//int nt(int n) {
//	int i;
//	if n<=1 return 0;
//	for(i=2;i<=sqrt(n);i++) {
//	if(n%i==0) return 0;
//	}
//	return 1;
//}
//int main() {
//	int a[100];
//	int i=0,n,count=0,pos;
//	scanf("%d", &n);
//	for(i=0;i<n;i++) {
//		printf("a[%d]: ", i+1);
//		scanf("%d", &a[i]);
//	}
//	for(i=n;i>0;i--) {
//		if(nt(a[i])) count++;
//		if(count==2) {
//			pos=i;
//			for(i=n+1;i>pos;i--) {
//				a[i]=a[i-2];
//			}
//			a[pos+1]=0;
//			a[pos+2]=0;
//			n++;
//			i++;
//		}
//	}
//	for(i=0;i<n+1;i++) {
//		printf("%d  ", a[i]);
//	}
//}
//So palindrome
//#include <stdio.h>
//void chen(int a[],int n, int pos, int x){
//	for(int i=n;i>pos;i--){
//		a[i]=a[i-1];
//	}
//	a[pos]=x;
//	n++;
//}
//int palin(int n){
//	int r, sum=0;
//	int temp=n;
//	while (n>0){
//		r=n%10;
//		sum=(sum*10)+r;
//		n/=10;
//	}
//	if (temp==sum||temp==0) return 1;
//	return 0;
//}
//
//int main(){
//	int n;
//	printf("Nhap so phan tu trong mang:");
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		printf("Phan tu thu a[%d]: ",i);
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		if(palin(a[i])==1){
//			chen(a,n,i+1,11);
//			n++;
//			i++;
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}
//************************************************************************************
//OUTPUT: 975312468
//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a[100],b[100];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[j]>a[i]){
//				int tmp=a[j];
//				a[j]=a[i];
//				a[i]=tmp;
//			}
//		}
//	}
//	int l=0,r=n-1;
//	int dem=0;
//	b[n/2]=a[n-1];
//	while(l<r){
//		b[l]=a[dem++];
//		b[r]=a[dem++];
//		l++;
//		r--;
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",b[i]);
//	}
//}









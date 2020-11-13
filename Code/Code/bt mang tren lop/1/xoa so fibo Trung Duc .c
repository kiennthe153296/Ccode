
/*bai 2 xoa cac so fibo*/
//**************************************************************************************************
#include<stdio.h>
void xoa(int a[],int n,int pos){
	for(int i=pos;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
int fibo(int n){
	if(n==0 || n==1 || n==2) return 1;
	int fib1=1, fib2=1,fib=2;
	while(fib1+fib2<=n){
		fib=fib1+fib2;
		fib1=fib2;
		fib2=fib;
	}
	if(fib==n){
		return 1;
	}
	return 0;
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
	for(int i=0;i<n;i++){
		if(fibo(a[i])){
			xoa(a,n,i); 
			n--;
			i--;	
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

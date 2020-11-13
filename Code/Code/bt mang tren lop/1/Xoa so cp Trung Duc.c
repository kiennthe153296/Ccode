/*bai 1 xoa cac so chinh phuong */
//**************************************************************************************************
#include<stdio.h>
#include<math.h>

void xoa(int a[],int n,int pos){
	for(int i=pos;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
int cp(int n){
	int x=sqrt(n);
	if(x*x==n){
		return 1;
	}
	else return 0;
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
		if(cp(a[i])){
			xoa(a,n,i); 
			n--;
			i--;	
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

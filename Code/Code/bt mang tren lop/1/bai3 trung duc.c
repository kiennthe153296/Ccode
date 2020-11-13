/*bai 3 them vao sau cac so palin bang so 11 */
#include <stdio.h>
void chen(int a[],int n, int pos, int x){
	for(int i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=x;
	n++;
}
int palin(int n){
	int r, sum=0;
	int temp=n;
	while (n>0){
		r=n%10;
		sum=(sum*10)+r;
		n/=10;
	}
	if (temp==sum||temp==0) return 1;
	return 0;
}

int main(){
	int n;
	printf("Nhap so phan tu trong mang:");
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		printf("Phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(palin(a[i])==1){
			chen(a,n,i+1,11);
			n++;
			i++;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}



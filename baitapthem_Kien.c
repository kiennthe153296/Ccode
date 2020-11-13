#include<stdio.h>
#include<math.h>
int nt(int n) {
	int i;
	for(i=2;i<=sqrt(n);i++) {
		if(n%i==0) return 0;
	}
	return n>1;
}
void xoa(int a[], int n, int pos) {
	for(int i=pos;i<n-1;i++) {
		a[pos]=a[pos+1];
	}
	n--;
}
int main() {
	int i,n,count=0;
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++) {
		printf("a[%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++) {
		if(nt(a[i])) {
			count++;
			xoa(a,n,i);
			n--;
			i--;
		}
		if (count==3) 
			break;
	}
	for(i=0;i<n;i++) {
		printf("%d  ", a[i]);
	}	
}

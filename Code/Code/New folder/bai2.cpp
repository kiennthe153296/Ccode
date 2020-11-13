#include <stdio.h>

int giaithua(int n) {
	int tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}

int so(int n,int k) {
	return giaithua(n)/(giaithua(n-k) * giaithua(k));
}

int main() {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
    	for(int j=0; j<=n-i; j++)
    		printf(" ");
    	for(int j=0; j<=i; j++)
        	printf("%d ", so(i,j));
	printf("\n");
	}
	return 0;
}

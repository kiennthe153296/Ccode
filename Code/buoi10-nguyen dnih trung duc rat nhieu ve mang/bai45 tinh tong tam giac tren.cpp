/*bai 45 tinh tong SNT tam giac duoi */
#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
			if(nt(a[i][j])&&i>=j){
				sum+=a[i][j];
			}
		}
	}
	printf("%d", sum);
}

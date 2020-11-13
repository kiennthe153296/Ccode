/*bai 510A */

#include<stdio.h>
int le(int n){
	if(n%2==1) return 1;
	return 0;
}
int chan(int n){
	if(n%2==0) return 1;
	return 0;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(le(i)){
				printf("#");
			}
			if(i%4==2){
				printf(".");
			}
		}
		printf("\n");
	}
}

/*bai 26 tich ma tran voi chuyen vi */

#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d", &n,&m);
	int a[n][m],b[m][n],c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &a[i][j]);
			b[j][i]=a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
			for(int k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}

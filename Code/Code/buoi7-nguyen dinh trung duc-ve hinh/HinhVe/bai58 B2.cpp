/* bai 58 va bai 59 B2 */
#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=n-i;j>=0;j--){
			printf("~");
		}
		for(j=1;j<=i;j++){
			printf("%d", i);
		}
		printf("\n");
	}
}

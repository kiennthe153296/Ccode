/*bai 25*/

#include <stdio.h>
int main(){
	int i,j,n;
	scanf ("%d", &n);
	for (i=1; i<=n; i++){
		for (j=1; j<=n;j++){
			printf ("%d", i-1);
		}
		printf ("\n");
	}
}

/* bai 3 */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	int m1=-1e9, m2=-1e9;
	for(int i=0;i<n;i++){
		if(a[i]>m1){
			m2=m1;
			m1=a[i];
		}
		else if(a[i]>m2 && a[i]!=m1){
			m2=a[i];
		}
	}
	printf("%d ",m1);
	if(m2==-1e9){
		printf("-1");
	}
	else printf("%d ",m2);
}

/*bai 5 bubble sort*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int cnt=1;
	for(int i=0;i<n;i++){
		int ok=0;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
				ok=1;
			}
		}
		if(ok==1){
			printf("Buoc %d:",cnt++);
			for(int j=0;j<n;j++){
				printf("%d ",a[j]);
			}
			printf("\n");
		}
	}
}

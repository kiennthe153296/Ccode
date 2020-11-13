/*bai 10 chen chuoi */

#include<stdio.h>
#include<string.h>
void copy(char a[]){
	char a0[1000];
	char b[1000];
	gets(b);
	int p;
	scanf("%d",&p);
	strcpy(a0,a+p-1);
	strcpy(a+p-1,b);
	strcat(a,a0);
	puts(a);
}

int main(){
	char a[1000];
	gets(a);
	copy(a);
	return 0;
}

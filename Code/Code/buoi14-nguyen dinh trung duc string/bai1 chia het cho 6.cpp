/*bai 1 dau hieu chia het cho 6*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[1001];
	scanf("%s",c);
	int sum=0;
	for(int i=0;i<strlen(c);i++){
		sum+=c[i]-'0';
	}
	if(sum%3==0){
		if((c[strlen(c)-1] - '0')%2==0){
			printf("1");
			return 0;
		}
	}
	printf("-1");
}

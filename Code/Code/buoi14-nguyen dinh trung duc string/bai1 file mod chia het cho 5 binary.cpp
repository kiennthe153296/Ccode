/*bai 1 file mod so nhi phan co chia het cho 5 khong */

#include<stdio.h>
#include<string.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1001];
		scanf("%s",c);
		for(int i=0;i<strlen(c);i++){
			if(strlen(c)%2==0){
				if((c[i]-'0')==1 && i%2==0){
					c[i]='2';
				}
				else if((c[i]-'0')==1 && i%2==1){
					c[i]='1';
				}
			}
			else if(strlen(c)%2==1){
				if((c[i]-'0')==1 && i%2==1){
					c[i]='2';
				}
				else if((c[i]-'0')==1 && i%2==0){
					c[i]='1';
				}
			}
		}
		int sum=0;
		for(int i=0;i<strlen(c);i++){
			if(strlen(c)%2==0){
				if(i%4==0 || i%4==1){
					sum+=c[i]-'0';
				}
				else if(i%4==3 || i%4==2){
					sum-=(c[i]-'0');
				}
			}
			else if(strlen(c)%2==1){
				if(i%4==2 || i%4==1){
					sum+=c[i]-'0';
				}
				else if(i%4==3 || i%4==0){
					sum-=(c[i]-'0');
				}
			}
		}
		if(sum%5==0)
			printf("YES\n");
		else printf("NO\n");
	}
}

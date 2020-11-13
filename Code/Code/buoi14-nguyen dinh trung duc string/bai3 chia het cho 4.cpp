/*bai 3 dau hieu chia het cho 4 */

#include<stdio.h>
#include<string.h>


int min(int a, int b){
	if(a>=b){
		return b;
	}
	return a;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1001];
		scanf("%s",c);
		int res=0;
		int so=min(strlen(c),2);
		for(int i=0;i<so;i++){
			res=res*10+(c[strlen(c)-so+i]-'0');
		}
		if(res%4==0) printf("1\n");
		else printf("0\n");
	}
}

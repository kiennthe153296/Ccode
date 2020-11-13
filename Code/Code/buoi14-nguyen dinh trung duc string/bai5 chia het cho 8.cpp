/*bai5 chia het cho 8 3 chu so tan cung chia het cho 8*/

#include<stdio.h>
#include<string.h>
int min(int a,int b){
	if(a<b) return a;
	return b;
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		char c[1001];
		scanf("%s",c);
		int res=0;
		int so=min(3,strlen(c));
		for(int i=0;i<so;i++){
			res=res*10+(c[strlen(c)-so+i]-'0');
		}
		if(res%8==0) printf("1\n");
		else printf("0\n");
	}
}



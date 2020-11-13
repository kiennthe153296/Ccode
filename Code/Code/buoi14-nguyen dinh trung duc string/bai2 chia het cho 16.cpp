/*bai 2 dau hieu chia het cho 16*/

#include<stdio.h>
#include<string.h>

int Reverse(int n){
    int reNum = n % 10;
    n /= 10; 
    int last;
    while(n > 0){
        last = n % 10; 
        n /= 10; 
        reNum = reNum * 10 + last; 
    }
    return reNum;
}

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
		int so=min(strlen(c),4);
		for(int i=0;i<so;i++){
			res=res*10+(c[strlen(c)-so+i]-'0');
		}
		if(res%16==0){
			printf("1\n");
		}
		else printf("0\n");
	}
}

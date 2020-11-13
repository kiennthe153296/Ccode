/*bai 236A*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	gets(c);
	int len=strlen(c);
	int cnt=0;
	int a[100]={0};
	for(int i=0;i<len;i++){
		if(a[c[i] - 'a'] == 0){
            cnt++;
            a[c[i] - 'a'] = 1;
        }
	}
	if(cnt%2==0){
		printf("CHAT WITH HER!");
	}
	else printf("IGNORE HIM!");
}



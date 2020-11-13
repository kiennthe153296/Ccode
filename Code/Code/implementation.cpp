/*implementation, math, greedy*/

/*bai50A*/
//#include<stdio.h>
//int main(){
//	int a,b;
//	scanf("%d%d",&a,&b);
//	printf("%d",a*b/2);
//}

/*bai 1A*/

//#include<stdio.h>
//int main(){
//	long long n,m,a;
//	scanf("%d%d%d",&n,&m,&a);
//	int c=a*a;
//	int d=n*m;
//	if(d%c==0){
//		printf("%d", d/c);
//	}
//	else if(d<c){
//		printf("1");
//	}
//	else if((n%a==0||n%a==1)&&(m%a==0||m%a==1)){
//		printf("%d", (n%a+n/a)*(m%a+m/a));
//	}
//	else{
//		printf("4");
//	}
//}

/*frog jumping*/

//#include<stdio.h>
//#define ll long long 
//int main(){
//	ll a,b,k;
//	scanf("%lld%lld%lld",&a,&b,&k);
//	if(a==b){
//		printf("0");
//		return 0;
//	}
//	int sum=0;
//	for(int i=1;i<=k;i++){
//		if(i%2==1){
//			sum+=a;
//		}
//		else sum-=b;
//	}
//	printf("%d",sum);
//}

/*515A*/

//#include<stdio.h>
//#include<math.h>
//int main(){
//	int a,b,n;
//	scanf("%d%d%d",&a,&b,&n);
//	a=abs(a);
//	b=abs(b);
//	if((a+b<n)&&a==0&&b==0&&n%2==0){
//		printf("Yes");
//		return 0;
//	}
//	else if(a+b==n){
//		printf("Yes");
//	}
//	else if(a+b<n){
//		if((n-a-b)%2==0){
//			printf("Yes");
//		}
//		else printf("No");
//	}
//	else if(n%(a+b)==0){
//		printf("Yes");
//	}
//	else printf("No");
//}

/*1061A*/
#include<stdio.h>
int main(){
	int n,s;
	scanf("%d%d",&n,&s);
	if(s%n==0){
		printf("%d",s/n);
	}
	else
	printf("%d",(s/n)+1);
}

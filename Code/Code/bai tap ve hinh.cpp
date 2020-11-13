//#include<stdio.h>
//#include<math.h>
//
//int snt(int n){
//	int i;
//	for(i=2;i<=sqrt(n); i++){
//		if (n%i==0) return 0;
//	}
//	if (n>1) return 1;
//	else return 0;
//}
//
//int main(){
//	int n;
//	int i, count=0;
//	scanf("%d", &n);
//	for(i=1; count<n; i++){
//		if (snt(i)) count++;
//		if(count==n) printf("%d", i);
//	}
//}


/*so fibo */

//#include<stdio.h>
//int main(){
//int i,n;
//int f1=0, f2=1, fn=0;
//int sum=0;
//scanf("%d", &n);
//if(n>0) printf("0 ");
//	for(i=1; i<n; i++) {
//		f1=f2;
//		f2=fn;
//		fn=f2+f1;
//		printf("%d ", fn );
//}
//}

//#include<stdio.h>
//
//int check(int n){
//	int r, sum=0;
//	int temp=n;
//	while (n>0){
//		r=n%10;
//		n/=10;
//		sum=sum*10+r;
//	}
//	if (temp==sum) return 1;
//	return 0;
//}
//
//int main(){
//	int i,n;
//	scanf("%d", &n);
//	for(i=0; i<n; i++){
//		if(check(i)==1) printf("%d ", i);
//	}
//}

/* so armstrong */

#include<stdio.h>
#include<math.h>
int dem(int n){
	int count=0;
	while (n>0){
		n/=10; 
		count++;
	}
	return count;
}

int check(int n){
	int r;
	int a = dem(n);
	int temp=n;
	int sum=0;
	while(n>0){
		r=n%10; 
		n/=10;
		sum+=pow(r,a);
	}
	if (temp==sum) return 1;
	return 0;
}

int main(){
	int a,b,i;
	scanf("%d%d", &a, &b);
	for (i=a; i<=b; i++){
		if (check(i)==1) printf("%d ", i);
	}
}


/*bai1 - dang sai */
//#include <stdio.h>
//int main ()
//{
//	int n, i;
//	int sum=0;
//	printf ("nhap so n");
//	scanf ("%d", &n);
//		for (i = 1; i<=n; i++){
//			sum = sum + i;
//		}
//		printf ("Dap an la %d", sum);
//}

/*bai 2 */
//#include <stdio.h>
//int main (){
//	int n,i;
//	int sum = 0;
//	scanf ("%d", &n);
//	for (i=1; i<=n; i++){
//		sum+=i*i;
//	}
//	printf ("%d", sum);
// return 0;
//}

/*bai 3*/

//#include <stdio.h>
//int main (){
//	int i, n;
//	int sum=0;
//	scanf ("%d", &n);
//	for (i=1; i<=n; i++){
//	if (i%3==0) sum+=i;
//}
//printf ("%d", sum);
//}

/*bai 4*/
//#include <stdio.h>
//int main (){
//	int i, n;
//	float sum=0;
//	scanf ("%d", &n);
//	for (i=1; i<=n; i++){
//		sum += 1/(float)i;
//	}
//	printf ("%.2f", sum);
//	return 0;
//}

/*bai 5*/
//#include <stdio.h>
//int main (){
//	int i,n;
//	float sum=0;
//	scanf ("%d", &n);
//	for (i=1; i<=n; i++){
//		sum += 1/(float)(2*i);
//	}
//	printf ("%.2f", sum);
//	return 0;
//}

/*bai 6*/

//#include <stdio.h>
//int main(){
//	int i,n,sum;
//	int sum1=0, sum2=0; 
//	scanf ("%d", &n);
//	if (n%2==0){
//		for (i=2;i<=n;i+=2){
//			sum1+=i;
//		}
//		for (i=1;i<=n-1;i+=2){
//			sum2+=i;
//		}
//		sum=sum1-sum2;
//	}
//	if (n%2!=0){
//		for (i=2;i<=n-1;i+=2){
//			sum1+=i;
//		}
//		for (i=1;i<=n;i+=2){
//			sum2+=i;
//		}
//		sum=sum1-sum2;
//	}
//	printf ("%d",sum);
//}
/*bai 7*/
//#include<stdio.h>
//int main (){
//	int i,n; 
//	int sum =0;
//	scanf ("%d", &n);
//	for (i=2;i<=2*n;i+=2){
//		sum += i;
//	}
//	printf ("%d",sum);	
//}

/*bai 8*/
//#include <stdio.h>
//int main (){
//	int i,n;
//	int sum=0;
//	scanf ("%d", &n);
//	for (i=1; i<=2*n-1; i+=2){
//		sum += i;
//	}
//	printf ("%d", sum);
//	return 0;
//}

/*bai 9*/
//#include <stdio.h>
//int main (){
//	int i, n;
//	int sum=0;
//	scanf ("%d", &n);
//	for (i=1; i<=n; i++){
//		sum += i*i*i;
//	}
//	printf ("%d", sum);
//	return 0;
//}

/* bai 10*/
//#include <stdio.h>
//int main(){
//	int i,n;
//	int tich =1;
//	scanf ("%d", &n);
//	for (i=1; i<=n; i++){
//		tich = tich * i;
//	}
//	printf ("%d", tich);
//	return 0;
//}

/*bai 11 */
//#include <stdio.h>
//int main (){
//	int x, y, i;
//	scanf ("%d%d", &x, &y);
//	int dapAn=1;
//	for (i=1;i<=y; i++){
//		dapAn*=x;
//	}
//	printf ("%d", dapAn);
//	return 0;
//}

/* bai 12*/
//#include <stdio.h>
//int main (){
//	long long n;
//	int count=0;
//	scanf("%lld", &n);
//	while (n!=0){
//		n/=10;
//		count++;
//	}
//	printf ("%d", count);
//	return 0;
//}

/*bai 13*/
//#include <stdio.h>
//int main (){
//	long long n;
//	int sum=0;
//	scanf("%lld", &n);
//	while (n!=0){
//		sum+=n%10;
//		n/=10;
//	}
//	printf ("%d", sum);
//	return 0;
//}

/* bai 14*/

/* bai 2 phan btcoban*/

//#include <stdio.h>
//int main()
//{
//	float n, nhietDo;
//	scanf ("%f", &n);
//	nhietDo = (n * 9 / 5) + 32;
//	printf ("%.2f", nhietDo);
//	return 0;
//}

/*bai 10 phan btcoban*/
//#include <stdio.h>
//int main()
//{
//    int f0 = 0;
//    int f1 = 1;
//    int fn = 0;
//    int i,n,sum=0;
//    scanf ("%d", &n);
//    if (n>1) printf ("0");
//    for (i = 1; i < n; i++) {
//        f0 = f1;
//        f1 = fn;
//        fn = f0 + f1;
//        sum+=fn;
//        printf ("%2d", fn);
//        }
//        printf ("\n%2d", sum);
//        return 0;
//}

/* bai 14 part 2*/
//#include <stdio.h>
//int main(){
//	int n, y, w, d;
//	scanf ("%d", &n);
//	y = n / 365;
//	w = (n-y*365) / 7;
//	d = (n-y*365) % 7;
//	printf ("%d %d %d", y, w, d);
//	return 0;
//}

/*bai 23 part 2 em tu them cai tinh so cac so nghiem cua no*/
//#include <stdio.h>
//int main (){
//	int i,n;
//	int count=0;
//	int sum=0;
//	scanf("%d",&n);
//	for (i=1; i<=n;i++){
//		if (n%i==0){ 
//		count ++;
//		printf ("%3d",i);
//		sum += i;
//		}
//	}
//	printf ("\n%3d", count);
//	printf ("\n%3d", sum);
//	return 0;
//}

/*bai 24 part 2*/

//#include<stdio.h>
//int main (){
//	int i,j,n;
//	int count;
//	scanf ("%d", &n);
//	if (n<0) printf ("khong co");
//	else{
//	for (i=2; i<=n;i++){
//		count = 0;
//		for (j=1; j<=n; j++)
//			if(i%j==0) count ++;
//			if(count == 2) printf ("%3d", i);
//	}
//}
//}

/*bai 34 part 2*/
//#include <stdio.h>
//int main(){
//	int i, n;
//	int fact=1;
//	scanf ("%d", &n);
//	for (i=1; i<=n; i++){
//		fact = fact * i;
//	}
//	printf ("%d", fact);
//}

/* bai 43 in bang cuu chuong */
//#include<stdio.h>
//int main(){
//	int i,s,n;
//	scanf ("%d", &n);
//	for (i=1;i<=10;i++){
//		s = i*n;
//		printf ("%3d", s);
//	}
//}

/* bai 14*/
//#include <stdio.h>
//int main (){
//	long long n;
//	int i, sum1=0, sum2=0;
//	scanf ("%lld", &n);
//	while (n!=0){
//		i = n %10;
//		if (i%2==0){
//			sum1+=i;
//			n/=10;
//		}
//		else {
//			sum2+=i;
//			n/=10;
//		}	
//	}
//	printf ("\n%d", sum1);
//	printf ("\n%d", sum2);
//	return 0;
//}

/*bai15*/
//#include <stdio.h>
//int main(){
//	long long i,n;
//	int count1=0, count2=0;
//	scanf ("%lld", &n);
//	while (n!=0){
//		i = n%10;
//		if (i%2==0){
//			count1++;
//			n/=10;
//		}
//		else{
//			count2++;
//			n/=10;
//		}
//	}
//	printf ("%d\n%d", count1,count2);
//	return 0;
//}

/*bai 16*/
//#include <stdio.h>
//int main(){
//	long long i, n;
//	int count=0;
//	scanf ("%lld",&n);
//	while (n!=0){
//		i=n%10;
//		if (i==2 || i==3 || i==5 || i==7)
//		count ++;
//		n/=10;
//	}
//	printf ("%d", count);
//	return 0;
//}

/*bai17*/
//#include <stdio.h>
//int main(){
//	long long i,n;
//	int count1=0, count2=0;
//	scanf ("%lld", &n);
//	while (n!=0){
//		i = n%10;
//		if (i%2==0){
//			count1++;
//			n/=10;
//		}
//		else{
//			count2++;
//			n/=10;
//		}
//	}
//	if (count1==count2) printf ("yes");
//	else printf ("no");
//	return 0;
//}

/*bai 18*/
//#include <stdio.h>
//int main(){
//	int i, n;
//	scanf ("%d",&n);
//	for (i=1; i<=n; i++){
//	printf ("\n%d", i);
//	}
//	return 0;
//}

/*bai 19*/
//#include <stdio.h>
//int main(){
//	int i,j,n;
//	int dapAn=0;
//	scanf ("%d", &n);
//	for (i=1;i<=n;i++){
//		for (j=1; j<=n; j++)
//		dapAn=i*j;
//		printf ("\n%d", dapAn);
//		}
//	return 0;
//}

/*bai20*/
//#include <stdio.h>
//int main(){
//	int i,n;
//	scanf ("%d", &n);
//	for (i=0; i<=1000;i+=n){
//		if (i%n==0) printf ("%5d", i);
//	}
//}

/*bai 1 tim so dep btcoban*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int ktnguyento(int n){
	if (n<2) return false;
	int i;
	for (i=2; i<=sqrt(n); i++){
		if (n%i==0) return false;
	}
	return true;
}

int csnguyento(int n){
	while (n>0){
		int c=n%10;
		n/=10;
		if (ktnguyento(c)) return true;
	}
	return false;
}

int tongcsnguyento(int n){
	int tong=0;
	while (n>0){
		tong+=n%10;
		n/=10;
	}
	if (ktnguyento(tong)){
		return true;
	}
	return false;
}

int main(){
	int i,a,b;
	scanf ("%d%d", &a, &b);
	for (i=a; i<=b; i++){
		if (ktnguyento(i) && csnguyento(i) && tongcsnguyento(i)){
		printf ("%d  ", i);
		}
	}
	return 0;
}




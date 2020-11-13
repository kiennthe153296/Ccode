/* bai 1 buoi 1 */
//#include <stdio.h>
//int main ()
//{
//	int n;
//	scanf ("%d", &n);
//	if (n>0){
//	if (n%2 == 0){
//		printf ("So chan!");
//	}
//	else {
//		printf ("So le!");
//	}
//}
//	else printf ("0");
//	return 0;
//}

/*bai 2 buoi 1*/

//#include <stdio.h>
//int main ()
//{
//	int n;
//	scanf ("%d", &n);
//	if (n>0){
//		printf ("+");
//	}
//	else if (n==0){
//		printf ("0");
//	}
//	else {
//	printf ("-");}	
//	return 0;
//}

/*bai 3 buoi 1*/ 
//#include <stdio.h>
//int main ()
//{
//	int n;
//	printf ("nhap nam can xet");
//	scanf ("%d", &n);
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0 ) {
//		printf ("1");
//	}
//	else if (n<0) printf ("Du lieu khong hop le");
//	else printf ("0");
//	return 0;
//}

/*bai 4*/
//#include <stdio.h>
//int main (){
//	int n;
//	scanf ("%d", &n);
//	if (n==1) printf ("Chu nhat");
//	else if (n==2) printf ("Thu hai");
//	else if (n==3) printf ("Thu ba");
//	else if (n==4) printf ("Thu tu");
//	else if (n==5) printf ("Thu nam");
//	else if (n==6) printf ("Thu sau");
//	else if (n==7) printf ("Thu bay");
//	else printf ("Khong hop le");
//	return 0;
//}


/* bai 7 buoi 1 */
//#include <stdio.h>
//int main ()
//{
//	int n, tong;
//	scanf ("%d", &n);
//	tong = (n+1) * n /2;
//	printf ("%d", tong);
//	return 0;
//}
/* bai 8 buoi 1 */
//#include <stdio.h>
//int main ()
//{
//	int n, a, tong;
//	scanf ("%d", &n);
//	if (n>0){
//	if (n%2==0){
//		a = ((n-2) / 2) + 1;
//		tong = (n-2) * a / 2;
//		printf ("%d", tong);
//	}
//	else {
//		a = ((n-1) / 2) + 1;
//		tong = (n-1) * a /2;
//		printf ("%d", tong);
//	}
//}
//else printf ("tinh tong so am nhu nao a");
//	return 0;
//}

/* bai 9 buoi 1 */

//#include <stdio.h>
//int main ()
//{
//	int n, t;
//	printf ("Nhap so n:"); scanf ("%d", &n);
//	if (n<5) printf ("khong co gia tri");
//		else {
//		t = n/5;
//		printf ("tong la: %d", (t+1)*5*t/2);
//	}
//	return 0;
//}
/* bai 10 buoi 1 */
//#include <stdio.h>
//int main ()
//{
//	int i, n;
//	printf("nhap n:");
//	scanf ("%d", &n);
//	if (n > 1){
//	i = (n-1)*3+1; 
//	printf ("%d", (i+1)*n/2);
//}
//	else printf ("Khong co gia tri");
//	return 0;
//}

/* bai 11 buoi 1 */
//#include <stdio.h>
//int main ()
//{
//	int a, b;
//	scanf ("%d%d", &a, &b);
//	printf ("\n%d", a+b);
//	printf ("\n%d", a-b);
//	printf ("\n%d", a*b);
//	{
//	float thuong = (float) a / b; 
//	if (b == 0) printf ("Khong hop le");
//	else {
//	printf ("\n%.2f", thuong);
//	}
//}
//	return 0;
//}

/*bai 12 buoi 1*/
//#include <stdio.h>
//int main ()
//{
//	int a, b, c, max, min;
//	scanf ("%d%d%d", &a,&b,&c);
//	max = a;
//	min = a;
//	if (b>=max) max = b;
//	if (c>=max) max = c;
//	if (b<= min) min = b;
//	if (c<= min) min = c;
//	printf ("%d\n%d", max, min);
//	return 0;
//}

/*bai 13 buoi1 */
//#include <stdio.h>
//int main ()
//{
//	long long n;
//	scanf ("%lld", &n);
//	if (n % 3 ==0 && n%10 ==0){
//		printf ("1");
//	}
//	else printf ("0");
//	return 0;
//}

/*bai 14 buoi 1 */
//#include <stdio.h>
//int main ()
//{
//	int a, b, c;
//	scanf ("%d%d%d", &a, &b, &c);
//	if (a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
//{
//	if (a==b && b==c) printf ("1");
//	else if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
//		printf ("3");
//	}
//	else if (a==b || b==c || a==c){
//		if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) printf ("4");
//		else printf ("2");
//	}
//	else printf ("5");
//	
//}
//	else printf ("0");
//	return 0;
//}

/* bai 1 character */

//#include <stdio.h>
//int main (){
//	char n;
//	scanf ("%c", &n);
//	if (n>='A' && n<='Z') printf ("Uppercase");
//	else if (n>='a' && n<='z') printf ("Lowercase");
//	else printf ("0");
//	return 0;
//}

/*bai 2 character */
//#include <stdio.h>
//int main()
//{
//	char n;
//	scanf ("%c", &n);
//	if (n>= 65 && n <= 90){
//		printf ("%c", n+32);
//	}
//	else if (n>=97 && n<=122){
//		printf ("%c", n-32);
//	}
//	else printf ("0");
//	return 0;
//}
/*bai 3 character */
//#include <stdio.h>
//int main ()
//{
//	char n;
//	scanf ("%c", &n);
//	if (n>= 48 && n<=57) printf ("yes");
//	else printf ("no");
//	return 0;
//}

/*bai 4 character */
//#include <stdio.h>
//int main ()
//{
//	char n;
//	scanf ("%c", &n);
//	if ('a'<=n && n < 'h') printf ("front");
//	if ('h'< n && n <= 'z') printf ("back");
//	return 0;
//}


/* bai 5 character */

//#include <stdio.h>
//int main ()
//{
//	char n;
//	scanf ("%c", &n);
//	if (n>=65 && n<90){
//		printf ("%c", n+33);
//	}
//	else if (n>=97 && n<122){
//		printf ("%c", n+1);
//	}
//	else if (n==90 || n==122){
//		printf ("a");
//	}
//	else printf ("khong co gia tri");
//	return 0;
//}

/*bai 6 character */
//#include <stdio.h>
//int main ()
//{
//	char n;
//	scanf ("%c", &n);
//	if (n>='a' && n<='z'){
//		printf ("%c %c", n, n-32);
//	}
//	else if (n>='A' && n<= 'z'){
//		printf ("%c %c", n, n+32);
//	}
//	else printf ("khong co gia tri");
//	return 0;
//}
/*bai 7 character */

//#include <stdio.h>
//int main ()
//{
//	char n;
//	scanf ("%c", &n);
//	if ('0'<= n && n<= '9'){
//		printf ("Digit");
//	}
//	else if (n>= 'A' && n<= 'Z' || n>= 'a'&& n<= 'z'){
//		printf ("Alpha");
//	}
//	else printf ("Special");
//	return 0;
//}

/* bai 8 character */
//#include <stdio.h>
//int main ()
//{
//	char n;
//	scanf ("%c", &n);
//	if ('0'<= n && n<= '5') {
//		printf ("smaller");
//	}
//	else if ('5' <= n && n<= '9'){
//		printf("greater");
//	}
//	else printf ("invalid number");
//	return 0;
//}

/*bai 472A nang cao*/
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf ("%d", &n);
//	if (n%2==0){
//		printf ("%d %d", 4, n-4);
//	}
//	else {
//		printf("%d %d", 9, n-9);
//	}
//	return 0;
//}

/*bai617 A nang vao */
//#include <stdio.h>
//int main (){
//	int n;
//	scanf ("%d", &n);
//	if (n%5==0){
//		printf ("%d", n/5);
//	}
//	else printf ("%d", (n/5)+1);
//	return 0;
//}

/*bai .. nangcao*/
//#include <stdio.h>
//int main(){
//	int a,b,min;
//	scanf ("%d %d", &a,&b);
//	min = a;
//	if (b > min) {
//		printf ("%d %d", min, (b-min)/2);
//	}
//	else printf ("%d %d", b, min/2);
//	return 0;
//}

/*bai 4*/
//#include <stdio.h>
//int main (){
//	int n;
//	scanf("%d",&n);
//	switch(n){
//		case (1):
//			printf ("Chu nhat");
//			break;
//		case (2):
//			printf("Thu hai");
//			break;
//		case (3):
//			printf ("Thu ba");
//			break;
//		case (4):
//			printf ("Thu tu");
//			break;
//		case (5):
//			printf ("Thu nam");
//			break;
//		case (6):
//			printf ("Thu sau");
//			break;
//		case (7):
//			printf ("Thu bay");
//			break;
//		default:
//			printf ("Du lieu khong hop le");
//	}
//	return 0;
//}

/*bai 6*/
//#include <stdio.h>
//int main (){
//	int m, y;
//	scanf ("%d %d", &m, &y);
//	switch(m){
//		case (1): case(3): case (5): case(7): case (8): case(10): case(12): {
//			printf ("31");
//			break;
//		}
//		case (4): case (6): case (9): case (11):{
//			printf ("30");
//			break;
//		}
//		case (2):{
//			if (y%4==0 && y%100!=0 || y%400==0) printf ("29");
//			else printf ("28");
//			break;
//		}
//		default:{
//			printf("du lieu khong hop le");
//			break;
//		}
//	}
//	return 0;
//}


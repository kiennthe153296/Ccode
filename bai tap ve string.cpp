//tinh do dai chuoi*********************************************************************
//#include<stdio.h>
//#include<string.h>
//main () {
//	char id[31];
//	printf("input: ");
//	gets(id);
//	printf("%d", strlen(id));
//}
//in ra ten tieng viet va tieng anh***************************************************
//#include<stdio.h>
//#include<string.h>
//main() {
//	char ten[10],dem[10],ho[10];
//	char tv[100],ta[100];
//	printf("nhap ho: ");
//	gets(ho);
//	printf("nhap ten dem: ");
//	gets(dem);
//	printf("nhap ten: ");
//	gets(ten);
//	strcpy(tv,ho);
//	strcat(tv," ");
//	strcat(tv,dem);
//	strcat(tv," ");
//	strcat(tv,ten);
//	printf("ten tieng viet la: %s", tv);
//	strcpy(ta,ten);
//	strcat(ta," ");
//	strcat(ta,ho);
//	strcat(ta," ");
//	strcat(ta,dem);
//	printf("\nten tieng anh la: %s",ta);
//}
//so sanh chuoi*******************************************************************************
//#include<stdio.h>
//#include<string.h>
//main() {
//	char s[100],t[100];
//	printf("nhap chuoi 1: ");
//	gets(s);
//	printf("nhap chuoi 2: ");
//	gets(t);
//	printf("%d",strcmp(s,t));
//}
//sap xep ten 4 nguoi theo thu tu************************************************************
//#include<stdio.h>
//#include<string.h>
//int main() {
//char s[4][20], t[31];
//int i,j;
//for(i=0;i<4;i++) {
//	scanf("%s", s[i]);
//}
//for(i=0;i<4;i++) {
//	for(j=0;j<4;j++) {
//		if(strcmp(s[j-1],s[j])>0) {
//			strcpy(t,s[j-1]);
//			strcpy(s[j-1],s[j]);
//			strcpy(s[j],t);
//		}
//	}
//}
//for(i=0;i<4;i++) {
//	printf("%s ", s[i]);
//}
//}
//dem tan suat xuat hien cac ky tu trong chuoi, co phan biet chu hoa chu thuong*************
//#include<stdio.h>
//#include<string.h>
//int main() {
//	int a[200],i,n;
//	char s[200];
//	printf("Enter string: ");
//	gets(s);
//	for(n=0;n<200;n++) a[n]=0;
//	for(i=0;i<strlen(s);i++) {
//		a[s[i]]++;
//	}
//	for(i=0;i<200;i++) {
//		if(i==" ") continue;
//		if(a[i]>0) printf("[%c]: %d lan\n",i,a[i]);
//	}
//}
//thay the chuoi s1 lap lai lan 2 bang chuoi s2
#include<stdio.h>
#include<string.h>
int 

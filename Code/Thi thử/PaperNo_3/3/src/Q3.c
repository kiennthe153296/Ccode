#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[4][20],t[20];
  int i,j;
for(i=0;i<4;i++){
	scanf("%s",s[i]);
}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

for(i=1;i<4;i++){
	for(j=1;j<4;j++){
		if(strcmp(s[j-1],s[j])>0){
			strcpy(t,s[j-1]);
			strcpy(s[j-1],s[j]);
			strcpy(s[j],t);
		}
	}
}

for(i=0;i<4;i++){
	printf("%s ",s[i]);
}

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

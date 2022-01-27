#include <stdio.h>

void testword(char wordd[100]){
	int idx = 0;
	for(idx= 0; wordd[idx] != '\0'; idx++) {
	}
	int len = idx-1;
	int len1 = len;
	int idx1 = 0;
	int found=0;
	int index=0;
	
	
	for (idx1=0,len1=len; idx1<len1 || idx1!=idx; idx1++,len1--){	
		if (wordd[idx1]!=wordd[len1]){
			printf("\t%c", wordd[idx1]);
			//index=index+1;
			printf("%d\t", idx1);
		}else{
			found = found +1;
		}
	}
	if (found==idx){
		printf("\n\tPalindrome\n");
	}
	else{
		printf("\n\n\tNot a palindrome\n");
	}
}


int main (){
	int idx,i;
	char word [100];
	printf ("enter word:\n");
	scanf ("%s", word);
	testword(word);	
}

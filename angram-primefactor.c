#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void alternatingcase(){ //function for alternating case
	system("cls");   //clearing the previous background
	char word[20];
	int i,z;
	puts("Enter a word: ");    //asking for sting
	scanf(" %[^\n]s",word); 
	int len=strlen(word);     //length of string

	for(i=0, z=0; z<len; i++, z++){
		int mod=(i%2)? 0:1;
		if(isalpha(word[z])){  //cheking if the given string is a letter
			if(mod==1)printf("%c", toupper(word[z]));   //converting letter to lower case letter
			else printf("%c", tolower(word[z]));	   //converting letter to lower case letter
		}
		else i++;   //if not a letter then it will proceed to the next index
	}
}
void convow(){
	system("cls");  //clearing the previous background
	char word[20];
	int i=0,z,c=0, digit=0;
	puts("Enter a word: ");    //asking for a string
	scanf(" %[^\n]s",word);
	int len=strlen(word);

	for(z=0; z<len; z++){
		if(isalpha(word[z]))  //if it is a letter proceed to ask if it is a consonant or vowel
		{
			if(word[z]=='a' || word[z]=='e'|| word[z]=='i'|| word[z]=='o'|| word[z]=='u'){  
			printf("Index: %d Vowel: %c ", z,word[z]);  //printf if vowel together with its index
			i++;   //iterating vowels
		}else if(word[z]==' ')z++;   //if space then proceed to next letter
		else{
			printf("Index: %d Consonant: %c ",z, word[z]); //print if consonant together with its index
			c++; //iterating consonants
		}	
		}else digit++; //if given with symbols or digit then there will be an iteration process too 
		
	}
	printf("\n\nVowels: %d\nConsonants: %d\nOther Symbols: %d", i, c, digit);  //printing the all the gathered values in an iteration
}
int power(){
	system("cls");
	char x[100], y[100], z[100];
	int xa;	
	do{
		puts("Enter x num: ");  //asking digits. ASSUME THAT IT IS A NON-NEGATIVE VALUE.
		scanf(" %99[^\n]s",x);
		xa=atoi(x);	
	}while(xa==0);  //if the given one is a character then it will loop again to ask you the right input
	
	int ya;		
	do{
		puts("Enter y num: "); //asking digits. ASSUME THAT IT IS A NON-NEGATIVE VALUE.
		scanf(" %99[^\n]s",y);  //if the given one is a character then it will loop again to ask you the right input
		ya=atoi(y);	
	}while(ya==0);
	
	int za;		
	do{
		puts("Enter z num: "); //asking digits. ASSUME THAT IT IS A NON-NEGATIVE VALUE.
		scanf(" %99[^\n]s",z); //if the given one is a character then it will loop again to ask you the right input
		za=atoi(z);	
	}while(za==0);

	long long int res1=pow(ya,za);  //using the math function (power). we were able to get the value and put the result of y^zto res1
	long long int res2=pow(xa,res1); //using the math function (power). we were able to get the value and put the result of x^res1 to res2
	printf("\nResult is: %lld", res2);	 //printing the answers
}

int checkAnagram(char a[], char b[])
{
    int freq1[256] = {0}, freq2[256] = {0};
    int i;
    
    int len1=strlen(a);
    int len2=strlen(b);
    
    for(i=0; a[i]!='\0' || b[i]!='\0'; i++){  
    	a[i]=tolower(a[i]);   //coverting the given values to tolower
    	b[i]=tolower(b[i]);  //converting the given values to lower
    	if(!(isalpha(a[i]) || isalpha(b[i])))  //asking if the vales given is a letter if not then it will return 2
		{
			return 2;
		}
	}    
    if(len1 == len2)   //if they have the same length
    {	
        for(i= 0; a[i] != '\0'; i++) freq1[a[i]]++; //computng the frequency of the first string
    	
    	for(i = 0; b[i] != '\0'; i++) freq2[b[i]]++; //computing the frequency of the seconfd string
 
    	for(i = 0; i < 256; i++)
    	{
        	if(freq1[i] != freq2[i])  //comparing the frequency of the two. if they are not the same then it will return 0
            	return 0;
    	}
    }else return 0; // if they are not the same then it will return 0
   
    return 1; //if after all the process the return value havent been equal to zero then it will return 1
}
int palindrome(){
	system("cls");
	int i;
	char word[100];
	printf ("Enter word:\n");  //asking for a string
	scanf(" %[^\n]s",word);
	
	int idx = 0;
	for(idx= 0; word[idx] != '\0'; idx++) {
		if(!isalpha(word[idx]))  //if the given string contains a number or is not a letter then it is invalid and will result to exiting the file
		{
			printf("Not valid input");
			return 0;
		}
	}		
	int len = idx-1;
	int len1 = len;
	int idx1 = 0;
	int found=0;
	int index=0;
	for (idx1=0,len1=len; idx1<len1 || idx1!=idx; idx1++,len1--){
		
		word[idx1]=tolower(word[idx1]);  //converting the string to lower
		word[len1]=tolower(word[len1]); 
			
		if (word[idx1]!=word[len1]){ //comparing first letter to the last letter. vice versa. if they are not the same then,
			printf("(1)Letter: %c (2)Letter: %c Index: %d\n", word[idx1], word[len1], idx1); //print the index and the letter which they are not the same
		}else found = found +1;  //if they are the same, iteriate the varible found
	}
	if (found==idx)	printf("Palindrome\n");	  //if the varibale found have the same value sa length sa string then it is a palindrome
	else printf("Not a palindrome\n");	//else they are not
}
int primefac(){
	system("cls");
	int prime, i, j, num;
	char nums[100];
	
	do{
		puts("Enter num: ");
		scanf(" %99[^\n]s",nums);    //asking for a number. if it is not, then it will ask again
		num=atoi(nums);	
	}while(num==0);
	
	printf("Prime Factor of %d: ", num);
	if(num==1) printf("%d", num);  // if teh input is 1 then print 1
	for(i=2; i<=num; i++)
	{
		if(num%i==0){  //if the number is divisible by i and so on
			prime=1;   //flag: make teh variable prime as 1
			for(j=2; j<=i/2; j++)//dividing i by 2 and that will be the length of j
			{
				if(i%j==0)  //if the number is divisble by j then,
				{
					prime=0; //make the falg: prime as 0 and then break. end of the loop of j. 
					break;
				}
			}		
			if(prime==1) printf("%d, ", i); //if prime is 1 it will print all the prime values that is computed and genearted by the loop
		}
	}
}
int main(){
	mainhome:  //mainhome
	system("cls");
	puts("\n\t\t\t1.Menu\n");
	puts("\t\t\t2.Exit\n");
	char num[100];
	int nums;	
	do{
		puts("Enter num: ");
		scanf(" %99[^\n]s",num);  //while the input is a character then it it will cotinuously ask the user to input a number
		nums=atoi(num);	
	}while(nums==0);
	
	if(nums==1)goto menu;  //if the input is 1 then it will goto the menu
	else if(nums==2)goto exit; //if the input is 2 then it will exit
	else printf("Not under the choices."); //if the input is not within the ask values it will exit

	exit:
		system("cls");
		puts("You exited");  //exiting the files
		return 0;
	menu:	
	system("cls");
	puts("\n1. Alternating Case");  //choices
	puts("\n2. Vowel Counter and Consonant Counter");
	puts("\n3. Power");
	puts("\n4. Anagram  and Palindrome");
	puts("\n5. Prime Factorization");
	puts("\n6. Exit");
	char num1[100];
	int tcases;	
	do{
		puts("\nEnter what case you want: ");  //asking the user to input their desired choices from the above  
		scanf(" %99[^\n]s",num1);   //scanning it. if it a character then it will ask again to input the right answer.
		tcases=atoi(num1);	
	}while(tcases==0);
	
	switch(tcases){
		case 1:
			system("cls");
			alternatingcase();  //calling the function alternating case 
			break;
		case 2:
			convow(); //calling the function for consonant and vowel
			break;
		case 3:
			power(); //calling the function for power
			break;
		case 4:
			case4:
			system("cls");
			puts("\n1. Anagram"); //choices
			puts("\n2. Palindrome");
			puts("\n3. Go back");
			
			char num[100];
			int i;	
			do{
				puts("Enter num: "); //asking the user to input their desired choices from the above  
				scanf(" %99[^\n]s",num);  //scanning it. if it a character then it will ask again to input the right answer.
				i=atoi(num);	
			}while(i==0);	
			if(i==1) //if the choices is 1 then it is angram
			{
				system("cls");
				char str1[100], str2[100];
 				printf("Enter word 1: ");  //asking for a string 1
    			scanf(" %[^\n]s",str1);
    			printf("Enter word 2: "); //asking for a string 2
    			scanf(" %[^\n]s",str2);
   				if(checkAnagram(str1, str2)==1) puts("\nAnagram");  //if the return value from the function is 1 then print anagram
    			else if (checkAnagram(str1, str2)==2) puts("Invalid Input"); //if the return value from the function is 2 then is an invalid input
				else puts("\nNot anagram"); //if the return value is 0 then it is not anagram
			}
			else if(i==2) palindrome(); //if the number 2 is their choice then it call the function palindrome
			else if(i==3) goto mainhome; //if it is number 3 then it will go back to the mainhome
			else {printf("Not under the choices."); return 0;} // if the given digit is not under the choices the it will exit
			break;
		case 5:
			primefac(); //calling the prime factorization function
			break;
			
		case 6:
			goto exit;  //if they choose 6 then the program will exit
			break;
		default:
			printf("Not under the choices."); //if the given digit is not under the choices then it will exit
			break;
	}
	return 0;
}
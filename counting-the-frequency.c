#include <stdio.h>

//ask 10 numbers. store it in array.
//asked numbers are divided to know pila sya ka digits. /10;
//the gathered digits will be put in an another array that will add up all the same digits.

int main()
{
 	int array[10];
 	int i,temp,c;
 	int freq[11]={0,0,0,0,0,0,0,0,0,0,0};
 	printf("Enter 10 numbers: \n");
 	for(i=0; i<10; i++)
 	{
 		scanf("%d", &array[i]);
 		temp=array[i];
 		c=0;
 		while(temp>0)
 		{
 			temp=temp/10;
			 c++;	
		}
		freq[c]++;
	}
	for(i=0; i<11; i++)
	{
		printf("%i", freq[i]);
	}
}

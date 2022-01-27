#include <stdio.h>
//initilizing strorages for a
//initilizing storages for b
//initilizing storages for c.
//asking for numbers to what extent nga fibonnaci ag kuhaon
//starting up the addition of elements
//n1 will be stored to array 1
//n2 will be stored to array 2
//n3 will be stored to array 3

int main()
{
	int array_a[1000];
	int array_b[1000];
	int array_c[1000];
	int a,tr,b,c,num;
	int n1=0,n2=1,sum, it,ia,carry=0,x;
	
	printf("Enter number: ");
	scanf("%d",&num);
	for(a=999; a>=0; a--)  //initilizing
		{
			array_a[a]=0;
			array_a[999]=n1;
			array_b[a]=0;
 			array_b[999]=n2;
		}
				
	for( x=0; x<num; x++) //ipasulod si n1 ni arraya
		{
		for(ia=999; ia>=0; ia--)
		{	
		sum=array_a[ia]+array_b[ia]+carry;
		carry=0;	
		if(sum>9)
			{
			array_c[ia]=sum%10;
			carry=sum/10;
			}
			
		array_a[ia]=array_b[ia];
		array_b[ia]=array_c[ia];
		}
		}
		
	for(c=999; c>=0; c--)
		{
		if(array_c[c]!=0)
			{
				printf("%i", array_c[c]);
			}
		}

		
}

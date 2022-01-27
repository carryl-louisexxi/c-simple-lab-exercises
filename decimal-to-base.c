#include <stdio.h>

int execution(int a, int b); //function prototype

int main()
{
	int n1,n2; //declaring numbers
	printf("Enter two numbers: "); //asking for numbers
	scanf("%d %d", &n1,&n2); //initializing numbers
	execution(n1,n2); //calling function
		
}

int execution(int a, int b)
{
	int bin[5];
	int i,x,binn,c;
	
	for(i=4; i>0; i--)  //dapat mag iteriate og zero una para ag wala magamit kay mo equal ra sa zero
	{
		bin[i]=0;
	}
	for(x=4; x>0;x--)   //mag process nata sa values sa binary
	{
		binn=a%b;   //answers 1 or 0
		a=a/b;      //divide the decimal number from the base number that is ask
		bin[x]=binn;   //gisulod sa array na bin ag answer ni binn
	//	printf("%i", bin[x]);
	}
	for(c=1; c<5; c++){ //para ma baliktad
		printf("%i", bin[c]);
	}
}

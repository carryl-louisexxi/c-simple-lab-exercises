#include<stdio.h>

int result1(int b, int e){
	int result=1;
	for(e; e>0; e--){
		result*=b;
	}	
	return result;
}

int result2(int a, int b){
	int resultt=1;
	for(b; b>0; b--){
		resultt*=a;
	}	
	return resultt;
}
int main(){
	int x;
	printf("Enter x: ");
	scanf("%d", &x);
	
	int y;
	printf("Enter y: ");
	scanf("%d", &y);
	
	int z;
	printf("Enter z: ");
	scanf("%d", &z);
	
	int x_exponent= result1(y, z);
	
	printf("%d", result2(x, x_exponent));
	
}

#include<stdio.h>

void fibonacci(int a){
	int i , e1 = 1 , e2 = 1  , g ;
	
	for(i = 0 ; i < a ; i++)
	{
		printf("%5.d\n",e1);
		/*
		e2 -> e1 +e2
		e1 -> e2                  istedigim sey bu.
		*/
		g = e2 ;
		e2 = e1 + e2 ;
		e1 = g ;
		
		
	}
	
}



int main () {
	// fibonacci sayi dizisinin ilk 20 elemanini hesaplayip bir diziye yerleþtiren fonksiyon.
	
	fibonacci(20);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}

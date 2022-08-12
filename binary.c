#include <stdio.h>
void binary_fonc(int number) /*Checking the maximum bit of 0 in the in coming number*/
{
	int bit = 0 ,counter = 0 , last_bit = 0 , max_bit = 0; /* Creating new flag*/
	
	while(number>0){ /*loop*/
		
		bit = number % 2; /*The mode of the incoming number is taken and written as a bit*/
		printf("%d",bit); /*Taking bit*/
		number = number / 2; /* Divide the entered number by 2*/
		
		if( bit == 0 ) /* Ýf bit is zero*/
		{
			counter++; /*Increase counter*/
		}
		else if(bit == 1) /*Ýf bit is one*/
		{
			counter=0;	/*Clear counter*/
		}
		
		if(counter >= max_bit) /*Check if we have max counter*/
		{
			max_bit = counter;	/*Assign new max counter*/
		}
           
		
	}
	printf("\nmax zero = %d\n",max_bit); /* Printing the max 0 bit in*/
}

int main()
{
	int number; /*Creat a integer number*/
	while(1)	
	{
		printf("enter a number:"); /*Number input to convert to binary*/
		scanf("%d",&number); /*Taking input*/
		binary_fonc(number); /*Send to function for calculation*/
	}
}

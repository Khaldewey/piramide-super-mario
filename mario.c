#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    int x = get_positive_int();
    for(int i = 0; i < x; i++)
    {
        int k = x - i;
        while(k > 0){
               printf(" ");
              k--;
        }


	    for(int j = 0; j < i + 1; j++)
    	{
         		printf("#");
    	}


    	printf("\n");
    }
}

int get_positive_int(void)
{
     int n;
     do
     {
          n = get_int("Número 1 a 8 \n");
	 }
     while(n < 1 || n > 8);
     return n;
}
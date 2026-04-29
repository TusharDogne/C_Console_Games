#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i , t,j,curp,d,c,sft,player;
		for(i=10;i>0;i--)
	{
		t=i-1;
		if((sft%2)==0)
		{
				c=0;
			for(j=10;j>=1;j--)
			{
			d=(i*j)+(t*c++);
				
				if(curp==d)
					printf("%s\t",player);
				else
				printf("%d\t",d);
		
			}
			sft++;
		}
		else
		{
			c=9;
			for(j=1;j<=10;j++)
			{
			d=(i*j)+(t*c--);
				
				if(curp==d)
					printf("%s\t",player);
				else
					printf("%d\t",d);
			}
		
			
			sft++;
		}
		printf("\n\n");
	}

}

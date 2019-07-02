#include<stdio.h>
#include"QUEUE.h"

int main()
{

	QUEUE q;
	init(&q);
	int val,s,pos;

	while(1)
	{
		printf("\t====================\n");
		printf("\t Choose the Option \n");
		printf("\t====================\n");
		printf("\t  || 1. INSERT  ||\n");
		printf("\t  || 2. DELETE  ||\n");
		printf("\t  || 3. DISPLAY ||\n");
		printf("\t  || 4. CHANGE  ||\n");
		printf("\t  || 5.  EXIT   ||\n");
		printf("\t====================\n");

		scanf("%d",&s);


		switch(s)
		{
			case 1:
				printf("\t\tEnter the value :_");
				scanf("%d",&val);
				insert(&q, val);
				printf("\t\t\t\t\t Inserted value is %d \n",val);
				printf("\t\t\t\t\t =====================\n");
				break;
			case 2:
				val=isdelete(&q);
				printf("\t\t\t\t\t  The Value %d is DELETED \n",val);
				printf("\t\t\t\t\t ========================= \n");
				break;

			case 3:
				display(&q);
				break;

			case 4:
				printf("Enter the position of change value \n");
				scanf("%d",&pos);
				printf("Enter the new value \n");
				scanf("%d",&val);
				change(&q,pos,val);
				break;

			case 5:
				return 0;
		}
	}
}

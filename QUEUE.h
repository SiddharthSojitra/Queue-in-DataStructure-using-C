#define MAX 10

typedef struct
{
	int data[MAX];
	int f,r;
}QUEUE;

void init(QUEUE *q)
{
	q->f=-1;
	q->r=-1;
}

int insert(QUEUE *q,int val)
{
	//val=NULL;
	if(q->r==MAX-1)
		printf("QUEUE IS FULL \n");
	else
	{
		if(q->f==-1 && q->r==-1)
		{
			q->f=0;
			q->r=0;
		}
		else
		{
			q->r++;

		}
		q->data[q->r]=val;
	}
}

int isdelete(QUEUE *q)
{
	int val=NULL;
	if(q->f==-1 && q->r==-1)
		printf("QUEUE IS UNDERFLOW \n");
	else
	{
		val=q->data[q->f];
		if(q->f==q->r)
		{
			q->f=-1;
			q->r=-1;
		}
		else
		{
			q->f++;
		}

	}
	return val;
}

void display(QUEUE *q)
{
	int i;
	if(q->f==-1 && q->r==-1)
		printf("QUEUE IS EMPTY \n");
	else
	{
		printf("\t\t\t =============\n");
		for(i=q->f;i<=q->r;i++)
		{

			printf("\t\t\t >> DATA=%d <<\n",q->data[i]);
		}
		printf("\t\t\t =============\n");
	}
}


void change(QUEUE *q,int pos,int val)
{
//	int val;

	if(q->f==-1 && q->r==-1)
	{
		printf("QUEUE IS EMPTY \n");
	}
	else if(pos>0 && (pos + q->f-1)<=q->r)
		{
			q->data[pos + q->f-1]=val;
		}
		else
		{
			printf("INVALID POSITION \n");
		}
}


int isempty(QUEUE *q)
{
    if(q->r==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

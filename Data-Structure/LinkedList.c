#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


typedef struct singlelink
{
	int data;
	struct singlelink *link;
}NODE;


NODE* header;

void createNode(); // function declaration
void ins_beg();
void ins_end();
void ins_after_a_key_node();
void ins_after_kth_node();
void del_beg();
void del_end();
void del_key_node();
void del_kth_node();
void rev_list();
void display();

int main()
{
   	int option;
	createNode();
	printf("\n Press 1 to insert at beginning \n Press 2 to insert at end \n Press 3 to insert after a key node \n Press 4 to insert after kth node	\n Press 5 to delete from beginning \n Press 6 to delete from end \n Press 7 to delete after a key node \n Press 8 to delete kth node \n Press 9 to reverse the list \n Press 10 to display the list \n Press 0 to exit");
	scanf("%d", &option);
	while(option!=0)
	{
		switch (option)
		{
			case 1:
				ins_beg();
				break;

			case 2:
				ins_end();
				break;

            case 3:
                ins_after_a_key_node();
                break;

            case 4:
               ins_after_kth_node();
               break;

			case 5:
				del_beg();
				break;

			case 6:
				del_end();
				break;

            case 7:
                del_key_node();
                break;

            case 8:
                del_kth_node();

            case 9:
                rev_list();
                break;

			case 10:
				display();
				break;

			default:
				printf("Wrong Choice");
		}

		printf("\n Press 1 to insert at beginning \n Press 2 to insert at end \n Press 3 to insert after a key node \n Press 4 to insert after kth node	\n Press 5 to delete from beginning \n Press 6 to delete from end \n Press 7 to delete after a key node \n Press 8 to delete kth node \n Press 9 to reverse the list \n Press 10 to display the list \n Press 0 to exit");

		scanf("%d", &option);
	}
    	return 0;
}





void createNode()      //this function is to create nodes
{
	int ch;
	//char ch;
	NODE *ptr;
	int i=1;
	ptr=(NODE*)malloc(sizeof(NODE));
	header=ptr;
	if(ptr==NULL)
	printf("\nOut of Memory Space!");
	else
	{
		printf("\nEnter Data for %dth node:",i);
		scanf("%d",&ptr->data);
		ptr->link=NULL;
		i++;
	}
	printf("\n Press 0 to exit or any key to continue");
	//fflush(stdin);
	//ch= getchar();
	scanf("%d", &ch);
	while(ch!=0)
	{
		ptr->link=(NODE *)malloc(sizeof(NODE));
		ptr=ptr->link;
		if(ptr==NULL)
			printf("\nOut of Memory Space!!!");
		else
		{
			printf("\nEnter data for %dth node: ",i);
			scanf("%d",&ptr->data);
			ptr->link=NULL;
			i++;
		}

		printf("\n Press 0 to exit or any key to continue");
	    //fflush(stdin);
		//ch=getchar();
	    scanf("%d", &ch);
	}
}


void display()    // this function is to display the created list
{
	NODE *ptr;
	ptr=header;
	if(ptr==NULL)
	printf("\nNo Node Available");
	else
	{
		printf("\nThe Value of the Nodes are:\n");
		while(ptr!=NULL)
    		{
			printf("%d ->  ",ptr->data);
      			ptr=ptr->link;
    		}
  	}
  	printf("\n\n");
}


void ins_beg()
{
	int ITEM;
	NODE *new;
	new=(NODE*)malloc(sizeof(NODE));
	if(new == NULL)
	      printf ("Overflow");
	else
	{
		printf("Enter the data");
		scanf("%d" ,&ITEM);

		new->data = ITEM;
		new->link = header;
	     	header = new;
		printf("\nNode Inserted at the beginning");
	}

}



void ins_end()
{
	int ITEM;
	NODE *new, *ptr;
	new=(NODE*)malloc(sizeof(NODE));
	if(new == NULL)
      		printf("OVERFLOW");
	else
	{
		printf("Enter the data");
		scanf("%d" ,&ITEM);
     		new->data = ITEM;
     		if(header == NULL)  // Case 1- when no node is present
    		{
            		new -> link= NULL;
            		header = new;
            		printf("\nNode inserted at the end");
    		}
    		else  // Case 2- when nodes exist
    		{
            		ptr= header;
            		while (ptr -> link != NULL)
            		{
                    		ptr = ptr -> link;
            		}
            		ptr->link = new;
            		new->link = NULL;
           		printf("\nNode inserted at the end");
    		}
	}
}


void ins_after_a_key_node()
{
    int KEY,ITEM;
    NODE *new , *ptr;
    new=(NODE*)malloc(sizeof(NODE));

    if(new == NULL)
      		printf("OVERFLOW");
	else
    {
    	printf("Enter the KEY");
		scanf("%d" ,&KEY);

	      ptr= header;
	      while (ptr != NULL)
	      {
	             if(ptr->data!= KEY)
	             {
	             	ptr = ptr-> link;
	             }
	             else
	             {
	             	if(ptr->data == KEY)
	             	{
	             		printf("Enter the data");
				scanf("%d" ,&ITEM);
				new->link = ptr-> link;
				ptr->link = new;
				new->data = ITEM;
				break;
	             	}
	      	     }
	       }
	      if (ptr==NULL)
	     {
	            printf("\nKEY is not present in the List");
	     }

    }
}


void ins_after_kth_node()
{
    int i,k,ITEM;
    NODE *new, *ptr;
    new=(NODE*)malloc(sizeof(NODE));

    if(new == NULL)
	{
	      printf("OVERFLOW");
	}
	else
    {
        printf("Enter the Kth NODE");
		scanf("%d" ,&k);

	printf("Enter the data");
		scanf("%d" ,&ITEM);

		new->data = ITEM;
	      ptr=header;
	      for(i=1; i<k; i++)
            {
	            ptr = ptr->link;
	            if(ptr == NULL)
                {
	                printf("can't insert");
	                return;
                }

            }
	      new ->link = ptr ->link;
	      ptr ->link = new;
	      printf("Node inserted");
    }

}


void del_beg()
{
    NODE *ptr;
    if(header == NULL)
    {
        printf("Underflow");
    }

    else
    {
        ptr = header;
        header = ptr->link;
        free(ptr);
        printf("First Node deleted");

    }
}



void del_end()
{
        NODE *ptr,*ptr1;
    	if(header == NULL)
        {
	      printf("\nlist is empty");
        }
        else
        {
            if(header -> link == NULL)
            {
                header = NULL;
                free(header);
                printf("\nOnly node of the list deleted");
            }
            else
            {
		 ptr = header;
		 while(ptr->link != NULL)
                    {
	                   ptr1 = ptr;
	                   ptr = ptr ->link;
                    }
	            ptr1->link = NULL;
	            free(ptr);
	            printf("\nDeleted Last Node");
            }
	}
}



void del_key_node()
{
    NODE *ptr,*ptr1;
    int KEY;

    if(header == NULL)
	{
	      printf("list is empty");
	}
	else
	{
		printf("Enter The KEY");
		scanf("%d",&KEY);
	        ptr1= header;
	        ptr= header->link;
		if(ptr1->data==KEY)
		{
			header= ptr; 
			free(ptr1); 
		}
		else
		{
	      		while (ptr != NULL)
	       		{	
                		if (ptr->data !=KEY)
                		{
                     			ptr1= ptr;
                     			ptr= ptr -> link;
                		}
                		else
                		{
                      			ptr1->link= ptr->link;
                      			free(ptr);
                      			break;
                		}
	         	}	
                	if(ptr ==NULL)
                	{
                    		printf("\nNode with KEY data does not exist");
                	}
		}
	}

}



void del_kth_node()
{
	NODE *ptr,*ptr1;
    	int i,k;

	ptr=header;
	printf("Enter The Kth NODE");
	scanf("%d",&k);
	
	if(k==1)
	{
		header= ptr->link; 
	}
	else
	{
		for(i=1; i<k; i++)
		{
        		ptr1= ptr;
        		ptr = ptr->link;
        		if(ptr == NULL)
	    		{
	        		printf("there is less element");
	        		return;
	    		}
		}
		ptr1 ->link = ptr ->link;
	}
	free(ptr); 
	printf("Deleted node %d", k);
}


void rev_list()
{
	NODE *prev=NULL, *next= NULL, *current= NULL;
	current= header;
	while (current != NULL)
	{
		next = current->link;
		current->link = prev;
		prev = current;
		current = next;
	}
	header = prev;
	printf("\nList Reversed\n");  

}

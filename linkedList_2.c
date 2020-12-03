
#include <stdio.h>
#include <stdlib.h>

struct linknode{
	int data;
	//linknode* next;
	void* next;
};

static struct linknode *list = NULL;

static struct linknode *create_node (int value){
	
	struct linknode* ptr;
	ptr = (struct linknode*) malloc(sizeof(struct linknode));
	
	if (ptr != NULL){
	ptr -> data = value;
	ptr -> next = NULL;
	}
	return ptr;
	
} 

int insertDataToTail(int value){
	
	struct linknode *nodePtr;
	struct linknode *srchPtr;
	
	// node create
	nodePtr =create_node (value) ;
	
	if (nodePtr ==NULL){
		printf("memory allocationerror!\n");
		return -1;
	}
	
	// find the tail node
	if (list == NULL)
	{
		list = nodePtr;
	}
	else
	{
		srchPtr = list;
		while(srchPtr -> next != NULL)
		{
			srchPtr = (struct linknode*) srchPtr ->next;
		}
		
		srchPtr ->next = nodePtr;
	}
	
}

void print_list(void){
	struct linknode *ptr = list;
	int i;
	
	while(ptr != NULL ){
		printf("%i \n", ptr -> data);
		ptr = (struct linknode*) ptr -> next;
	}

} 

void print_node(int n){
	struct linknode *ptr = list;
	int i=0;
	
	while(ptr != NULL){
		if(i ==n )
		{
    		printf("%i'th data : %i\n ", i, ptr -> data);
			return;	
		}
		i++;
		ptr = ptr -> next;
	}
	
	printf ("no data\n");

} 




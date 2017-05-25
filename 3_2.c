#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	struct NODE *next;
	int data;
} _node;

int i, count = 0;

_node *add(_node *origin, int num){

	//printf("%d", count);

	_node *new = malloc(sizeof(_node));
	
	new->next = origin->next;
	new->data = num;

	origin->next = new;
	
	printf("\nAdded %d\n", num);
	printf("\n");

	return new;
	
}

void print_list(_node *head){

	_node *curr = head->next;
	
	printf("Your List : ");

	while(curr != NULL){
		printf("%d ", curr->data);
		//printf("\n%d ",curr->counting);
		curr = curr->next;
	}

/*
	while (curr != NULL){
		_node *next = curr->next;
		free(curr);
		curr = next;
	}	

	free(head);
*/

	printf("\n\n");
}

_node *del(_node *origin, int userCount){
	
	_node *remove, *temp; 

if(userCount > count){
	printf("\nYou Entered too high number.\n\n");
}

else
{

	if(userCount == 1){
	
		remove = origin->next;
		
		origin->next = remove->next;
	
	}

	else if(userCount == count)
	{
		remove = origin->next;

		for(i=1; i < userCount; i++){

			temp = remove;

			remove = remove->next;
		}

		temp->next = NULL;

		printf("\nDeleted %d\n\n", remove->data);
		count--;
	
		return temp;

	}

	else
	{
		remove = origin->next;

		for(i=1; i < userCount; i++){
			
			temp = remove;

			remove = remove->next;
	
		}

		temp->next = remove->next;
		
	}

	printf("\nDeleted %d\n\n", remove->data);
	count--;
	free(remove);
	
	}
}

void init(_node *head){
	
	_node *curr = head->next;

	while (curr != NULL){
		_node *next = curr->next;
		free(curr);
		curr = next;
	}	

	free(head);
}
	

int main(){

	system("clear");

	int select, input, userCount = 0;
	//printf("%d", sizeof(_node));
	_node *head = malloc(sizeof(_node));
	_node *_new = malloc(sizeof(_node));

	head->next = NULL;

	while(1){
		printf("Linked List Example by LJW\n");
		printf("1. Add\n");
		printf("2. Delete\n");
		printf("3. Print Your List\n");
		printf("4. Exit\n");	
		
		printf("\nSelect Your Process : ");
		scanf("%d", &select);

		switch(select){

			case 1:

				system("clear");
				if(count == 0){

					printf("Input Your Number : ");
					scanf("%d", &input);
					count++;
					_new = add(head, input);
					//printf("%d", count);
					break;

				} 
				else {

					printf("Input Your Number : ");
					scanf("%d", &input);
					count++;
					_new = add(_new, input);
					//printf("%d", count);
					break;

				}

			case 2:
				
				system("clear");

				if(count == 0)
				{

					printf("There's no data in your list\n\n");
					break;

				}
				else {
					printf("Select number index that you want to delete");
					printf("\nIt starts with number 1. : ");
					scanf("%d", &userCount);

					if(userCount == count){

						_new = del(head, userCount);

					}
					else {

						del(head, userCount);

					}
					//printf("%d", count);
					break;

				}

			case 3:

				system("clear");
				print_list(head);
				break;

			case 4:

				init(head);			
				return 0;
		}
	}

}

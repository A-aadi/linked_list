#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

LinkedList createList(void){
	LinkedList list;
	list.first_element = NULL;
	list.last_element = NULL;
	list.number_of_elements = 0;
	return list;
};

int add_to_list(LinkedList *list, void *ele){
	Element *e = (Element *)malloc(sizeof(Element));

	e->value = ele;
	e->next = NULL;
	if(list->first_element == NULL){
		list->first_element = list->last_element = e;
		
	}else{
		list->last_element->next = e;
		list->last_element = e;
	}
	list->number_of_elements += 1;
	return list->number_of_elements;
};

void *get_first_element(LinkedList list){
	return list.first_element;
}


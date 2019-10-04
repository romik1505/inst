#ifndef LIST_H
#define LIST_H

#include "stdlib.h"
#include <iostream>
using namespace std;

typedef struct 	s_list
{
	int			departure_time;		// Время отправки
	int			bus_num;			// Номер автобуса
	float		price;				// Цена билета
	int			departure_date;		// Дата отправки
	s_list		*next;				// Указатель на следующий узел
}				t_list;

t_list			*list_new(t_list *data);

void			print_list_node(t_list node);

void			list_push_back(t_list **head, t_list *new_elem);

void			list_print(t_list **head);

void			list_clear(t_list ***head);

#endif
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};


t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	tmp = lst;
	while(lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;

		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

/*t_list	*add_int(t_list *list, int nb)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	new->data = nb;
	new->next = list;
	return (new);
}

int		ascending(int a, int b)
{
		return (a <= b);
}

int	main(void)
{
	t_list *list;

	list = NULL;
	list = add_int(list, 10);
	list = add_int(list, 9);
	list = add_int(list, 3);
	list = add_int(list, 2);
	list = sort_list(list, &ascending);

	while(list != NULL)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
	
	return (0);
}*/
#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}


t_list	*new(void *data)
{
	t_list *n;

	n = (t_list *)malloc(sizeof(t_list));
	if (n)
	{
		n->data = data;
		n->next = NULL;
	}
	return (n);
}

int main()
{
	t_list *p, *s, *j, *t;

	p = new("One");
	s = new("Two");
	j = new("Three");
	t = new("Four");
	p->next = s;
	s->next = j;
	j->next = t;
	printf("%d\n", ft_list_size(p));
	return 0;
}

/////////////////////////////////////////////////////////////

//autre methode
/*int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		count;

	count = 0;
	list = begin_list;
	if (list)
	{
		while (list)
		{
			count++;
			list = list->next;
		}
	}
	return (count);
}*/
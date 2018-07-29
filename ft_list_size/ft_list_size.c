#include "ft_list.h"

#include "stdlib.h"
t_list	*ft_create_elem(void	*data)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	if (new_elem)
	{
		new_elem->data = data;
		new_elem->next = NULL;
	}
	return (new_elem);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}

int	ft_list_size(t_list *begin_list)
{
	int		i;
	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

#include "stdio.h"
int	main()
{
	int	*data;
	t_list *begin_list = NULL;
	
	ft_list_push_back(&begin_list, 5);
	ft_list_push_back(&begin_list, 6);
	printf("%d\n", ft_list_size(begin_list));
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:53:41 by anamedin          #+#    #+#             */
/*   Updated: 2024/04/30 17:42:14 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//lst: el principio de la lista

typedef struct s_list
{
	void			*content;
	struct s_list	*next;

}					t_list;

int	ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while(lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return(i);

}

void ft_free(t_list **lst)
{
	t_list *tmp;

	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
}

int main(void)
{
	t_list *lista = (t_list *) malloc(sizeof(t_list));
	t_list *node1 = (t_list *) malloc(sizeof(t_list));
	t_list *node2 = (t_list *) malloc(sizeof(t_list));
	t_list *node3 = (t_list *) malloc(sizeof(t_list));
	t_list *node4 = (t_list *) malloc(sizeof(t_list));

	node1->content = "10";
	node1->next = NULL;

	node2->content = "25";
	node2->next = NULL;

	node3->content = "40";
	node3->next = NULL;

	node4->content = "75";
	node4->next = NULL;

	//creamos lista
	lista->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	int size;
	size = ft_lstsize(lista);
	printf("longitud de la lista: %d\n", size);
	ft_free(&lista);
	return(0);
}

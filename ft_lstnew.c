/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:48:59 by anamedin          #+#    #+#             */
/*   Updated: 2024/05/04 20:11:11 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list	*new_nodo;
    
    new_nodo = (t_list*) malloc (sizeof(t_list));
    if (!new_nodo)
        return (NULL);
    new_nodo->content = content;
    new_nodo->next = NULL;
    return (new_nodo);
}

/*int main(void)
{
    t_list *lista = NULL; // Inicializar lista como NULL
    t_list *node1;
    char *content = "helloWorld"; 

    node1 = ft_lstnew(content); 

    // Asignar node1 a lista si lista está vacía
    if (lista == NULL)
        lista = node1;
	int i = 0;
    while (lista != NULL)
    {
        // Imprimir contenido según su tipo
        printf("nodo[%d]: %s\n",i, (char*)lista->content);
        lista = lista->next;
		i++;
    }

    return (0);
}*/

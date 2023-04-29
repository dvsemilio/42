/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:30:20 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/29 12:46:46 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	struct s_list	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("first");
	new = ft_lstnew("second");
	ft_lstadd_back(&lst, new);
	new = ft_lstnew("third");
	ft_lstadd_back(&lst, new);
	
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}

	return (0);
}
Este main crea una lista enlazada con tres nodos, utilizando la función 
`ft_lstnew` para crear cada uno de ellos, y luego agrega dos nodos 
adicionales al final de la lista utilizando la función `ft_lstadd_back`. 
Finalmente, recorre la lista y la imprime por pantalla. 
El resultado debería ser:
first
second
third*/
/*Añade el nodo ’new’ al final de la lista ’lst’.
Este código implementa la función `ft_lstadd_back`, que agrega un nuevo nodo 
al final de una lista enlazada. 
Aquí está el desglose línea por línea:
void	ft_lstadd_back(t_list **lst, t_list *new)
- El código comienza definiendo la función `ft_lstadd_back`, 
que toma dos argumentos: un puntero a un puntero de lista y 
un puntero al nuevo nodo que se agregará.
	struct s_list	*last;
- Crea una variable temporal llamada `last` que se utilizará 
para rastrear el último nodo en la lista.
	if (!*lst)
		*lst = new;
- Si el puntero a la lista es nulo, es decir, si la lista está vacía, 
simplemente asigna el puntero al nuevo nodo, lo que significa que el 
nuevo nodo ahora es la cabeza de la lista.
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
- Si la lista no está vacía, busca el último nodo en la lista 
utilizando la función `ft_lstlast`. Luego, cambia el puntero `next` 
del último nodo para que apunte al nuevo nodo, por lo que el nuevo nodo 
ahora es el último nodo en la lista.*/
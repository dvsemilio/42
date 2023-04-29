/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:29:43 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/29 13:08:36 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	if (lst->next == NULL)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
int main()
{
	t_list *lst = ft_lstnew("first");
	ft_lstadd_back(&lst, ft_lstnew("second"));
	ft_lstadd_back(&lst, ft_lstnew("third"));

	t_list *last = ft_lstlast(lst);
	printf("The last node contains: %s\n", (char *)last->content);

	ft_lstclear(&lst, &free);

	return 0;
}
Este programa crea una lista con tres nodos y luego utiliza la 
función `ft_lstlast` para obtener el último nodo de la lista. 
Finalmente, se imprime el contenido del último nodo en la consola. 
Recuerda que es importante liberar la memoria asignada a la lista 
usando la función `ft_lstclear`.*/

/*Devuelve el último nodo de la lista.
1. `t_list	*ft_lstlast(t_list *lst)` es la definición de una función 
llamada `ft_lstlast`, que toma como argumento un puntero a un nodo de 
lista (`lst`) y devuelve un puntero al último nodo de la lista.
2. La primera línea `if (!lst) return (0);` es una verificación de que 
el argumento `lst` no es nulo. Si es nulo, significa que no hay nodos 
en la lista, por lo que la función devuelve `0` (o `NULL`).
3. La segunda línea `if (lst->next == NULL) return (lst);` verifica si 
el nodo actual (`lst`) es el último de la lista. Si es así, devuelve el 
puntero al nodo actual.
4. Si el nodo actual no es el último de la lista, se entra en el ciclo 
`while`. `while (lst->next)` comprueba si hay un nodo siguiente al nodo 
actual. Si hay un nodo siguiente, el puntero del nodo actual (`lst`) se 
actualiza con el puntero al nodo siguiente (`lst = lst->next;`).
5. El ciclo continúa hasta que se llega al último nodo de la lista 
(es decir, cuando `lst->next` es `NULL`), en cuyo caso la función 
devuelve el puntero al último nodo de la lista (`return (lst)`).
En resumen, la función `ft_lstlast` devuelve el último nodo de una 
lista simplemente enlazada. Si la lista está vacía, devuelve `0` (o `NULL`).*/
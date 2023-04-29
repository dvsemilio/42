/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:33:11 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/29 13:04:44 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst->next)
		{
			f(lst->content);
			lst = lst->next;
		}
		f(lst->content);
	}
}

/*Claro, aquí te dejo un ejemplo de main para la función `ft_lstiter`:

c
#include "libft.h"
#include <stdio.h>

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*tmp;

	lst = ft_lstnew("Hola");
	ft_lstadd_back(&lst, ft_lstnew("Mundo"));
	ft_lstadd_back(&lst, ft_lstnew("de"));
	ft_lstadd_back(&lst, ft_lstnew("la"));
	ft_lstadd_back(&lst, ft_lstnew("Programación"));

	ft_lstiter(lst, print_content);

	while (lst)
	{
		tmp = lst->next;
		ft_lstdelone(lst, free);
		lst = tmp;
	}
	return (0);
}
En este main, primero creamos una lista simple con cinco elementos 
de tipo cadena. Luego, llamamos a la función `ft_lstiter` pasando 
la lista y la función `print_content` que imprime el contenido del nodo.
	// Crear una lista
	lst = ft_lstnew("Hola");
	ft_lstadd_back(&lst, ft_lstnew("Mundo"));
	ft_lstadd_back(&lst, ft_lstnew("de"));
	ft_lstadd_back(&lst, ft_lstnew("la"));
	ft_lstadd_back(&lst, ft_lstnew("Programación"));

	// Iterar sobre la lista e imprimir su contenido
	ft_lstiter(lst, print_content);

	// Eliminar la lista
	while (lst)
Finalmente, eliminamos la lista llamando a `ft_lstdelone` en cada nodo y 
avanzando al siguiente hasta que la lista está vacía.*/
/*Itera la lista ’lst’ y aplica la función ’f’ en elcontenido de cada nodo
1. La función `ft_lstiter` toma como argumentos un puntero al primer nodo 
de una lista y un puntero a una función `f` que toma como argumento un 
puntero genérico `void*` y no devuelve nada.
2. En la primera línea de la función, se verifica si la lista está vacía 
(es decir, si el puntero al primer nodo es nulo). Si es así, la función 
no hace nada y simplemente sale.
3. Si la lista no está vacía, se comienza un ciclo `while` que itera 
a través de todos los nodos de la lista, excepto el último nodo, y 
llama a la función `f` con el contenido de cada nodo.
4. Dentro del ciclo, se llama a la función `f` con el contenido del 
nodo actual utilizando la notación de flecha `->` para acceder al miembro 
`content` del nodo.
5. Luego, se actualiza el puntero al siguiente nodo utilizando la notación 
de flecha `->` para acceder al miembro `next` del nodo.
6. Si la lista tiene un solo nodo, el ciclo `while` no se ejecutará y 
la función simplemente llamará a la función `f` con el contenido del nodo 
final utilizando la misma notación de flecha `->` para acceder al miembro 
`content` del nodo.
7. Una vez que se ha llamado a la función `f` para cada nodo, la función 
`ft_lstiter` termina y no devuelve nada.
En resumen, la función `ft_lstiter` recorre todos los nodos de una lista 
simplemente enlazada y aplica una función dada a cada nodo.*/
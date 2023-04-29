/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:33:56 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/29 13:23:18 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*resl;
	t_list	*first;

	if (!lst)
		return (NULL);
	first = malloc(sizeof(t_list));
	if (!first)
		return (NULL);
	resl = first;
	resl->content = f(lst->content);
	while (lst->next)
	{
		lst = lst->next;
		resl->next = malloc(sizeof(t_list));
		if (!resl->next)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		resl->next->content = f(lst->content);
		resl = resl->next;
	}
	resl->next = NULL;
	return (first);
}

/*
void	*add_one(void *content)
{
	int	*number;

	number = (int *)content;
	(*number)++;
	return (number);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new_lst;
	int		i;

	lst = NULL;
	i = 0;
	while (i < 5)
	{
		ft_lstadd_back(&lst, ft_lstnew(&i));
		i++;
	}
	new_lst = ft_lstmap(lst, &add_one, &del);
	while (new_lst)
	{
		printf("%d ", *(int *)new_lst->content);
		new_lst = new_lst->next;
	}
	ft_lstclear(&lst, &del);
	ft_lstclear(&new_lst, &del);
	return (0);
}
Este programa crea una lista simplemente enlazada con 5 números y 
luego usa la función ft_lstmap para crear una nueva lista que contiene 
los mismos números, pero aumentados en uno. Finalmente, imprime los 
números de la nueva lista y libera la memoria de ambas listas 
usando ft_lstclear.
Este código hace uso de la librería "libft.h" y de la función `ft_lstmap` 
para crear una nueva lista con los valores de la lista original sumados 
en una unidad.
void *add_one(void *content)
{
    int *number;

    number = (int *)content;
    (*number)++;
    return (number);
}
Se define la función `add_one` que recibe como parámetro un puntero a 
`void` y retorna otro puntero a `void`. Esta función convierte el puntero 
a `void` en un puntero a `int`, suma 1 al valor que apunta y retorna 
el mismo puntero.
void del(void *content)
{
    free(content);
}
Se define la función `del` que recibe como parámetro un puntero 
a `void` y libera la memoria a la que apunta.
int main(void)
{
    t_list *lst;
    t_list *new_lst;
    int i;

    lst = NULL;
    i = 0;
    while (i < 5)
    {
        ft_lstadd_back(&lst, ft_lstnew(&i));
        i++;
    }
Se declara la lista `lst` y se inicializa en `NULL`. Se utiliza 
un bucle `while` para crear una lista con los valores del 0 al 4 
utilizando la función `ft_lstadd_back` para agregar 
los elementos a la lista.
new_lst = ft_lstmap(lst, &add_one, &del);
Se llama a la función `ft_lstmap` para crear una nueva lista con 
los valores de la lista original sumados en una unidad, utilizando 
la función `add_one` como parámetro para realizar la operación en 
cada elemento y la función `del` para liberar la memoria de cada elemento.
while (new_lst)
{
    printf("%d ", *(int *)new_lst->content);
    new_lst = new_lst->next;
}
Se utiliza un bucle `while` para recorrer la nueva lista y 
mostrar los valores resultantes de la operación realizada en 
la función `add_one`.
ft_lstclear(&lst, &del);
ft_lstclear(&new_lst, &del);
Se llama a la función `ft_lstclear` para liberar la memoria ocupada 
por las listas `lst` y `new_lst`.
return (0);
Se retorna el valor 0 para indicar que el programa se ha ejecutado correctamente.
*/

/*Itera la lista ’lst’ y aplica la función ’f’ alcontenido de cada nodo. 
Crea una lista resultantede la aplicación correcta y 
sucesiva de la función’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hacefalta.

Este código implementa la función `ft_lstmap`, que toma una lista 
enlazada `lst`, una función `f` y una función `del`. La función 
`f` se usa para aplicar una transformación al contenido de cada 
nodo de la lista y crear una nueva lista. La función `del` 
se utiliza para eliminar el contenido de un nodo si es necesario.
- `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`: 
Esta es la definición de la función `ft_lstmap`, que toma una lista 
enlazada `lst`, una función `f` y una función `del` como argumentos 
y devuelve un puntero a la cabeza de la nueva lista.
- `t_list *resl;`: Se declara un puntero a la estructura `t_list` 
llamado `resl`.
- `t_list *first;`: Se declara otro puntero a la estructura `t_list` 
llamado `first`.
- `if (!lst) return (NULL);`: Si `lst` es `NULL`, la función devuelve 
`NULL` porque no hay nada que mapear.
- `first = malloc(sizeof(t_list));`: Se reserva memoria dinámica para 
un nuevo nodo de la lista enlazada llamado `first`.
- `if (!first) return (NULL);`: Si no se puede reservar memoria para 
`first`, la función devuelve `NULL`.
- `resl = first;`: `resl` se establece en `first`.
- `resl->content = f(lst->content);`: La función `f` se aplica al 
contenido del primer nodo de la lista `lst` y se almacena en el campo 
`content` del nodo `first`.
- `while (lst->next) { ... }`: Se recorre el resto de la lista `lst` 
y se van creando los nuevos nodos de la lista enlazada `first`.
- `lst = lst->next;`: Se avanza al siguiente nodo de la lista `lst`.
- `resl->next = malloc(sizeof(t_list));`: Se reserva memoria dinámica 
para un nuevo nodo de la lista enlazada llamado `resl->next`.
- `if (!resl->next) { ... }`: Si no se puede reservar memoria para 
`resl->next`, se llama a `ft_lstclear` para eliminar la lista creada 
hasta ahora y se devuelve `NULL`.
- `resl->next->content = f(lst->content);`: La función `f` se aplica 
al contenido del nodo actual de `lst` y se almacena en el campo 
`content` del nuevo nodo creado.
- `resl = resl->next;`: `resl` se establece en el nuevo nodo creado.
- `resl->next = NULL;`: Se establece `resl->next` en `NULL`, ya que 
este es el último nodo de la lista.
- `return (first);`: Se devuelve el puntero a la cabeza de la nueva lista.*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:28:40 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/29 12:38:11 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while (lst)
	{
		cnt++;
		lst = lst->next;
	}
	return (cnt);
}

/*int	main(void)
{
	t_list	*list;
	int		size;

	list = ft_lstnew("Hello");
	ft_lstadd_front(&list, ft_lstnew("World"));
	size = ft_lstsize(list);
	printf("The list size is %d\n", size);
	return (0);
}
En este ejemplo, se crea una lista enlazada con dos elementos 
utilizando las funciones ft_lstnew y ft_lstadd_front. Luego, 
se llama a la función ft_lstsize para obtener el tamaño de la 
lista y se imprime por pantalla.*/
/*Cuenta el número de nodos de una lista.
Este código implementa la función `ft_lstsize` que cuenta el número 
de elementos en una lista enlazada. 
1. `#include "libft.h"`: Incluye el archivo de cabecera que contiene 
la definición de la estructura `t_list` y otras funciones de la librería.
2. `int	ft_lstsize(t_list *lst)`: Esta línea define la función 
`ft_lstsize` que toma un puntero a un elemento de lista enlazada y 
devuelve un entero. La función cuenta el número de elementos en la lista.
3. `int	cnt;`: Define la variable `cnt` para contabilizar el número 
de elementos en la lista.
4. `cnt = 0;`: Inicializa el contador en cero.
5. `while (lst)`: Este bucle se ejecuta mientras el puntero a la 
lista no sea nulo, lo que significa que hay más elementos en la lista.
6. `cnt++;`: Incrementa el contador en uno en cada iteración del bucle, 
lo que significa que se ha encontrado un elemento adicional en la lista.
7. `lst = lst->next;`: Avanza al siguiente elemento en la lista.
8. `return (cnt);`: Devuelve el valor final del contador, que es el 
número de elementos en la lista.
En resumen, la función `ft_lstsize` recorre la lista enlazada y cuenta 
el número de elementos que contiene, que se devuelve como un entero.*/
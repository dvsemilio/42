/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:23:44 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/29 12:25:57 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*Añade el nodo ’new’ al principio de la lista ’lst’.
Claro, te explico línea por línea:

1. `#include "libft.h"`: esta línea incluye el archivo de cabecera `libft.h` 
que contiene la declaración de la función `ft_lstadd_front` y otras 
funciones de la librería.
2. `void	ft_lstadd_front(t_list **lst, t_list *new)`: esta línea 
define la función `ft_lstadd_front` que toma como argumentos un puntero 
a puntero a un nodo de tipo `t_list` y un puntero a un nodo de tipo `t_list`. 
Esta función agrega el nodo `new` al frente de la lista `lst`.
3. `new->next = *lst;`: esta línea establece el puntero `next` del nodo 
`new` al valor del puntero `*lst`. Esto significa que el nodo `new` ahora 
apunta al primer elemento de la lista `lst`.
4. `*lst = new;`: esta línea actualiza el puntero `*lst` para que apunte al 
nodo `new`. Esto significa que el nodo `new` ahora es el primer elemento de 
la lista `lst`.
En resumen, la función `ft_lstadd_front` agrega un nuevo nodo al frente de 
la lista especificada, actualizando los punteros para que el nuevo nodo sea 
el primer elemento de la lista.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:31:27 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/29 13:00:17 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*void free_content(void *content)
{
	free(content);
}

int main(void)
{
	t_list *lst = ft_lstnew(strdup("Hello"));
	printf("Before deletion:\n");
	printf("List size: %d\n", ft_lstsize(lst));
	printf("List content: %s\n", (char *)lst->content);

	ft_lstdelone(lst, free_content);

	printf("\nAfter deletion:\n");
	printf("List size: %d\n", ft_lstsize(lst));
	printf("List content: %s\n", (char *)lst->content);

	return (0);
}
En este programa, primero creamos una lista con ft_lstnew y le asignamos 
una cadena "Hello" como contenido. Luego imprimimos el tamaño de la lista 
y su contenido utilizando ft_lstsize y el campo content del nodo. Después, 
eliminamos el nodo con ft_lstdelone y una función de eliminación que libera 
el contenido (en este caso, la cadena "Hello") con free. Finalmente, 
imprimimos el tamaño y el contenido de la lista de nuevo para mostrar 
que el nodo ha sido eliminado.
Sí, se puede hacer sin usar una función auxiliar free_content.
Sin embargo, esto asume que el tipo de dato que se almacena en la 
lista tiene una asignación de memoria dinámica para su contenido y 
puede ser liberado utilizando la función free. Si el tipo de dato 
almacenado no cumple con estas condiciones, tendrás que utilizar una 
función auxiliar para liberar la memoria adecuadamente.*/

/*Toma como parámetro un nodo ’lst’ y libera lamemoria del contenido 
utilizando la función ’del’dada como parámetro, además de liberar el nodo. 
La memoria de ’next’ no debe liberarse.
Este código implementa la función `ft_lstdelone` que elimina un nodo de la 
lista simplemente enlazada. Aquí está el desglose línea por línea:
void	ft_lstdelone(t_list *lst, void (*del)(void *))
Esta función toma dos argumentos: un puntero a la lista y un puntero a 
una función que elimina el contenido del nodo.
del(lst->content);
Esta línea llama a la función de eliminación que se proporciona como 
argumento, y le pasa el contenido del nodo que se eliminará.
free(lst);
Esta línea libera la memoria del nodo que se eliminará.
En resumen, esta función toma un nodo y lo elimina de la lista simplemente 
enlazada, primero eliminando su contenido y luego liberando su memoria.
Para un mejor entendimiento de la función `ft_lstdelone`, es necesario 
entender el funcionamiento de una lista simplemente enlazada.
Una lista simplemente enlazada es una estructura de datos que consiste 
en una secuencia de elementos llamados nodos, donde cada nodo contiene 
un valor y un puntero que apunta al siguiente nodo en la secuencia. 
La lista se puede recorrer partiendo del primer nodo, y siguiendo los 
punteros hasta el último nodo de la lista, que tiene un puntero NULL. 
Cada nodo puede contener cualquier tipo de valor, desde un entero hasta 
un puntero a otra estructura. 
Las operaciones principales en una lista simplemente enlazada son la 
inserción de un nuevo nodo al principio de la lista (push), la eliminación 
de un nodo del principio de la lista (pop), la inserción de un nuevo nodo 
al final de la lista (append), y la eliminación de un nodo en cualquier 
posición de la lista. 
En general, la lista simplemente enlazada es una estructura de datos 
muy útil en programación, ya que permite crear colecciones de datos 
dinámicas, que pueden crecer o disminuir según sea necesario. Además, 
la implementación de una lista simplemente enlazada es relativamente 
sencilla y eficiente en términos de memoria y tiempo de ejecución.*/
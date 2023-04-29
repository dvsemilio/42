/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:32:20 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/29 12:52:32 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = next;
	}
	*lst = NULL;
}

/*int main()
{
    t_list *lst = NULL;
    t_list *node1 = ft_lstnew("Hola");
    t_list *node2 = ft_lstnew("Mundo");
    t_list *node3 = ft_lstnew("!");

    ft_lstadd_back(&lst, node1);
    ft_lstadd_back(&lst, node2);
    ft_lstadd_back(&lst, node3);

    printf("Lista antes de eliminar:\n");
    while (lst)
    {
        printf("%s\n", (char*)lst->content);
        lst = lst->next;
    }

    ft_lstclear(&lst, free);

    printf("\nLista después de eliminar:\n");
    while (lst)
    {
        printf("%s\n", (char*)lst->content);
        lst = lst->next;
    }

    return 0;
}*/
/*Para poder probar la función ft_lstclear, primero necesitamos crear 
una lista enlazada con algunos nodos. Podemos usar la función ft_lstadd_back 
para agregar nodos a la lista y luego llamar a ft_lstclear para eliminar 
todos los nodos.
En el main, primero creamos una lista enlazada con tres nodos (node1, node2 
y node3) y los agregamos a la lista usando ft_lstadd_back.
Luego, imprimimos el contenido de la lista antes de eliminarla. Después, 
llamamos a ft_lstclear para eliminar todos los nodos de la lista y 
finalmente imprimimos el contenido de la lista después de eliminarla.
En cuanto al funcionamiento de la función ft_lstclear:
Primero, se inicializa un puntero llamado next para almacenar el siguiente 
nodo de la lista.
Luego, en un bucle while, se recorre la lista mientras haya nodos 
(*lst != NULL).
En cada iteración, se almacena el siguiente nodo en next, se elimina el 
nodo actual utilizando ft_lstdelone y se mueve lst al siguiente nodo 
(*lst = next).
Finalmente, se establece el puntero lst en NULL para indicar que la lista 
ha sido eliminada por completo.*/
/*Elimina y libera el nodo ’lst’ dado y todos losconsecutivos de ese nodo, 
utilizando la función’del’ y free(3).
Al final, el puntero a la lista debe ser NULL.
Este código implementa la función `ft_lstclear` que se encarga de 
borrar una lista enlazada y liberar la memoria ocupada por sus nodos.
1. `void	ft_lstclear(t_list **lst, void (*del)(void *))`: Se define la 
función `ft_lstclear` que toma como parámetros un puntero a un puntero de 
la lista a borrar y un puntero a una función para liberar el contenido de 
los nodos de la lista.
2. `t_list	*next;`: Se declara una variable temporal `next` de tipo `t_list`.
3. `while (*lst)`: Mientras que el puntero al inicio de la lista no sea nulo, 
se ejecuta el siguiente bloque de código:
4. `next = (*lst)->next;`: Se guarda el puntero al siguiente nodo de la 
lista en la variable temporal `next`.
5. `ft_lstdelone(*lst, del);`: Se utiliza la función `ft_lstdelone` para 
borrar el nodo al que apunta el puntero actual.
6. `(*lst) = next;`: Se actualiza el puntero al inicio de la lista para 
que apunte al siguiente nodo.
7. `*lst = NULL;`: Cuando se ha recorrido toda la lista, se asigna `NULL` 
al puntero al inicio de la lista para indicar que está vacía.
En resumen, la función `ft_lstclear` borra todos los nodos de la lista y 
libera la memoria que ocupaban.*/
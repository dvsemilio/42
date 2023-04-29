/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:11:45 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/29 12:21:50 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
int main()
{
    char *content = "Hello, world!";
    t_list *node = ft_lstnew(content);
    if (node)
    {
        printf("Content of the new node: %s\n", (char *)node->content);
        printf("Next pointer of the new node: %p\n", node->next);
    }
    else
    {
        printf("Failed to create a new node.\n");
    }
    return 0;
}
*/
/*Este main crea un nuevo nodo utilizando ft_lstnew, con el contenido 
"Hello, world!". Luego, imprime el contenido y el puntero siguiente del 
nuevo nodo en la consola. Si la creación del nodo falla, se imprime un 
mensaje de error en su lugar.
2. En la segunda línea se define la función `main()` que devuelve un entero 
(`int`).
int	main(void)
3. Se declara un puntero a una estructura `t_list`.
	t_list *node;
4. Se utiliza la función `ft_lstnew()` para crear un nuevo nodo. 
El parámetro que se le pasa es un puntero a una cadena de caracteres 
`"Hello World!"`.
	node = ft_lstnew("Hello World!");
5. Se comprueba si la variable `node` es nula. Si lo es, 
se muestra un mensaje de error y se devuelve el valor `1`.
	if (node == NULL)
	{
		printf("Error: malloc failed\n");
		return (1);
	}
6. Si el puntero `node` no es nulo, se muestra el contenido del nodo.
	printf("Content of node: %s\n", (char *)node->content);
7. Finalmente, se devuelve el valor `0` para indicar que el 
programa ha finalizado correctamente.
	return (0);*/
/*Crea un nuevo nodo utilizando malloc(3). Lavariable miembro ’content’
se inicializa con elcontenido del parámetro ’content’. 
La variable’next’, con NULL
1. Se incluye el archivo de cabecera "libft.h", donde se definen 
todas las funciones y estructuras de la biblioteca.
2. Se define la función `ft_lstnew`, que crea un nuevo elemento 
para una lista enlazada.
3. Dentro de la función `ft_lstnew`, se declara una variable 
`newlist` del tipo `struct s_list`, que es una estructura definida 
en la biblioteca.
4. Se asigna a `newlist` el resultado de llamar a `malloc` con 
el tamaño de una estructura `s_list`. La función `malloc` asigna 
memoria dinámica para el nuevo elemento de la lista. Si `malloc` 
devuelve NULL, se retorna 0 (o NULL) para indicar que ha habido un error.
5. Se asigna el valor de `content` (el argumento de entrada de la función) 
al miembro `content` del nuevo elemento.
6. Se asigna `NULL` al miembro `next` del nuevo elemento, ya que es 
el último elemento de la lista.
7. Se retorna el nuevo elemento.
En resumen, esta función crea un nuevo elemento para una 
lista enlazada y devuelve un puntero al mismo.
En programación, un nodo es una estructura de datos básica utilizada 
en la construcción de muchas estructuras de datos como listas, árboles, 
grafos y otras. Un nodo generalmente contiene un valor (también llamado 
contenido, dato o carga útil) y un puntero a otro nodo en la estructura 
de datos. La idea es que los nodos se pueden enlazar para formar una 
estructura de datos compleja, donde el valor de cada nodo puede ser 
accesible mediante su puntero correspondiente. En una lista enlazada, 
por ejemplo, cada nodo contiene un valor y un puntero al siguiente nodo 
en la lista.
En el contexto de una estructura de datos como una lista enlazada, un nodo 
es un elemento individual que contiene un valor y un puntero a otro nodo en 
la lista (el siguiente nodo en la secuencia).

En este caso, te están pidiendo que crees un nuevo nodo en la lista 
enlazada utilizando la función malloc() para asignar memoria dinámicamente. 
El valor content del nuevo nodo debe inicializarse con el valor proporcionado 
como argumento a la función, y el puntero next debe inicializarse a NULL, 
ya que este es el último nodo en la lista enlazada.
Aquí, new_node es un puntero a la estructura t_list, que se asigna 
mediante malloc() y se comprueba para asegurarse de que se haya asignado 
correctamente. A continuación, se inicializa el contenido del nodo con 
el valor proporcionado como argumento, y se establece el puntero next en 
NULL, ya que este es el último nodo en la lista enlazada. Finalmente, 
la función devuelve un puntero al nuevo nodo recién creado.*/

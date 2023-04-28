/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:12:24 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/21 17:21:18 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/*int	main(void)
{
	char str[] = "Hello, world!";
	char *res;

	res = (char *)ft_memchr(str, 'o', strlen(str));
	if (res != NULL)
		printf("Caracter encontrado en la posición %ld\n", res - str);
	else
		printf("Caracter no encontrado\n");

	return (0);
	
}
En este main, primero se declara un arreglo de caracteres str 
y se inicializa con la cadena "Hello, world!". Luego, se declara un puntero 
res que se utiliza para almacenar el resultado de la llamada a la función 
ft_memchr.

Se llama a la función ft_memchr pasando como argumentos el arreglo de 
caracteres str, el carácter 'o' y el tamaño de la cadena usando la función
strlen. El resultado de la función se almacena en el puntero res.

Finalmente, se comprueba si el valor devuelto por ft_memchr es diferente
de NULL, lo que indicaría que el carácter buscado fue encontrado en la cadena.
Si es así, se imprime la posición del carácter encontrado. De lo contrario, 
se imprime que el carácter no fue encontrado.
*/

/*
La función `memchr` en C busca la primera aparición de un byte específico dentro
de un bloque de memoria determinado. La función toma como argumentos un puntero
a la memoria a buscar, el byte específico que se busca, y el número de bytes 
que se deben buscar a partir de la posición inicial del puntero.

El prototipo de la función es el siguiente:
void *memchr(const void *s, int c, size_t n);

La función devuelve un puntero al byte encontrado en la memoria o `NULL` 
si no se encuentra el byte. 

Aquí está una explicación paso a paso del comportamiento de la función:

1. Se recibe un puntero a la memoria a buscar `s`, el byte específico que se 
busca `c`, y el número de bytes que se deben buscar a partir de la posición 
inicial del puntero `n`.

2. La función recorre los primeros `n` bytes de la memoria a buscar.

3. Si encuentra el byte `c` dentro de los primeros `n` bytes de la memoria,
devuelve un puntero a ese byte.

4. Si no se encuentra el byte `c`, devuelve un puntero nulo.

En resumen, la función `memchr` se utiliza para buscar un byte específico 
dentro de una memoria determinada y puede ser útil en una variedad de situaciones
de programación, como manipulación de cadenas y búsquedas de datos.

*/
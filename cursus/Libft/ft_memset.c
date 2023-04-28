/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:43:10 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/25 12:45:15 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
int	main(void)
{
	char str[50] = "hello world";

	printf("antes memset: %s\n", str);
	ft_memset(str, 'a', 5);
	printf("luego memset: %s\n", str);

	return (0);
}
*/
/*Este código es una implementación de la función `memset()` en C. 

La función `memset()` establece los primeros `n` bytes del área de memoria 
apuntada por `s` con el valor constante `c`.

El código implementa esta función de la siguiente manera:

- Toma como entrada un puntero `void *b`, que apunta al inicio del área de 
memoria que se va a llenar con el valor `c`.
- Un valor entero `c`, que representa el valor constante que se va a 
utilizar para llenar el área de memoria.
- Un valor entero `len`, que representa el tamaño del área de memoria 
que se va a llenar.
- El código utiliza un bucle `while` para llenar el área de memoria 
especificada por `b` y `len` con el valor constante `c`.
- En cada iteración del bucle, el puntero `b` se incrementa en una 
posición para apuntar a la siguiente posición de memoria en el área de memoria.
- Cuando `len` se reduce a cero, se termina el bucle y la función 
devuelve un puntero a la última posición de memoria establecida.

Sin embargo, hay un error en la implementación, ya que en lugar de 
establecer cada byte del área de memoria a `c`, el código está 
estableciendo el puntero `b` a `c`. La solución a este problema 
es simplemente reemplazar la línea `b = c;` con `*((char*)b) = c;` 
que establece el byte actual de `b` en `c`.*/

/*En este código, hemos cambiado el tipo del segundo argumento 
a int a unsigned char, hemos cambiado el tipo del tercer argumento a 
size_t (el tipo adecuado para tamaños) y hemos modificado el retorno 
para que devuelva el puntero original en lugar de la posición después 
de la última escritura.*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:28:03 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/24 16:19:04 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pd;
	const unsigned char	*ps;

	pd = (unsigned char *) dest;
	ps = (const unsigned char *) src;
	if (pd == ps)
		return (dest);
	if (pd > ps)
	{
		pd += n;
		ps += n;
		while (n--)
			*(--pd) = *(--ps);
	}
	else
	{
		while (n--)
			*(pd++) = *(ps++);
	}
	return (dest);
}

/*int main(void)
{
    char str1[10] = "abcdefghi";
    char str2[10];

    ft_memmove(str2, str1, 5);
    printf("str2: %s\n", str2);

    return 0;
}
*/

/*La función `memmove` en C copia un bloque de memoria desde una ubicación 
de memoria a otra, permitiendo solapamiento entre las dos áreas de memoria. 
Es decir, esta función es similar a `memcpy`, pero con la ventaja de que 
maneja de manera segura la copia de datos entre las dos áreas de memoria 
aunque se superpongan.
En resumen, `memmove` es utilizado para copiar bloques de memoria 
de una ubicación a otra de manera segura, incluso cuando las áreas 
de memoria origen y destino se superponen.*/

/*En este ejemplo, la función ft_memmove recibe tres argumentos: dest, 
que es un puntero al inicio del área de memoria donde se desea copiar 
los datos; src, que es un puntero al inicio del área de memoria desde 
donde se van a copiar los datos; y n, que es el número de bytes que se 
van a copiar.
La función primero convierte los punteros dest y src a punteros a 
unsigned char, para que se puedan manipular los bytes de memoria 
individualmente.
Luego, la función comprueba si dest está en una posición anterior 
a src en la memoria. Si es así, significa que hay riesgo de solapamiento 
entre los datos que se van a copiar y los datos que se van a sobrescribir. 
En este caso, la función copia los datos de forma inversa, comenzando 
por la posición más alta en la memoria y moviéndose hacia abajo.
Si dest está en una posición posterior a src en la memoria, 
la función copia los datos de forma normal, 
comenzando desde la posición más baja y moviéndose hacia arriba.
En el ejemplo de main, se utiliza la función ft_memmove para copiar 
los primeros cinco bytes de la cadena "abcdefghi" a la cadena str2. 
Al imprimir str2, se puede ver que se ha copiado correctamente 
la subcadena "abcde".*/
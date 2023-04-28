/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:18:42 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/25 12:51:22 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *) dest;
	psrc = (const unsigned char *) src;
	while (n-- > 0)
		*pdest++ = *psrc++;
	return (dest);
}

/*int main()
{
    char src[] = "Hello, world!";
    char dest[20];

    ft_memcpy(dest, src, sizeof(src));
    printf("Copied string is %s\n", dest);

    return 0;
}*/

/*La función `memcpy()` de C es utilizada para copiar un bloque de memoria 
de un lugar a otro en la memoria. La función toma tres argumentos: 
un puntero al bloque de memoria de destino, un puntero al bloque de 
memoria de origen y la cantidad de bytes a copiar. 
La función copia la cantidad de bytes especificados desde la 
dirección de origen al área de destino de la memoria. 
Si las áreas de origen y destino se superponen, el comportamiento es 
indefinido, es decir, puede ocurrir cualquier cosa, desde copiar 
incorrectamente los datos hasta causar una falla en el programa. 
Por lo tanto, se debe tener cuidado al utilizar la función `memcpy()` 
y asegurarse de que las áreas de origen y destino no se superpongan.
La función devuelve un puntero al área de destino.*/

/* ft_memcpy toma tres argumentos: el destino, el origen y el número de bytes 
que se deben copiar. En el cuerpo de la función, se crea un puntero a dest y 
un puntero constante a src, que se utilizan para copiar los datos.
En el bucle while, el número de bytes a copiar se reduce en uno en cada 
iteración (n--), y se copia un byte de src a dest (*pdest++ = *psrc++). 
Finalmente, la función devuelve el puntero al destino.
En el main, se define una cadena de origen (src) y un array de destino (dest). 
La función ft_memcpy se llama para copiar src en dest, y luego se imprime 
la cadena copiada en la salida estándar.*/

/*El problema con este código es que no realiza ninguna verificación de 
límites y no comprueba si las áreas de memoria se superponen. 
Si las áreas de memoria de origen y destino se superponen, el 
comportamiento es indefinido y puede llevar a resultados impredecibles 
y peligrosos.
En general, cuando se copian áreas de memoria, es importante asegurarse 
de que no se estén leyendo ni escribiendo áreas de memoria que no se 
supone que se deban afectar. Por lo tanto, es importante usar una 
función segura que verifique la superposición de memoria, como `memmove()`
, en lugar de `memcpy()` en casos donde se copian áreas de memoria que 
podrían solaparse.

Los cambios que se hicieron fueron los siguientes:

Se agregó una verificación para los casos en que los punteros dest 
y src son nulos. Si ambos son nulos, simplemente se retorna un puntero 
nulo, ya que no hay nada que copiar. Si alguno de ellos es nulo, 
la función probablemente causaría una falla de segmentación, ya que 
intentaría acceder a un puntero nulo.
En el ciclo while, se cambió la condición de salida a n-- > 0. 
Esto es porque, en la implementación original, si n era cero al 
inicio de la función, se copiaría un byte antes de salir del ciclo while. 
Con la nueva condición, se realiza la comprobación antes de disminuir n, 
lo que garantiza que no se copiarán bytes adicionales después de que se 
haya copiado todo el contenido de src a dest.
*/

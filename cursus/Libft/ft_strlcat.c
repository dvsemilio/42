/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:55:10 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/24 16:32:57 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len])
		dst_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size <= dst_len)
		return (src_len + size);
	i = 0;
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int main()
{
    char dst[20] = "Hello ";
    char src[] = "world!";
    size_t dst_size = sizeof(dst);
    size_t result;

    result = ft_strlcat(dst, src, dst_size);
    printf("The result is: %s\n", dst);
    printf("The total length is: %zu\n", result);

    return 0;
}
*/

/*La función strlcat en C es similar a la función strncat, 
pero agrega un límite adicional al tamaño del búfer. 
La función toma tres argumentos: un puntero a un búfer de destino, 
un puntero a una cadena fuente y el tamaño del búfer de destino. 
La función agrega la cadena fuente al final del búfer de destino 
y garantiza que el búfer de destino esté siempre nulo-terminado.
Si la cadena fuente es más larga que el espacio restante en el búfer 
de destino, se trunca para que quepa. La función devuelve la longitud 
de la cadena que se habría creado si no hubiera habido una limitación de tamaño.
La función strlcat es útil para evitar errores de desbordamiento 
de búfer en situaciones donde se trabaja con cadenas 
de longitud desconocida.*/

/*El código implementa la función `ft_strlcat`, que concatena dos strings, 
`src` y `dst`, y asegura que el resultado no sobrepase un tamaño máximo 
especificado en `size`.
La función comienza midiendo la longitud del string `dst` usando la función 
`ft_strlen` y la longitud del string `src` usando un contador llamado `src_len`. 
Luego, calcula la longitud total que tendría el string concatenado, 
la cual se almacena en una variable llamada `total_len`.
A continuación, se comprueba si `total_len` es menor que `size`. 
Si es así, el string `src` se concatena con el string `dst` usando 
la función `ft_strncat`, la cual toma como argumentos el string de destino, 
el string de origen y el número de caracteres del string de origen a copiar. 
El número de caracteres que se copia se calcula restando la longitud del 
string `dst` y uno, ya que necesitamos dejar espacio para agregar el caracter 
nulo al final del string.
Si `total_len` es mayor o igual a `size`, entonces no podemos concatenar todo 
el string `src` en `dst`. Así que se copian `size-1` caracteres de `src` 
en `dst`, y se agrega un caracter nulo al final de `dst`.
Por último, la función devuelve `total_len`, que es la longitud total 
del string concatenado (no el tamaño final del string de destino).
*/

/*Este main crea un arreglo dst con espacio para 20 caracteres, 
inicializa su contenido con "Hello " y crea otro arreglo src con la cadena 
"world!". Luego llama a la función ft_strlcat pasando como argumentos dst, 
src y el tamaño de dst. La función concatena la cadena src al final de dst 
y devuelve la longitud total de la cadena resultante.*/
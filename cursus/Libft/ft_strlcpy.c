/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:34:05 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/25 13:21:47 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (strlen(src));
}

/*int main() {
    char dest[20];
    const char *src = "Hola mundo";
    size_t n = 5;

    strlcpy(dest, src, n);

    printf("El destino es: %s\n", dest);
    printf("La c.caracteres copiados es: %zu\n", strlcpy(dest, src, n));

    return 0;
}*/

/*La función `strlcpy` en C se utiliza para copiar una cadena de caracteres 
a otra cadena de caracteres con un tamaño máximo dado, incluyendo el carácter 
nulo de terminación. Si la cadena de origen es más larga que el tamaño máximo 
proporcionado, la función truncará la cadena de origen para que quepa en 
la cadena de destino y agregará un carácter nulo de terminación.
Esta función es similar a `strncpy`, pero tiene una ventaja sobre ella, 
ya que siempre asegura que la cadena de destino esté terminada correctamente. 
También devuelve la longitud de la cadena de origen, lo que es útil en 
algunos casos.
La declaración de la función `strlcpy` es la siguiente:
size_t strlcpy(char *dest, const char *src, size_t size);
Donde:
- `dest` es un puntero al búfer de destino donde se copiará la cadena.
- `src` es un puntero a la cadena de origen que se va a copiar.
- `size` es el tamaño máximo del búfer de destino, 
incluyendo el carácter nulo de terminación.
La función devuelve la longitud de la cadena de origen.*/

/*En este caso, la función strlcpy toma como argumentos un puntero 
al destino (dst), un puntero al origen (src) y un tamaño máximo (size). 
Luego, se copian los caracteres de src a dst hasta que se alcanza el 
tamaño límite (size - 1) o se llega al final de src, y se agrega el 
caracter nulo al final de dst. Finalmente, se retorna la cantidad de 
caracteres que se copiaron.
En el main, se crea un arreglo dest de 20 caracteres y se copian 
los primeros 5 caracteres de src a dest utilizando la función strlcpy. 
Luego, se imprime el contenido de dest y la cantidad de caracteres 
que se copiaron.*/

/*El problema con este código es que no maneja el caso en el que size sea cero. 
En este caso, el código aún intentaría copiar un carácter nulo a la posición 
dst[0], lo que resultaría en un comportamiento indefinido. Además, 
el ciclo while después de la copia en el búfer de destino no es necesario, 
ya que la longitud de la cadena original se puede obtener mediante la variable 
i ya utilizada en la primera parte de la función.
En esta versión, se agrega una verificación adicional al inicio de 
la función para manejar el caso en que size es cero. En ese caso, 
simplemente devuelve la longitud de la cadena de origen. Además, 
se elimina el ciclo while después de la copia en el búfer de destino, 
y simplemente se devuelve la longitud de la cadena de origen al final 
de la función.*/
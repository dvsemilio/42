/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:17:45 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/27 13:33:25 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
	++s1;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		--len;
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1, len + 1);
	return (trimmed);
}

/*int main()
{
    char *s = "   hello world   ";
    char *set = " ";
    char *trimmed = ft_strtrim(s, set);
    
    if (trimmed)
    {
        printf("Original string: '%s'\n", s);
        printf("Trimmed string: '%s'\n", trimmed);
        free(trimmed);
    }
    else
    {
        printf("Error: Memory allocation failed.\n");
    }
    
    return 0;
}*/

/*Este código implementa la función `ft_strtrim`, que toma dos parámetros: 
`s1`, una cadena de caracteres que se recortará, y `set`, una cadena de 
caracteres que contiene los caracteres a recortar. La función elimina todos 
los caracteres de `set` desde el principio y el final de `s1` hasta encontrar 
un caracter que no esté en `set`. La cadena resultante se devuelve con una 
reserva de memoria utilizando `malloc`.
El código comienza con la implementación de la función `ft_strtrim`. 
Primero, la función verifica si `s1` o `set` son nulos y devuelve un 
puntero nulo si lo son. Luego, la función utiliza un bucle `while` 
para eliminar los caracteres de `set` desde el principio de `s1` hasta 
que se encuentre un caracter que no esté en `set`.
Después de esto, la función utiliza otra estructura de bucle `while` 
para eliminar los caracteres de `set` desde el final de `s1` hasta 
que se encuentre un caracter que no esté en `set`. La variable `len` 
se actualiza para contener la nueva longitud de la cadena `s1`.
A continuación, se reserva memoria para una nueva cadena `trimmed` 
utilizando `malloc`, y se comprueba si la reserva de memoria ha sido 
exitosa. Si la reserva de memoria falla, la función devuelve un puntero nulo.
Finalmente, se utiliza la función `ft_strlcpy` para copiar la cadena `
s1` en la nueva cadena `trimmed` con una longitud de `len + 1`. 
La función devuelve la cadena `trimmed`.
En el `main`, se llama a la función `ft_strtrim` para recortar 
la cadena `s` utilizando el conjunto de caracteres `set`. Si se 
ha asignado correctamente memoria para la cadena recortada, se muestra 
la cadena original y la cadena recortada en la salida estándar utilizando 
la función `printf`. La memoria asignada a la cadena recortada se 
libera utilizando `free`. Si la asignación de memoria falla, 
se muestra un mensaje de error en la salida estándar.*/
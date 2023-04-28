/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:04:47 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/27 12:05:16 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		++s_len;
	if (start > s_len)
		return (ft_strdup(""));
	s_len -= start;
	if (len > s_len)
		len = s_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	substr[len] = '\0';
	while (len--)
		substr[len] = s[start + len];
	return (substr);
}

/*
int main(void)
{
    char *str = "Hello, world!";
    char *sub = ft_substr(str, 7, 5);

    printf("Original string: %s\n", str);
    printf("subing: %s\n", sub);

    free(sub);

    return 0;
}
*/
/*Este main crea una cadena de caracteres (str) y llama a la función 
ft_substr para obtener una subcadena que comienza en el índice 7 de 
str y tiene una longitud de 5 caracteres. Luego imprime tanto la 
cadena original como la subcadena y finalmente libera la memoria 
asignada por ft_substr.*/
/*Un índice es un valor numérico que se utiliza para acceder a un 
elemento específico de una lista, matriz o cualquier otra estructura 
de datos que pueda ser indexada. Por ejemplo, en una cadena de caracteres, 
cada carácter se puede acceder a través de su índice correspondiente, 
que es un número entero que representa la posición del carácter dentro 
de la cadena. El primer elemento de una lista o matriz generalmente 
tiene un índice de 0, mientras que el último elemento tiene un índice 
de tamaño-1, donde tamaño es el número total de elementos en la estructura 
de datos.*/
/*La función `ft_substr` toma una cadena `s` y crea una subcadena a partir 
de ella, comenzando en el índice `start` y con una longitud máxima de `len`. 
La función reserva memoria para la subcadena utilizando `malloc` y devuelve 
un puntero a la subcadena resultante.
El prototipo de la función es el siguiente:
char *ft_substr(char const *s, unsigned int start, size_t len);
Los parámetros son:
- `s`: la cadena de la que se desea obtener la subcadena.
- `start`: el índice del primer carácter de la subcadena.
- `len`: la longitud máxima de la subcadena.
El valor de retorno es un puntero a la subcadena resultante o `NULL` 
si falla la reserva de memoria.
La función reserva memoria utilizando `malloc` y luego copia 
la subcadena de `s` a la nueva cadena utilizando `memcpy`. 
Si la longitud de la subcadena es mayor que la longitud de `s` a partir 
del índice `start`, la función crea una subcadena que es más corta 
que la longitud especificada.
Es importante recordar que el usuario es responsable de liberar 
la memoria reservada por `ft_substr` utilizando `free`.*/

/*Este código implementa una función llamada `ft_substr` que toma tres 
argumentos: una cadena `s`, un índice `start` y una longitud `len`. 
La función devuelve una subcadena de `s` que comienza en `start` y 
tiene una longitud máxima de `len`.
`char *ft_substr(char const *s, unsigned int start, size_t len)`: 
Se define la función `ft_substr` que toma tres argumentos: una cadena `s`, 
un índice `start` y una longitud `len`. La función devuelve una cadena `char *`.
`char *substr;`: Se declara un puntero `substr` que será utilizado 
para almacenar la subcadena resultante.
`size_t s_len;`: Se declara una variable `s_len` de tipo `size_t` para 
almacenar la longitud de la cadena `s`.
`if (!s) return (NULL);`: Si la cadena `s` es nula, la función devuelve `NULL`.
`s_len = 0; while (s[s_len]) ++s_len;`: Se utiliza un bucle `while` 
para contar la longitud de la cadena `s` y almacenarla en `s_len`.
`if (start > s_len) return (ft_strdup(""));`: Si el índice `start` 
es mayor que la longitud de la cadena `s`, la función devuelve una 
cadena vacía (una cadena con una longitud de cero) utilizando la 
función auxiliar `ft_strdup`.
`s_len -= start;`: Se resta `start` de `s_len` para obtener 
la longitud de la subcadena que se va a extraer de `s`.
`if (len > s_len) len = s_len;`: Si `len` es mayor que la 
longitud de la subcadena que se va a extraer, se establece `len` 
en la longitud de la subcadena.
`substr = (char *)malloc(sizeof(char) * (len + 1));`: Se utiliza la 
función `malloc` para asignar memoria para `substr`. Se asigna suficiente 
memoria para almacenar la subcadena más el carácter nulo final.
`if (!substr) return (NULL);`: Si no se pudo asignar memoria para 
`substr`, la función devuelve `NULL`.
`substr[len] = '\0';`: Se establece el último carácter de `substr` 
como el carácter nulo final.
`while (len--) substr[len] = s[start + len];`: Se utiliza un bucle 
`while` para copiar los caracteres de la subcadena de `s` a `substr`.
`return (substr);`: La función devuelve la subcadena resultante en `substr`.*/
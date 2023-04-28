/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:30:55 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/27 12:45:52 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = 0;
	while (s1[len1])
		++len1;
	len2 = 0;
	while (s2[len2])
		++len2;
	joined = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!joined)
		return (NULL);
	len1 = 0;
	while (*s1)
		joined[len1++] = *(s1++);
	while (*s2)
		joined[len1++] = *(s2++);
	joined[len1] = '\0';
	return (joined);
}

/*int main()
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *joined = ft_strjoin(s1, s2);
    printf("%s\n", joined);
    free(joined);
    return 0;
}*/

/*:
Este main simplemente une las dos cadenas "Hello, " y "world!" 
utilizando la función ft_strjoin, y luego imprime la cadena resultante 
utilizando printf.
Incluimos las librerías stdlib.h y stddef.h para poder utilizar malloc y size_t.
#include <stdlib.h>
#include <stddef.h>
Declaramos la función ft_strjoin con su prototipo y parámetros especificados 
en las características.
char	*ft_strjoin(char const *s1, char const *s2);
Comenzamos la implementación de la función. Declaramos las variables joined, 
len1 y len2.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len1;
	size_t	len2;
Verificamos que s1 y s2 no sean nulos. Si alguno de ellos es nulo, 
devolvemos nulo.
	if (!s1 || !s2)
		return (NULL);
Inicializamos len1 a cero y utilizamos un bucle while para recorrer s1 
y aumentar len1 hasta que se alcance el final de s1.
	len1 = 0;
	while (s1[len1])
		++len1;
Realizamos la misma operación que en el paso anterior, pero para s2.
	len2 = 0;
	while (s2[len2])
		++len2;
Reservamos memoria para la nueva string joined con malloc. La cantidad 
de memoria que se reserva es len1 + len2 + 1, ya que se deben incluir 
los caracteres de ambas strings más el carácter nulo que se añade al 
final de la string.
	joined = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!joined)
		return (NULL);
Inicializamos len1 a cero nuevamente y utilizamos un bucle while 
para copiar los caracteres de s1 en la nueva string joined. Luego, 
aumentamos len1 y avanzamos el puntero de s1.
	len1 = 0;
	while (*s1)
		joined[len1++] = *(s1++);
Utilizamos el mismo proceso que en el paso anterior para copiar 
los caracteres de s2 en joined, comenzando en la posición len1 
(la última posición copiada de s1) y avanzando el puntero de s2 e
n cada iteración. Al final, añadimos el carácter nulo al final de 
joined y lo devolvemos como resultado.
	while (*s2)
	joined[len1++] = *(s2++);
	joined[len1] = '\0';
	return (joined);
Después de copiar los caracteres de s2 en la nueva string joined, 
agregamos el carácter nulo al final de la string y la retornamos:
// Agregamos el carácter nulo al final de la string
joined[len1 + len2] = '\0';
// Retornamos la nueva string
return (joined);*/
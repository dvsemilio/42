/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:19:40 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/25 16:30:56 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	char	a;

	a = (char)c;
	while (*str != '\0')
	{
		if (*str == a)
			return ((char *)str);
		str++;
	}
	if (a == '\0')
		return ((char *)str);
	return (NULL);
}

/*int main(void)
{
    const char *str = "Hola mundo";
    int c = 'm';
    char *result = ft_strchr(str, c);
    if (result == NULL)
    {
        printf("Caracter no encontrado en la cadena.\n");
        return (EXIT_FAILURE);
    }
    printf("encontrado en la posición %ld: %c\n", result - str, *result);
    return (EXIT_SUCCESS);
}
*/

/*
El problema con este código es que la variable `a` está declarada como 
`char`, lo que significa que solo puede almacenar valores de hasta 127 
en sistemas con signo y 255 en sistemas sin signo. Sin embargo, la función 
`ft_strchr` toma un argumento `int` para el carácter a buscar, 
lo que significa que se pueden pasar valores más grandes. 
Si se pasa un valor mayor que 127 en un sistema con signo, 
se producirá un comportamiento indefinido. 
La solución es declarar `a` como `unsigned char` para que pueda 
almacenar valores de hasta 255 en todos los sistemas.
Los cambios que se han realizado son los siguientes:
Se ha eliminado la variable i y se ha utilizado un puntero *str para 
recorrer la cadena str.
Se ha convertido la variable c en char para evitar comparaciones 
innecesarias con números mayores a 127.
Se ha agregado una condición que revisa si c es el carácter nulo 
para manejar los casos en los que se busca el carácter nulo en la cadena str.*/
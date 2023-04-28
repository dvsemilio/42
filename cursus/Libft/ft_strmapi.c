/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:20:39 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/28 11:30:35 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = ft_strdup(s);
	if (!result)
		return (NULL);
	i = 0;
	while (result[i])
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}

/*int main()
{
    char *s1 = ft_strmapi("Hello", addOne);
    printf("Original: %s\n", "Hello");
    printf("Modified: %s\n", s1);
    free(s1);

    char *s2 = ft_strmapi("", addOne);
    printf("Original: %s\n", "");
    printf("Modified: %s\n", s2);
    free(s2);

    return 0;
}*/
/*En este ejemplo, utilizamos la función ft_strmapi para aplicar 
la función addOne a cada carácter de la cadena "Hello". 
Luego imprimimos la cadena original y la cadena modificada. 
También realizamos una prueba con una cadena vacía para verificar 
que la función pueda manejar casos especiales.
Es importante tener en cuenta que debes liberar la memoria asignada 
a las nuevas cadenas después de su uso, utilizando la función free.
Esta función utiliza la función ft_strdup de libft para duplicar la 
cadena original y así generar una nueva cadena con los resultados de 
aplicar la función f a cada carácter de la cadena original.
La función recorre la cadena con un bucle while en lugar de un bucle for. 
En cada iteración, se llama a la función f pasándole el índice del carácter 
actual y el carácter mismo. Luego, se actualiza la cadena resultante con el 
resultado de la función.
Si ocurre un error en la reserva de memoria o si se proporciona una cadena 
o una función nula, la función devuelve NULL. De lo contrario, devuelve 
la cadena resultante.
Este código implementa la función `ft_strmapi`, que itera sobre una cadena 
`s` y aplica una función `f` a cada carácter de la cadena, devolviendo una 
nueva cadena con el resultado.
La función comienza por comprobar si los parámetros de entrada `s` y `f` 
son válidos (es decir, si no son `NULL`). Si uno de ellos es `NULL`, 
la función devuelve `NULL`.
A continuación, se reserva memoria para la nueva cadena `result` mediante 
la llamada a la función `ft_strdup`, que crea una copia de la cadena `s`. 
Si la reserva de memoria falla, la función también devuelve `NULL`.
A continuación, se itera sobre la nueva cadena `result` utilizando un 
bucle `while` y se aplica la función `f` a cada carácter de la cadena 
mediante la llamada `result[i] = f(i, result[i]);`. La función `f` toma 
dos parámetros: el índice de cada carácter dentro de `s` y el propio carácter. 
El resultado de `f` se almacena en la posición correspondiente de la 
nueva cadena `result`.
Finalmente, la función devuelve la nueva cadena `result` con los cambios 
aplicados por la función `f`.*/
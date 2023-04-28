/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:11:59 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/24 16:44:54 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *cad, const char *sub, size_t len)
{
	size_t	i;

	if (*sub == '\0')
		return ((char *) cad);
	while (*cad && len)
	{
		i = 0;
		while (cad[i] == sub[i] && i < len)
		{
			i++;
			if (sub[i] == '\0')
				return ((char *) cad);
		}
		cad++;
		len--;
	}
	return (NULL);
}

/*
int main()
{
    char str[] = "hello world";
    char sub[] = "wor";
    int len = sizeof(str);

    char *res = ft_strnstr(str, sub, len);
    
    if (res != NULL) {
        printf("'%s' found at position %ld in '%s'\n", sub, res - str, str);
    } else {
        printf("'%s' not found in '%s'\n", sub, str);
    }

    return 0;
}

*/

/*La función `strnstr` en C se utiliza para buscar una subcadena en una cadena 
dada. La función busca la subcadena dentro de la cadena especificada y devuelve 
un puntero a la primera ocurrencia de la subcadena en la cadena. 
A diferencia de la función `strstr`, la función `strnstr` también acepta 
un argumento adicional que especifica el número máximo de caracteres que 
se pueden buscar en la cadena.

La firma de la función `strnstr` es la siguiente:

char *strnstr(const char *cad, const char *su, size_t len);

- `cad`: La cadena donde se buscará la subcadena.

- `sub`: La subcadena a buscar en la cadena `cad`.

- `len`: El número máximo de caracteres que se pueden
buscar en la cadena `cad`.

La función devuelve un puntero a la primera ocurrencia de la subcadena 
en la cadena `cad`, o un puntero nulo si no se encuentra la subcadena.
Es importante tener en cuenta que la función `strnstr` solo se encuentra 
en la biblioteca estándar de C a partir del estándar C99. 
Si se está utilizando una versión anterior del estándar C, 
esta función no estará disponible.
*/

/*
esta función recibe tres argumentos: el puntero al inicio de la cadena 
donde se buscará la subcadena (cad), el puntero a la subcadena a buscar 
(su) y un entero sin signo (len) que indica el número máximo de caracteres 
a buscar en cad.
La función comienza comprobando si la subcadena su está vacía. En ese caso, 
la función devuelve un puntero al inicio de cad.
Después, la función entra en un bucle while que se ejecutará mientras 
queden caracteres por explorar en cad y el número máximo de caracteres 
a buscar en cad no se haya alcanzado.
Dentro de este bucle, se utiliza otro bucle while que se encarga de 
comparar los caracteres de cad y su en cada posición. 
Si los caracteres coinciden y todavía no se ha explorado más de len 
caracteres de cad, se avanza al siguiente carácter y se continúa 
la comparación. Si se ha llegado al final de su (es decir, 
se ha encontrado la subcadena), se devuelve un puntero al inicio 
de la subcadena en cad.
Si no se encuentra la subcadena dentro de los límites especificados, 
la función devuelve NULL.
Es importante destacar que esta implementación de strnstr no utiliza 
la función strncmp, como suele ser común en otras implementaciones. 
En su lugar, se comparan los caracteres uno a uno utilizando un bucle while.
En este ejemplo, se define un arreglo de caracteres str y otro sub para 
buscar en str. También se define la longitud de str con sizeof y se llama 
a ft_strnstr para buscar sub en str. Finalmente, se verifica si se encontró 
sub en str y se imprime el resultado en consecuencia.
`<stddef.h>` es una biblioteca de C que proporciona un conjunto de 
definiciones de macros y tipos que se utilizan para trabajar con punteros 
y direcciones de memoria. Algunas de las definiciones más comunes 
incluyen `NULL`, que se utiliza para representar un puntero nulo, 
`size_t`, que se utiliza para representar el tamaño de un objeto en bytes, 
y `ptrdiff_t`, que se utiliza para representar la diferencia 
entre dos punteros. `<stddef.h>` es una biblioteca estándar de C y, 
por lo tanto, está disponible en la mayoría de los sistemas que admiten 
el lenguaje C.
*/
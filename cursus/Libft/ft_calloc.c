/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:52:32 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/24 17:03:39 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);
	return (ptr);
}

/*int main(void)
{
    int *numbers;
    size_t num_size = sizeof(int);
    size_t num_count = 5;

    numbers = ft_calloc(num_count, num_size);

    if (numbers == NULL) {
        printf("Error: failed to allocate memory.\n");
        return 1;
    }

    printf("The first %lu elements of the array are: ", num_count);

    for (size_t i = 0; i < num_count; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    free(numbers);

    return 0;

}*/
/*En este ejemplo, se crea un arreglo de enteros de tamaño 5 utilizando 
la función ft_calloc. Luego, se verifica si la asignación de memoria fue 
exitosa y se imprimen los primeros 5 elementos del arreglo (que deberían ser 
0, ya que la función ft_calloc inicializa la memoria a 0). Finalmente, se 
libera la memoria asignada utilizando la función free.*/

/*La función calloc se utiliza para reservar una cantidad de memoria 
específica en tiempo de ejecución. La función asigna un bloque de memoria 
contigua lo suficientemente grande como para contener un número específico 
de elementos de tamaño determinado y devuelve un puntero a la primera 
ubicación de memoria del bloque. Además, la función inicializa todos 
los bits en el bloque de memoria a cero. 
La sintaxis de la función es la siguiente:
void *calloc(size_t nmemb, size_t size);
donde `nmemb` es el número de elementos que se desea reservar 
y `size` es el tamaño en bytes de cada elemento. El resultado de 
la llamada a la función es un puntero genérico a la memoria asignada 
o `NULL` si la asignación de memoria falló. 
*/
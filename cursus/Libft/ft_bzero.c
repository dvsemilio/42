/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:01:20 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/24 16:13:22 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = 0;
		n--;
	}
}

/*int main()
{
    char str[] = "Hola mundo";
    printf("Antes de bzero(): %s\n", str);

    bzero(str, strlen(str));

    printf("Después de bzero(): %s\n", str);
    return 0;
}

La función ft_bzero recibe dos argumentos: un puntero a un bloque de memoria 
y el tamaño en bytes del bloque de memoria. El propósito de la función es 
establecer a 0 el contenido de los bytes de memoria a los que apunta el puntero.
Declaramos un puntero unsigned char *ptr. unsigned char se utiliza en lugar de 
char porque el estándar de C garantiza que un unsigned char ocupa exactamente 1 
byte de memoria, lo que es útil para trabajar con bloques de memoria.
Asignamos el puntero void *s a ptr, ya que necesitamos un puntero de tipo 
unsigned char * para poder asignar valores byte a byte en la memoria.
A continuación, utilizamos un bucle while que recorrerá el bloque de memoria. 
La expresión n-- resta 1 al valor de n y se evalúa como verdadera mientras n 
sea mayor o igual a 1. Esto es lo mismo que hacer n = n - 1, pero es una forma 
más compacta de hacerlo.
En cada iteración del bucle, asignamos el valor de 0 a la dirección de memoria 
apuntada por ptr, y luego incrementamos el puntero en 1 byte. Es decir, 
*ptr++ = 0 establece el byte actual en 0 y luego desplaza el puntero a la 
siguiente posición en la memoria.
Cuando el bucle termina, todos los bytes del bloque de memoria habrán sido 
establecidos a 0.

main:
En este caso, primero se declara un array de caracteres str con una cadena 
de texto inicial. Luego, se muestra el valor inicial de la cadena utilizando 
printf.

Se llama a bzero con str como primer argumento y la longitud de str como segundo 
argumento. Esto hace que todos los bytes en la memoria reservada para str se 
establezcan en cero.

Finalmente, se muestra la cadena modificada usando printf para verificar que 
bzero haya hecho su trabajo correctamente. En este caso, la cadena se mostrará 
vacía, ya que todos los caracteres se han establecido en cero.
*/

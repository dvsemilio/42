/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:37:10 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/28 12:05:05 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}
/*void add_index(char *c, unsigned int i)
{
    *c += i;
}

int main(void)
{
    char s[] = "Hello, world!";
    ft_striteri(s, add_index);
    printf("%s\n", s);
    return 0;
}*/
/*En este ejemplo, definimos una función add_index que toma como argumentos 
un puntero a carácter c y un índice i. La función suma el índice al valor 
del carácter apuntado por c. Luego, en el main, inicializamos una cadena s 
con el valor "Hello, world!" y llamamos a ft_striteri con s y add_index 
como argumentos. Finalmente, imprimimos la cadena s 
modificada por la función ft_striteri.
La función add_index simplemente toma un carácter y un índice 
como parámetros, los concatena y los imprime en la salida estándar. 
Esto se hace para demostrar que ft_striteri está aplicando la función 
f en cada carácter de la cadena de entrada, y que el índice que se le 
pasa a la función f corresponde al índice del carácter en la cadena.
1. Primero, se define la función `ft_striteri` que recibe como parámetros 
un puntero a char `s` y un puntero a función `f` que a su vez recibe 
un `unsigned int` y un puntero a char.
void ft_striteri(char *s, void (*f)(unsigned int, char*))
2. Se declara una variable `i` de tipo `unsigned int` que será usada 
para llevar la cuenta del índice de la cadena a la que se está accediendo.
unsigned int i;
3. Se verifica si los punteros `s` y `f` son diferentes de NULL, 
de ser así la función continúa su ejecución. En caso contrario, 
la función termina sin hacer nada.
if (!s || !f)
    return;
4. Se inicializa `i` en 0.
i = 0;
5. Se comienza un bucle `while` que se ejecuta mientras el puntero 
`s` no apunte al caracter nulo `'\0'`. Este bucle recorrerá toda la cadena `s`.
while (*s)
{
		f(i, s);
		i++;
		s++;
}
6. En cada iteración del bucle, se llama a la función `f` 
pasándole como parámetros `i` (que es el índice actual de la cadena) y `s` 
(que es un puntero al caracter actual).
f(i, s);
7. Se incrementa la variable `i` en uno y se avanza el puntero `s`
 al siguiente caracter.
i++;
s++;
8. Cuando se llega al final de la cadena (cuando el puntero `s` 
apunta al caracter nulo `'\0'`), la función termina y no devuelve ningún valor.
return; 
En resumen, esta función recibe una cadena y una función como parámetros 
y ejecuta la función para cada caracter de la cadena, 
pasándole el índice de la cadena y un puntero al caracter actual como argumentos.
*/
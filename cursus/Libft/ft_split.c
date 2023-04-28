/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:53:51 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/27 18:38:48 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_free_array(void **arr, size_t size)
{
	size_t	i;

	if (!arr)
		return ;
	i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*get_next_word(char const **s, char c)
{
	char	*word;
	int		len;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = ft_substr(*s, 0, len);
	if (!word)
		return (NULL);
	*s += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		num_words;

	if (!s)
		return (NULL);
	num_words = count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < num_words)
	{
		while (*s == c)
			s++;
		arr[i] = get_next_word(&s, c);
		if (!arr[i])
		{
			ft_free_array((void **)arr, i);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

/*int main()
{
    char *s = "Hello,world,how,are,you";
    char **split = ft_split(s, ',');
    if (split)
    {
        for (int i = 0; split[i]; i++)
        {
            printf("%s\n", split[i]);
            free(split[i]);
        }
        free(split);
    }
    return 0;
}*/

/*En este ejemplo, la función ft_split se utiliza para dividir la cadena 
"Hello,world,how,are,you" en subcadenas separadas por comas. 
Luego se imprime cada subcadena en una nueva línea y se liberan 
las memorias asignadas para cada subcadena y para el array de cadenas en sí.
La función ft_split toma una cadena y un carácter delimitador como entrada 
y devuelve un array de cadenas que resultan de dividir la cadena original 
en segmentos utilizando el delimitador.
La función ft_free_array libera la memoria reservada por ft_split. 
Toma como entrada un array de punteros a void y su tamaño, itera sobre 
los elementos del array, liberando la memoria reservada para cada cadena, 
y luego libera la memoria del array en sí.
la función count_words cuenta el número de palabras en la cadena s 
utilizando el carácter delimitador c. Itera sobre la cadena, 
incrementando el contador cada vez que encuentra un carácter que 
no sea el delimitador. Luego avanza hasta el siguiente carácter 
delimitador o el final de la cadena, lo que sea primero.
la función get_next_word función toma un puntero a un puntero 
a char y el carácter delimitador c. Utiliza el puntero a char 
para encontrar la próxima palabra en la cadena, crea una copia 
de esa palabra y la devuelve como un puntero a char. 
Actualiza el puntero a char para apuntar al final de la palabra.
la función principal toma una cadena s y un carácter delimitador c. 
Primero verifica si la cadena es NULL y si es así, devuelve NULL. 
Luego cuenta el número de palabras utilizando count_words y reserva
memoria para un array de punteros a char que contenga el número de 
palabras más 1 para un puntero nulo de finalización. 
La función `ft_split` recibe una cadena de caracteres `s` 
y un delimitador `c`. Primero, se verifica si la cadena `s` es nula. 
En caso de serlo, la función devuelve un puntero nulo.
Después, se llama a la función `count_words` para contar el número 
de palabras que hay en la cadena `s` separadas por el delimitador `c`. 
Esta función itera a través de la cadena `s`, y cada vez que encuentra 
un caracter diferente a `c`, cuenta una palabra. La función devuelve 
la cantidad de palabras contadas.
A continuación, se reserva memoria para el puntero a puntero `arr` 
que contendrá las palabras separadas. Se utiliza `malloc` 
para reservar suficiente espacio en memoria para un arreglo 
de punteros de caracteres, más un espacio adicional para el 
puntero nulo que indicará el final del arreglo.
Luego, se inicializa una variable `i` en 0, se itera a través de la cadena 
`s` y se llama a la función `get_next_word` para obtener la siguiente palabra.
 Esta función recibe un puntero a un puntero a la cadena `s` 
 y el delimitador `c`. La función cuenta la longitud de la próxima 
 palabra y utiliza la función `ft_substr` para obtener una cadena 
 que contiene la palabra. Esta cadena se guarda en el arreglo `arr`.
Si `get_next_word` falla, es decir, si no puede reservar suficiente 
memoria para la nueva cadena, la función llama a la función `ft_free_array` 
para liberar la memoria ya reservada y devuelve un puntero nulo.
Cuando se hayan agregado todas las palabras al arreglo `arr`, 
se agrega un puntero nulo al final del arreglo para indicar 
el final del mismo.
Finalmente, la función devuelve el arreglo `arr`.
La función `ft_free_array` se encarga de liberar la memoria 
reservada para el arreglo de cadenas de caracteres. 
Primero se verifica si el puntero a `arr` es nulo. Si es nulo, 
la función sale sin hacer nada. Si no es nulo, la función itera 
a través del arreglo de cadenas de caracteres y libera la memoria 
reservada para cada cadena. Después, libera la memoria reservada 
para el arreglo de punteros de caracteres.
*/
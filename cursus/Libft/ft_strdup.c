/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:07:11 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/24 17:11:43 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	dup[len] = '\0';
	while (len--)
		dup[len] = s1[len];
	return (dup);
}

/*
char *ft_strdup(const char *s);

int main(void)
{
    char *str = "Hola mundo!";
    char *copy = ft_strdup(str);

    printf("Original: %s\n", str);
    printf("Copia: %s\n", copy);

    free(copy);
    return 0;
}
*/
/*Este main crea una copia de la cadena "Hola mundo!" 
utilizando la función my_strdup y luego imprime tanto 
la cadena original como la copia. Recuerda que, 
como my_strdup utiliza malloc para asignar memoria, 
siempre es importante liberar la memoria asignada con 
free una vez que se haya terminado de usar.*/
/*La función `strdup` copia una cadena de caracteres a una nueva 
dirección de memoria y devuelve un puntero al inicio de la nueva cadena. 
La nueva cadena es una copia de la original, con el mismo contenido y 
terminada con el carácter nulo `'\0'`.

La función `strdup` realiza la asignación de memoria dinámica utilizando 
`malloc`, por lo que es importante liberar la memoria utilizando la función 
`free` cuando ya no se necesite la cadena copiada.*/
/*La idea aquí es calcular la longitud de la cadena s1 
recorriéndola una sola vez con un bucle while. Luego 
se reserva memoria para la cadena duplicada y se copian 
los caracteres de s1 a la cadena dup en orden inverso con otro 
bucle while. Al final se agrega el carácter nulo en la posición 
final de la cadena dup.*/
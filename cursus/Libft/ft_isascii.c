/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:59:50 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/25 12:36:55 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int n)
{
	return (n >= 0 && n <= 127);
}

/*
int	main(void)
{
    int c;

    printf("Ingrese un número entre 0 y 177: ");
    scanf("%d", &c);

    if (ft_isascii(c))
        printf("El número %d es un caracter ASCII.\n", c);
    else
        printf("El número %d no es un caracter ASCII.\n", c);

    return (0);
}
`<ctype.h>` es una biblioteca estándar de C que proporciona una serie de 
funciones para determinar las propiedades de los caracteres, 
como si son letras mayúsculas o minúsculas, dígitos, espacios en blanco,
 etc. También proporciona funciones para convertir caracteres de mayúsculas 
 a minúsculas y viceversa. Estas funciones son útiles en muchas aplicaciones
  que involucran el procesamiento de texto.
*/
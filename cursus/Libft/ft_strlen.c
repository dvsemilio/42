/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:40:42 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/21 12:57:59 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen( const char *str )
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0' )
	len++;
	return (len);
}

/*
unsigned int	ft_strlen(const char *str);

int main(void)
{
    char *str = "Hola, mundo!";
    unsigned int len = ft_strlen(str);

    printf("La longitud de la cadena es %u\n", len);
    return 0;
}*/
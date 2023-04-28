/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:10:59 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/21 13:10:46 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int n)
{
	return ((n >= 65 && n <= 90) || (n >= 97 && n <= 122));
}

/*
int	main(void)
{
	char c;
	
	printf("Introduce un caracter: ");
	scanf("%c", &c);
	if (ft_isalpha(c))
		printf("El caracter introducido es una letra.\n");
	else
		printf("El caracter introducido no es una letra.\n");
	return (0);
}
*/
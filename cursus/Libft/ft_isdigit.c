/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:08:05 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/21 13:05:48 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int n)
{
	return (n >= 48 && n <= 57);
}

/*
int main(void)
{
    char c = '7';
    int n = 56;

    if (ft_isdigit(c))
        printf("%c is a digit.\n", c);
    else
        printf("%c is not a digit.\n", c);

    if (ft_isdigit(n))
        printf("%d is a digit.\n", n);
    else
        printf("%d is not a digit.\n", n);

    return (0);
}*/
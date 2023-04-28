/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:05:33 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/21 13:04:24 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int n)
{
	return (n >= 32 && n <= 126);
}

/*
int main()
{
    int c = 'a';
    printf("%c is printable: %d\n", c, ft_isprint(c));
    c = '!';
    printf("%c is printable: %d\n", c, ft_isprint(c));
    c = '\n';
    printf("%c is printable: %d\n", c, ft_isprint(c));
    c = 255;
    printf("%c is printable: %d\n", c, ft_isprint(c));
    return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:07:29 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/24 16:34:21 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int n)
{
	if (n >= 'a' && n <= 'z' )
		return (n - 32);
	else
		return (n);
}

/*int main()
{
    char c = 'a';
    printf("%c\n", ft_toupper(c));
    return (0);
}*/
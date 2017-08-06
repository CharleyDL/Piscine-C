/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 16:40:15 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/05 21:43:57 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		cptr;
	int		letter;
	char	tmp;

	cptr = 0;
	letter = 0;
	while (str[cptr] != '\0')
	{
		cptr++;
	}
	cptr -= 1;
	while (letter < cptr)
	{
		tmp = str[cptr];
		str[cptr] = str[letter];
		str[letter] = tmp;
		letter++;
		cptr--;
	}
	return (str);
}

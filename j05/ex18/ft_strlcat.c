/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:40:57 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/14 18:58:55 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int dlen;
	unsigned int slen;

	x = 0;
	dlen = 0;
	slen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0')
		slen++;
	if (size - 1 <= dlen)
		return (slen + size);
	while (dlen + x < size - 1)
	{
		dest[dlen + x] = src[x];
		x++;
	}
	dest[dlen + 1] = '\0';
	return (dlen + slen);
}

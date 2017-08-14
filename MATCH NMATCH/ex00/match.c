/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 10:08:03 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/13 16:18:47 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else if (*s2 == '*' && (*s2 + 1) != 0 && *s1 == 0)
		return (0);
	return (0);
}

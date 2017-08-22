/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:22:07 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/20 18:40:49 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tools.h"
#include "ft_rush.h"

** /*Fonction pour lire le fichier passé par le '|' afin de la traiter*/
** /*pour la suite du programme*/
char	*ft_read(void)
{
	char	*entree;
	int		cptrRead;

	entree = malloc(sized(char) * (8192 + 1));
	while (cptrRead = read(0, buf, 8192))
		entree[cptrRead] = buf;
	return (entree);
}

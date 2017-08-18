/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clebarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 11:41:01 by clebarbi          #+#    #+#             */
/*   Updated: 2017/08/18 13:44:17 by clebarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
#include <unistd.h>

typedef int t_bool;
#define TRUE		1
#define FALSE		0
#define EVEN(nbr)  (nbr % 2 == 0)
#define EVEN_MSG	"I have an even number of arguments.\n"
#define ODD_MSG		"I have an odd number of arguments.\n"
#define SUCCESS		0

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:01:18 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/03/05 18:31:28 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ss;

	if ((count == SIZE_MAX) || (size == SIZE_MAX))
		return (0);
	ss = (char *) malloc(size * count);
	if (ss == 0)
		return (ss);
	ft_bzero(ss, (size * count));
	return ((void *)ss);
}

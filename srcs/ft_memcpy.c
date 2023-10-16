/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:23:15 by long              #+#    #+#             */
/*   Updated: 2023/10/16 23:01:42 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t  i;
    char    *s;
    char    *d;

    i = 0;
    s = (char *)src;
    d = (char *)dst;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}

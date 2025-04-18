/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmedeiro <rmedeiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:43:29 by rmedeiro          #+#    #+#             */
/*   Updated: 2025/04/13 14:53:23 by rmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	idx;
	const char	*last;

	idx = 0;
	last = NULL;
	while (s[idx] != '\0')
	{
		if (s[idx] == (unsigned char)c)
			last = s + idx;
		idx++;
	}
	if (c == '\0')
		return ((char *)(s + idx));
	return ((char *)last);
}

/* #include <stdio.h>

int	main(void)
{
	printf("ft_strrchr: %s\n", ft_strrchr("Hello World", 'o'));
	printf("strrchr: %s\n", strrchr("Hello World", 'o'));

	return (0);
} */
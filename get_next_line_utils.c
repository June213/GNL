/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:07:46 by jsalaber          #+#    #+#             */
/*   Updated: 2024/01/15 13:45:59 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		count ++;
		s++;
	}
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*finalstr;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	finalstr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!finalstr)
		return (NULL);
	ft_memcpy(finalstr, s1, len1);
	ft_memcpy(finalstr + len1, s2, len2);
	finalstr[len1 + len2] = '\0';
	return (finalstr);
}

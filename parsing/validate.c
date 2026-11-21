/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-br <abait-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:12:06 by abait-br          #+#    #+#             */
/*   Updated: 2026/11/21 02:25:07 by abait-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	get_sign(const char *str, int *i)
{
	if (str[*i] == '-')
	{
		(*i)++;
		return (-1);
	}
	if (str[*i] == '+')
		(*i)++;
	return (1);
}

static long	ft_atoi(const char *nptr)
{
	long	res;
	int		sign;
	int		i;
	long	limit;

	res = 0;
	sign = 1;
	i = 0;
	limit = 2147483647;
	sign = get_sign(nptr, &i);
	if (sign == -1)
		limit = 2147483648;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (res > (limit - (nptr[i] - '0')) / 10)
			return (2147483648);
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

static int	check_nbr(const char *nptr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		count++;
		i++;
	}
	if (count > 1 || nptr[i] == '\0')
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
		i++;
	if (nptr[i] != '\0')
		return (0);
	return (1);
}

int	is_valid_int(const char *str)
{
	long	nbr;

	if (!str || check_nbr(str) == 0)
		return (0);
	nbr = ft_atoi(str);
	if (nbr > 2147483647 || nbr < -2147483648)
		return (0);
	return (1);
}

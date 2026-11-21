#include <stdio.h>

int	is_valid_int(const char *str);

int	main(void)
{
	char	*tests[] = {"42", "-42", "+42", "0", "0042", "2147483647",
			"-2147483648", "2147483648", "-2147483649", "42abc", "--42", "++42",
			"+", "-", "", "12 34", "abc", NULL};
	int		i;

	i = 0;
	while (tests[i])
	{
		printf("Input: [%-15s] -> ", tests[i]);
		if (is_valid_int(tests[i]))
			printf("VALID\n");
		else
			printf("INVALID\n");
		i++;
	}
	return (0);
}

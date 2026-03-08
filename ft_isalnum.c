#include <stdio.h>

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// int main()
// {
// 	printf("%d %d\n", ft_isalnum('f'), ft_isalnum('_'));
// }
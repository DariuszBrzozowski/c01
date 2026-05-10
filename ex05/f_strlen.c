#include <stdio.h>

int	ft_strlen(char *str){
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	char imie[] = "Darek Brzozowski";
	printf("%d", ft_strlen(&imie[0]));
}




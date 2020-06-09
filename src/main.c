#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	char **pathes = ft_strsplit(getenv("PATH"), ':');

	while (pathes && *pathes && **pathes)
	{
		ft_printf("%s\n", *pathes++);
	}
	return (0);
}
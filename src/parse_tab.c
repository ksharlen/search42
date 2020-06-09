#include "libft.h"

void auto_substitution(struct s_input *input)
{
	size_t len;

	if (gap_is_empty(input->gap))
	{
		//вводим символ табуляции
	}
	else if ((len = ft_lineslen(execution_files_search(getenv("PATH")))) == 1)
	{
		//Просто дополняем найденный
	}
	else if (!len)
	{
		//ничего не делаем
	}
	else
	{
		//предлагаем варианты, запускаем ft_select
	}
}
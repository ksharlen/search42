#include "libft.h"
#include "as_struct.h"

/*
**Это будет перенесенно в другой можудб
*/
void auto_substitution(struct s_input *input)
{
	size_t	len;
	t_as	*auto_sub;

	if (gap_is_empty(input->gap))
	{
		//вводим символ табуляции
	}
	//очистить после использования files
	auto_sub = execution_files_search_reqursive(getenv("PATH"));
	if (!auto_sub || !auto_sub->size)
	{
		
	}
	else if (auto_sub->size == 1)
	{

	}
	else
	{
		
	}
}
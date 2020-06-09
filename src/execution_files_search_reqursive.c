#include "auto_substitution.h"

static size_t get_number_execution_files(t_as *files)
{
	size_t len;
	size_t i;

	i = 0;
	len = 0;
	while (i < files->size)
	{
		if (files->files[i].filetype == EXECUTION)
		{
			++len;
		}
		++i;
	}
	return len;
}

static t_as	get_execution_files(t_as *files)
{
	t_as	execution_files;
	size_t	number_exec_files;
	size_t	i;
	size_t	j;

	execution_files.size = 0;
	if (files && files->size)
	{
		if ((execution_files.size = get_number_execution_files(files)))
		{
			i = 0;
			j = 0;
			execution_files.files = (struct s_file_info *)ft_memalloc(sizeof(struct s_file_info) * execution_files.size);
			while (i < files->size)
			{
				if (files->files[i].filetype == EXECUTION)
				{
					ft_memcpy(&execution_files.files[j], &files->files[i], sizeof(struct s_file_info));
					++j;
				}
				++i;
			}
		}
	}
	return execution_files;
}

t_as	execution_files_search_reqursive(char *path)
{
	t_as	all_files;
	t_as	execution_files;
	size_t	number_execution_files;

	execution_files.size = 0;
	if (path && *path)
	{
		all_files = search_files_reqursive(path);
		if (all_files.size)
		{
			execution_files = get_execution_files(&all_files);
			clean_as_struct(&all_files);
			//очистить all_files
			//вернуть файлы
		}
	}
	return execution_files;
}
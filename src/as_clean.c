#include "auto_substitution.h"

void clean_as_struct(t_as *cleanble)
{
	size_t i;

	if (cleanble && cleanble->files)
	{
		i = 0;
		while (i < cleanble->size)
		{
			free(cleanble->files[i]->filename);
			++i;
		}
		free(cleanble->files);
	}
}
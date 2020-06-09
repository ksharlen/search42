#ifndef AUTO_SUBSTITUTION_H
# define AUTO_SUBSTITUTION_H

# include <stdlib.h>

# include "libft.h"
# include "as_struct.h"

t_as	search_files_reqursive(char *path);
t_as	execution_files_search_reqursive(char *path);
void	clean_as_struct(t_as *cleanble);
//void	auto_substitution(struct s_input *input)

#endif
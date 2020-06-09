#ifndef AS_STRUCT_H
# define AS_STRUCT_H

/*
**include headers files
*/
# include <sys/types.h>
# include <stdlib.h>

enum e_filetype
{
	EXECUTION,
	UNKNOWN
};

/*
**struct for auto substitution
*/
typedef struct	s_as
{
	struct s_file_ifno	**files;
	size_t				size;
}				t_as;

struct			s_file_info
{
	char			*filename;
	enum e_filetype filetype;
	size_t			length;
};

#endif
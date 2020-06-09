#include <stdlib.h>
#include <stdio.h>

struct file
{
	char *filename;
	size_t size_filename;
};

struct as
{
	struct file *files;
	size_t size;
};

static struct as get_files()
{
	struct as test;

	test.files = (struct file *)malloc(sizeof(struct file) * 3);
	printf("here\n");
	test.files[0].filename = "usr";
	test.files[0].size_filename = 3;
	test.files[1].filename = "bin";
	test.files[1].size_filename = 3;
	test.files[2].filename = "opt";
	test.files[2].size_filename = 3;
	test.size = 3;
	return test;
}

int main(void)
{
	// struct as files = get_files();

	// for (size_t i = 0; i < files.size; ++i)
	// {
	// 	printf("filename: %s; size: %zd\n", files.files[i].filename, files.files[i].size_filename);
	// }
	struct as files;

	files.files = (struct file *)malloc(sizeof(struct file) * 3);
	return (0);
}
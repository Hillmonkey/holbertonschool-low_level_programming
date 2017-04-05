#ifndef FILE_IO
#define FILE_IO

#define BUF_SIZE 1204

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp(int ac, char **av);

#endif /* FILE_IO */

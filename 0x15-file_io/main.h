#ifndef IOFILE_H
#define IOFILE_H

#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

size_t _strnlen(const char *str, size_t maxlen);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif

#ifndef IOFILE_H
#define IOFILE_H

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
#endif

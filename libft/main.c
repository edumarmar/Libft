#include "libft.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	if (argc == 2)
		close(fd);
}

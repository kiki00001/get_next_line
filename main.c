#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		temp;
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	while ((temp = (get_next_line(fd, &line)) > 0))
	{
		printf("%d  :%s\n", temp, line);
		free(line);
	}
	printf("%d  :%s\n",temp, line);
	free(line);
	close(fd);
	return (0);
}

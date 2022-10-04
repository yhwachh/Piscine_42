/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:38:33 by ibalbako          #+#    #+#             */
/*   Updated: 2021/11/28 16:19:39 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

	

int read_dict(char *filename, void *buf, size_t size);
int	algo(char *file, char *c);

 void ft_putchar(char a)
{
    write (1, &a, 1);
}

int main(int ac, char **av)
{
	int i;
	char *buf;

	i = 0;
    buf = malloc(sizeof(char) * 1000);
    if (buf == NULL)
        return (0);
    if (read_dict(av[2], buf, 1000) == -1) 
	{
        free(buf);
    }
	algo(buf, av[1]);

    free(buf);
    return (0);
}

int read_dict(char *filename, void *buf, size_t size)
{
    int fd;
    int read_out;
    int close_out;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (-1);
    read_out = read(fd,buf,size);
    if (read_out == -1)
	{
        return (-1);
    }
    close_out = close(fd);
    if (close_out == -1)
	{
        return (-1);
    }
    return (1);
}

int	algo(char *file, char *c)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	while (file[i])
	{
		if (file[i] == *c)
		{

			j = i;
			//c = c * 10 + (file[j] - '0');
			while(file[j] != '\n')
			{
				if (file[j] >= 97 && file[j] <= 122)
					ft_putchar(file[j]);
				j++;
			}
			return (0);
		}
		i++;
	}
	return (0);
}















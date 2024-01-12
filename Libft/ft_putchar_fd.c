/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:19:53 by inmili            #+#    #+#             */
/*   Updated: 2024/01/12 18:07:51 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int main(void) 
{
    int file_descriptor = open("ilyas.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    ft_putchar_fd('X', file_descriptor);
    close(file_descriptor);
    return 0;
}
Flags: O_WRONLY | O_CREAT | O_TRUNC
O_WRONLY: Open the file in write-only mode.
O_CREAT: Create the file if it does not exist.
O_TRUNC: If the file already exists, truncate (empty) it.
File Permissions: 0644
0: The leading digit indicates that this is an octal number.
6: Owner (user) has read (4) and write (2) permissions.
4: Group has read permission.
4: Others have read permission.
*/

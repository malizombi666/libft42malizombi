//
//  main.c
//  ft_lstlast
//
//  Created by MANYA on 10.02.23.
//

#include <stdio.h>

t_list *ft_lstlast(t_list *lst)
{
    if (!(*lst).next)
        return (0);
    while ((*lst).next)
        lst = (*lst).next;
    return (lst);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

//
//  main.c
//  ft_lstsize
//
//  Created by MANYA on 10.02.23.
//

#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    int len;
    
    if (lst = NULL)
        return (0);
    len = 1;
    while ((*lst).next)
    {
        lst = (*lst).next;
        len++;
    }
    return (len);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

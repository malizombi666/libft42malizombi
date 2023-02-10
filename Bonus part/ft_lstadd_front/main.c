//
//  main.c
//  ft_lstadd_front
//
//  Created by MANYA on 10.02.23.
//

#include <stdio.h>
#include <stdlib.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list *tmp;
    
    tmp = *lst;
    *lst = new;
    (*new).next = tmp;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

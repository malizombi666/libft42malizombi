//
//  main.c
//  ft_lstadd_back
//
//  Created by MANYA on 10.02.23.
//

#include <stdio.h>
t_list *ft_lstlast(t_list *lst);

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    
    last = ft_lstlast(*lst);
    last.next = new;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

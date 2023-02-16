//
//  main.c
//  Bonus part
//
//  Created by MANYA on 09.02.23.
//


#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}
t_list;

t_list *ft_lstnew(void *content)
{
    t_list *buffer;
    
    buffer = malloc(sizeof(t_list));
    if (!buffer)
        return (0);
    (*buffer).content = content;
    (*buffer).next = 0;
    return (buffer);
}

int main()
{
    // insert code here...
    int a = 19;
    t_list *ch;
    ch = ft_lstnew(&a);
    
    printf("the address of a is ->> %p\n", &a);
    printf("the content of ch is ->> %p\n", ch -> content);
    printf("the next of ch is ->> %p\n", ch -> next);
    
    return 0;
}

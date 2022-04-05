#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;

    if (!lst || !new)
        return ;
    else if (!(*lst) || new)
    {
        *lst = new;
        return ;
    }
    tmp = *lst;
    while (tmp -> next)
        tmp = tmp -> next;
    tmp -> next = new;
}
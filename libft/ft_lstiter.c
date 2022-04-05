#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *tmp;

    if (!lst || !f)
        return ;

    tmp = lst;
    while (tmp)
    {
        f(tmp->content);
        tmp = tmp->next;
    }
}
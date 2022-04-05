#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *node;
    t_list *new;

    if (!lst || !f || !del)
        return (0);
    
    while (lst)
    {
        new = ft_lstnew(f(lst -> content));
        if (!new)
        {
            ft_lstclear(&node, del);
            return (0);
        }
        ft_lstadd_back(&node, new);
        lst = lst -> next;
    }
    ft_lstdelone(new, del);
    return (node);
}
#include "libft.h"

t_list *ft_lstnew(void *content)
{
  t_list *n_lst;

  n_lst = (t_list*)malloc(sizeof(t_list));
  if (!n_lst)
    return (0);
  
  n_lst->next = NULL;
  n_lst->content = content;
  return (n_lst);
}
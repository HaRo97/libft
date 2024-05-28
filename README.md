# libft

## Mandatory Part

- **Library Name:** `libft.a`
- **Turn-in files:** `Makefile`, `libft.h`, `ft_*.c`
- **Makefile:** Must include rules for `NAME`, `all`, `clean`, `fclean`, and `re`

### Technical Considerations

- Declaring global variables is forbidden.
- If you need helper functions to split a more complex function, define them as static functions. This way, their scope will be limited to the appropriate file.
- Place all your files at the root of your repository.
- Turning in unused files is forbidden.
- Every `.c` file must compile with the flags `-Wall -Wextra -Werror`.
- You must use the command `ar` to create your library. Using the `libtool` command is forbidden.
- Your `libft.a` has to be created at the root of your repository.

## Part 1 - Libc functions

To begin, you must redo a set of functions from the libc. Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their man. The only difference will be their names. They will begin with the `ft_` prefix. For instance, `strlen` becomes `ft_strlen`.

You must write your own function implementing the following original ones. They do not require any external functions:

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`

In order to implement the two following functions, you will use `malloc()`:

- `ft_calloc`
- `ft_strdup`

## Part 2 - Additional functions

In this second part, you must develop a set of functions that are either not in the libc, or that are part of it but in a different form.

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus Part

If you completed the mandatory part, do not hesitate to go further by doing this extra one. It will bring bonus points if passed successfully.

Functions to manipulate memory and strings are very useful. But you will soon discover that manipulating lists is even more useful.

You have to use the following structure to represent a node of your list. Add its declaration to your `libft.h` file:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

The members of the `t_list` struct are:

- `content`: The data contained in the node. `void *` allows to store any kind of data.
- `next`: The address of the next node, or NULL if the next node is the last one.

In your Makefile, add a `make bonus` rule to add the bonus functions to your `libft.a`.

Implement the following functions in order to easily use your lists:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

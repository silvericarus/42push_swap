# 🔢push_swap📋
## Because swap_push isn’t as natural
<a href="https://creativecommons.org/licenses/by-nc-sa/4.0/"><img src="https://licensebuttons.net/l/by-nc-sa/4.0/88x31.png" alt="CC BY-NC-SA 4.0 License"></a>
<table>
  <tr>
    <td>Program name</td>
    <td>push_swap</td>
  </tr>
  <tr>
    <td>Turn in files</td>
    <td>Makefile, *.h, *.c</td>
  </tr>
  <tr>
    <td>Makefile</td>
    <td>NAME, all, clean, fclean, re</td>
  </tr>
  <tr>
    <td>Arguments</td>
    <td>stack a: A list of integers</td>
  </tr>
  <tr>
    <td>External functs.</td>
    <td>
      <ul>
        <li>read, write, malloc, free, exit</li>
        <li>ft_printf and any equivalent YOU coded</li>
      </ul>
    </td>
  </tr>
  <tr>
    <td>Libft authorized</td>
    <td>Yes</td>
  </tr>
  <tr>
    <td>Description</td>
    <td>Sort stacks</td>
  </tr>
</table>

- You have 2 stacks named a and b.
- At the beginning:
- The stack a contains a random amount of negative and/or positive numbers
which cannot be duplicated.
- The stack b is empty.
- The goal is to sort in ascending order numbers into stack a. To do so you have the
following operations at your disposal:<br>
<table>
  <tr>
    <td>sa (swap a)</td>
    <td>Swap the first 2 elements at the top of stack a.</td>
  </tr>
  <tr>
    <td>sb (swap b)</td>
    <td>Swap the first 2 elements at the top of stack b.</td>
  </tr>
  <tr>
    <td>ss</td>
    <td>sa and sb at the same time.</td>
  </tr>
  <tr>
    <td>pa (push a)</td>
    <td>Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.</td>
  </tr>
  <tr>
    <td>pb (push b)</td>
    <td>Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.</td>
  </tr>
  <tr>
    <td>ra (rotate a)</td>
    <td>Shift up all elements of stack a by 1. The first element becomes the last one.</td>
  </tr>
  <tr>
    <td>rb (rotate b)</td>
    <td>Shift up all elements of stack b by 1. The first element becomes the last one.</td>
  </tr>
  <tr>
    <td>rr</td>
    <td>ra and rb at the same time.</td>
  </tr>
  <tr>
    <td>rra (reverse rotate a)</td>
    <td>Shift down all elements of stack a by 1. The last element becomes the first one.</td>
  </tr>
  <tr>
    <td>rrb (reverse rotate b)</td>
    <td>Shift down all elements of stack b by 1. The last element becomes the first one.</td>
  </tr>
  <tr>
    <td>rrr</td>
    <td>rra and rrb at the same time.</td>
  </tr>
</table>

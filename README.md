# Push_swap (Radix sort) - 84/100

## Summary
Sort data on a stack with limited instructions, minimizing actions.

## Version
7

## Common Instructions
- Written in C.
- Follow the Norm.
- No unexpected function terminations.
- Free heap-allocated memory properly.
- Include Makefile with rules: `$(NAME)`, `all`, `clean`, `fclean`, `re`.
- Bonus rules in a separate `_bonus.{c/h}` file.
- Allowed to use your libft.

## Mandatory Part
### V.1 The Rules
- Two stacks, a and b.
- Stack a: random non-duplicate integers.
- Stack b: empty.
- Operations:
  - `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`.

### V.2 Example
Sort integers with operations on stacks a and b.

### V.3 The "push_swap" Program
- **Program Name:** push_swap
- **Turn in Files:** Makefile, *.h, *.c
- **Makefile Rules:** `NAME`, `all`, `clean`, `fclean`, `re`
- **Arguments:** stack a (list of integers)
- **External Functions:** `read`, `write`, `malloc`, `free`, `exit`, `ft_printf` or equivalent.
- **Libft Authorized:** Yes
- **Description:** Sort stack a with minimal instructions.

## Bonus Part
### VI.1 The "checker" Program
- **Program Name:** checker
- **Turn in Files:** *.h, *.c
- **Makefile:** bonus
- **Arguments:** stack a (list of integers)
- **External Functions:** `read`, `write`, `malloc`, `free`, `exit`, `ft_printf` or equivalent.
- **Libft Authorized:** Yes
- **Description:** Execute sorting instructions, check if sorted, display "OK" or "KO."

## Submission and Peer-evaluation
Turn in the assignment in your Git repository. Only the work inside the repository will be evaluated during defense.

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to a char (char **)
 * @to: The char pointer to assign
 */
void set_string(char **s, char *to)
{
    *s = to;
}

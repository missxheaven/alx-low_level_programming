/**
 * _memcpy - Copies a memory area from source to destination.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Function copies 'n' bytes from the 'src' memory area to the 'dest' memory area.
 * It is important to ensure that 'dest' has enough space to accommodate 'n' bytes,
 * and that there is no overlap between 'src' and 'dest'.
 *
 * Return: A pointer to the destination ('dest') memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
char *src_ptr = src;

while (n > 0)
{
*dest_ptr = *src_ptr;
dest_ptr++;
src_ptr++;
n--;
}

return (dest);
}

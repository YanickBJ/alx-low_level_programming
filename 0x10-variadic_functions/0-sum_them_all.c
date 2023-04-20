#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: the input of a function parameter.
 * Return:(0) if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int je, somme;
	va_list ap;

	if (n == 0)
		return (0);

	va_start (ap, n); /* Initialise la liste d'arguments. */

	somme = 0;
	for (je = 0; je < n; je++)
		somme += va_arg (ap, int); /* Récupère la valeur de l'argument suivant. */
	va_end (ap); /* Nettoyer. */
	return (somme);
}

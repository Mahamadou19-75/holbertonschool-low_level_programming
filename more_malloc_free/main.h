#ifndef MAIN_H
#define MAIN_H

/**
 * malloc_checked - alloue de la mémoire avec malloc
 * @b: taille en octets à allouer
 *
 * Return: pointeur vers la mémoire allouée
 *         termine le programme avec le statut 98 si malloc échoue
 */
void *malloc_checked(unsigned int b);

#endif /* MAIN_H */

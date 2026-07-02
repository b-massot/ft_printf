/* Backup of main.c used for local testing — renamed to main.c.bak */
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>


int main(void)
{
    int ft_len;
    int printf_len;

    // Test des caractères
    printf("\n=== Test des caractères ===\n");
    ft_len = ft_printf("Char: %c %c %c\n", 'a', 'b', 'c');
    printf_len = printf("Char: %c %c %c\n", 'a', 'b', 'c');
    printf("Longueur ft_printf: %d | printf: %d\n", ft_len, printf_len);

    // Test des chaînes
    printf("\n=== Test des chaînes ===\n");
    ft_len = ft_printf("String: %s\n", "Hello World!");
    printf_len = printf("String: %s\n", "Hello World!");
    ft_len = ft_printf("String NULL: %s\n", (char *)NULL);
    printf_len = printf("String NULL: %s\n", (char *)NULL);
    ft_len = ft_printf("String vide: %s\n", "");
    printf_len = printf("String vide: %s\n", "");

    // Test des pointeurs
    printf("\n=== Test des pointeurs ===\n");
    int num = 42;
    void *ptr = &num;
    void *null_ptr = NULL;
    ft_len = ft_printf("Pointer: %p\n", ptr);
    printf_len = printf("Pointer: %p\n", ptr);
    ft_len = ft_printf("Pointer NULL: %p\n", null_ptr);
    printf_len = printf("Pointer NULL: %p\n", null_ptr);

    // Test des nombres
    printf("\n=== Test des nombres ===\n");
    ft_len = ft_printf("Integer positif: %d\n", 42);
    printf_len = printf("Integer positif: %d\n", 42);
    ft_len = ft_printf("Integer négatif: %d\n", -42);
    printf_len = printf("Integer négatif: %d\n", -42);
    ft_len = ft_printf("Integer MAX: %d\n", INT_MAX);
    printf_len = printf("Integer MAX: %d\n", INT_MAX);
    ft_len = ft_printf("Integer MIN: %d\n", INT_MIN);
    printf_len = printf("Integer MIN: %d\n", INT_MIN);

    // Test des unsigned
    printf("\n=== Test des unsigned ===\n");
    ft_len = ft_printf("Unsigned: %u\n", 42);
    printf_len = printf("Unsigned: %u\n", 42);
    ft_len = ft_printf("Unsigned MAX: %u\n", UINT_MAX);
    printf_len = printf("Unsigned MAX: %u\n", UINT_MAX);

    // Test des hexadécimaux
    printf("\n=== Test des hexadécimaux ===\n");
    ft_len = ft_printf("Hexa min: %x\n", 42);
    printf_len = printf("Hexa min: %x\n", 42);
    ft_len = ft_printf("Hexa maj: %X\n", 42);
    printf_len = printf("Hexa maj: %X\n", 42);
    ft_len = ft_printf("Hexa min négatif: %x\n", -42);
    printf_len = printf("Hexa min négatif: %x\n", -42);
    ft_len = ft_printf("Hexa MAX: %x\n", UINT_MAX);
    printf_len = printf("Hexa MAX: %x\n", UINT_MAX);

    // Test des pourcentages
    printf("\n=== Test des pourcentages ===\n");
    ft_len = ft_printf("Pourcent: %%\n");
    printf_len = printf("Pourcent: %%\n");

    // Tests mixtes simples
    printf("\n=== Tests mixtes ===\n");
    
    printf("Test 1 - Basique:\n");
    ft_len = ft_printf("Char: %c Num: %d\n", 'A', 42);
    printf_len = printf("Char: %c Num: %d\n", 'A', 42);
    printf("Longueurs - ft_printf: %d, printf: %d\n", ft_len, printf_len);
    
    printf("\nTest 2 - Hex et String:\n");
    ft_len = ft_printf("Hex: %x Str: %s\n", 255, "test");
    printf_len = printf("Hex: %x Str: %s\n", 255, "test");
    printf("Longueurs - ft_printf: %d, printf: %d\n", ft_len, printf_len);
    
    printf("\nTest 3 - Unsigned et Percent:\n");
    ft_len = ft_printf("Unsigned: %u %%\n", 4242);
    printf_len = printf("Unsigned: %u %%\n", 4242);
    printf("Longueurs - ft_printf: %d, printf: %d\n", ft_len, printf_len);

    return (0);
}

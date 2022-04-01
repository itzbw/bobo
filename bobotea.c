/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bobotea.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwong <bwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:17:31 by bwong             #+#    #+#             */
/*   Updated: 2022/04/01 13:17:32 by bwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/*
void color (char *s)
{
    char colors [50][50] =
    {
        "\x1B[31m",
        "\x1B[32m",
        "\x1B[33m",
        "\x1B[34m",
        "\x1B[35m",
        "\x1B[36m",
        "\x1B[37m",
    };
    while (*s)
    {
        printf("%c",  *s++);
    }
    
}
*/
int main (int argc, char **argv)
{
    srand(time(NULL)); 
    int r = rand();
    char tea [50][50]=
    {
        "Green Tea",
        "La Rhubarbe à Papa",
        "on n'est pas pressé",
        "Pomme par Magie",
        "La mûre de ma vie",
        "Pêche Miraculeuse",
        "Nuit Tranquille",
        "Hibiscus",
        "Goji",
        "Zen"
        "\0"
    };
    int tea_len = 0;
    while (tea[tea_len][0]) tea_len++;

    printf("bobotea generator, what are you going to drink tonight? 🍵\n");
    sleep(rand() % 5);
    printf("%s", tea[r % (tea_len - 1)]);
    printf("!\n");
}
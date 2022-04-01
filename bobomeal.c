/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bobomeal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwong <bwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:17:17 by bwong             #+#    #+#             */
/*   Updated: 2022/04/01 13:27:51 by bwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main (int argc, char **argv)
{
    srand(time(NULL)); 
    int r = rand();
    char meal [50][50]=
    {
        "Wrap au Thon 🌯",
        "Curry 🍛",
        "Salmon Spinach with Date & Fig 🥙 ",
        "Signature Pasta with Avocado 🍝",
        "Club Sandwich 🥪",
        "Tarte au saumon et épinards 🥧",
        //"Nuit Tranquille",
        //"Hibiscus",
        //"Goji",
        //"Zen"
        "\0"
    };
    int meal_len = 0;
    while (meal[meal_len][0]) meal_len++;

    printf("bobomeal generator, what are you going to eat today? 🍱\n");
    sleep(rand() % 5);
    printf("%s", meal[r % (meal_len - 1)]);
    printf("!\n");
}
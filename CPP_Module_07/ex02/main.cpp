/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:29:57 by eemuston          #+#    #+#             */
/*   Updated: 2024/02/28 12:50:58 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750

// SUBJECT MAIN
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int	main(void)
{
    Array<int> numbers(5);
    Array<char> abc(5);
    

    std::cout << "Filling and overfilling arrays" << std::endl;
    std::cout << std::endl;
    try{
        int i = 0;
        while (i < 5)
        {
            numbers[i] = i;
            i++;
        }
        i = 0;
        while (i < 5)
        {
            std::cout << numbers[i] << " ";
            i++;
        }
        std::cout << std::endl;
        numbers[5] = 5;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try{
        int i = 0;
        char a = 'a';
        while (i < 5)
        {
            abc[i] = a;
            a++;
            i++;
        }
        i = 0;
        while (i < 5)
        {
            std::cout << abc[i] << " ";
            i++;
        }
        std::cout << std::endl;
        abc[5] = 'f';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    std::cout << "********Copying arrays! ******" << std::endl;
    Array<int> num(5);
    Array<int> copy;
    try{
        int i = 0;
        while (i < 5)
        {
            num[i] = i;
            i++;
        }
        i = 0;
        std::cout << "Original: ";
        while (i < 5)
        {
            std::cout << num[i] << " ";
            i++;
        }
        std::cout << std::endl;
        copy = num;
        std::cout << "Copy: ";
        i = 0;
        while (i < 5)
        {
            std::cout << copy[i] << " ";
            i++;
        }
        std::cout << std::endl;
        std::cout << "******** replacing numbers from copy! ******" << std::endl;
        copy[0] = 8;
        copy[1] = 8;
        i = 0;
        std::cout << "Original: ";
        while (i < 5)
        {
            std::cout << num[i] << " ";
            i++;
        }
        std::cout << std::endl;
        std::cout << "Copy: ";
        i = 0;
        while (i < 5)
        {
            std::cout << copy[i] << " ";
            i++;
        }
        std::cout << std::endl;
        std::cout << "******** Overfilling copy ******" << std::endl;
        copy[5] = 5;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
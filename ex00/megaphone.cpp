/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:23:25 by tpeggie           #+#    #+#             */
/*   Updated: 2022/10/08 17:40:03 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    else
    {
        for(int i = 1; i < argc; i++)
        {
            std::string str = argv[i];
            for(int j = 0; j < (int)str.length(); j++)
            {
                char c = toupper(str[j]);
                std::cout << c;
            }
        std::cout << '\n';
        }
    }
}
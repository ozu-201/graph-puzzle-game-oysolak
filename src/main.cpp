//
// Created by ys028599 on 12/14/2023.


#include "main.h"
#include "fstream"
#include "iostream"
#include "Graph.h"
#include <string>
#include <list>

int main(){

    std::fstream dictionary;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;


    std::string threeLetterWords[count3];
    std::string fourLetterWords[count4];
    std::string fiveLetterWords[count5];

    dictionary.open("turkish dictionary.txt" , std::ios::in);{
        std::string line;

        while(getline(dictionary,line)){

            switch (line.length()) {

                case 3:
                    count3++;
                    break;

                case 4:
                    count4++;
                    break;

                case 5:
                    count5++;
                    break;
            }
        }

        dictionary.close();
    }

    array::Graph threeLetterGraph(count3);
    array::Graph fourLetterGraph(count4);
    array::Graph fiveLetterGraph(count5);

    std::fstream dictionary2;

    int a = 0;
    int b = 0;
    int c = 0;

    dictionary2.open("turkish dictionary.txt" , std::ios::in);{
        std::string line;

        while(getline(dictionary2, line)){

            if(line.length() == 3){
                threeLetterWords[a] = line;
                a++;
            }

            if(line.length() == 4){
                fourLetterWords[b] = line;
                b++;
            }

            if(line.length() == 5){
                fiveLetterWords[c] = line;
                c++;
            }
        }
    }

    std::cout << fiveLetterWords[0];

    return 0;
}
//
// Created by ys028599 on 12/14/2023.


#include "main.h"
#include "fstream"
#include "iostream"
#include "Array/Graph/Graph.h"
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

    int newCount3 = 0;
    int newCount4 = 0;
    int newCount5 = 0;

    dictionary2.open("turkish dictionary.txt" , std::ios::in);{
        std::string line;

        while(getline(dictionary2, line)){

            if(line.length() == 3){
                threeLetterGraph.addName(newCount3,line);
                newCount3++;
            }

            if(line.length() == 4){
                fourLetterGraph.addName(newCount4,line);
                newCount4++;
            }

            if(line.length() == 5){
                fiveLetterGraph.addName(newCount5, line);
                newCount5++;
            }
        }
    }

    for(int i = 0; i < newCount3; i++){
        for(int j = 0; j < newCount3; j++){
            int diff = 0;
            for(int k = 0; k < 3; k++){
                if(threeLetterGraph.getNames()[i][k] != threeLetterGraph.getNames()[j][k]){
                    diff++;
                }
                if(diff == 1){
                    threeLetterGraph.addEdge(i,j);
                    threeLetterGraph.addEdge(j,i);
                }
            }
        }
    }

    for(int i = 0; i < newCount4; i++){
        for(int j = 0; j < newCount4; j++){
            int diff = 0;
            for(int k = 0; k < 4; k++){
                if(fourLetterGraph.getNames()[i][k] != fourLetterGraph.getNames()[j][k]){
                    diff++;
                }
                if(diff == 1){
                    fourLetterGraph.addEdge(i,j);
                    fourLetterGraph.addEdge(j,i);
                }
            }
        }
    }

    for(int i = 0; i < newCount5; i++){
        for(int j = 0; j < newCount5; j++){
            int diff = 0;
            for(int k = 0; k < 5; k++){
                if(fiveLetterGraph.getNames()[i][k] != fiveLetterGraph.getNames()[j][k]){
                    diff++;
                }
                if(diff == 1){
                    fiveLetterGraph.addEdge(i,j);
                    fiveLetterGraph.addEdge(j,i);
                }
            }
        }
    }

    dictionary.close();

    /*std::cout<< threeLetterGraph.getNames()[0]<<std::endl;
    std::cout<< threeLetterGraph.getNames()[1]<<std::endl;
    std::cout<< threeLetterGraph.getNames()[2]<<std::endl;
    std::cout<< threeLetterGraph.getNames()[3]<<std::endl;
    std::cout<< threeLetterGraph.getNames()[4]<<std::endl;
    std::cout<< threeLetterGraph.getNames()[5]<<std::endl;*/
    //std::cout<< threeLetterGraph.getEdges()[0];
    fourLetterGraph.breadthFirstSearch("ally" , "abel");



    return 0;
}
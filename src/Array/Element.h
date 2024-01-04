//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#ifndef DATASTRUCTURES_CPP_ELEMENT_H
#define DATASTRUCTURES_CPP_ELEMENT_H

#include <string>

namespace array {

    class Element {
    private:
        std::string name;
    public:
        Element();

        explicit Element(std::string name);

        std::string getName();
    };

}
#endif //DATASTRUCTURES_CPP_ELEMENT_H

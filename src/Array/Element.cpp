//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#include "Element.h"

namespace array {

    Element::Element(std::string name) {
        this->name = name;
    }

    std::string Element::getName() {
        return name;
    }

    Element::Element() {

    }

}
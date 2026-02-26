#include "item.h"

// Empty Item
Item::Item() {
    name = "";
    description = "";
    traitType = "";
    value = 0;
}

//Full Item
Item::Item(string n, string d, string t, int v) {
    name = n;
    description = d;
    traitType = t;
    value = v;
}
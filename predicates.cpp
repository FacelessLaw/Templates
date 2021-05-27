#ifndef __PREDICATES_CPP__
#define __PREDICATES_CPP__
#include <algorithm>

class Predicate1 {
public:
    template<typename T>
    bool operator ()(const T& el) const {
        T temp = T();
        if (temp == el) {
            return true;
        }
        return false;
    }
};

class Predicate2 {
public:
    template<typename T>
    bool operator ()(const T& el) const {
        T temp = T();
        if (temp == el) {
            return false;
        }
        return true;
    }
};

class Predicate_comparator_greater {
public:
    template<typename T>
    bool operator ()(const T &el1, const T &el2) const {
        return el1 > el2;
    }
};

#endif
#ifndef __TEMPLATES_CPP__
#define __TEMPLATES_CPP__

#include <iostream>
#include "predicates.cpp"

template<typename T, class P>
bool all_of(const T &src, const P &predicate) {
    bool _all_of = true;
    for (auto it = src.begin(); it != src.end(); ++it) {
        if (!predicate(*it))
            _all_of = false;
    }
    return _all_of;
}

template<typename T, class P>
bool any_of(const T &src, const P &predicate) {
    bool _any_of = false;
    for (auto it = src.begin(); it != src.end(); ++it) {
        if (predicate(*it))
            _any_of = true;
    }
    return _any_of;
}

template<typename T, class P>
bool none_of(const T &src, const P &predicate) {
    bool _none_of = true;
    for (auto it = src.begin(); it != src.end(); ++it) {
        if (predicate(*it))
            _none_of = false;
    }
    return _none_of;
}

template<typename T, class P>
bool one_of(const T &src, const P &predicate) {
    bool _one_of = false;
    for (auto it = src.begin(); it != src.end(); ++it) {
        if (predicate(*it) && !_one_of)
            _one_of = true;
        else if (predicate(*it) && _one_of) {
            _one_of = false;
            break;
        }
    }
    return _one_of;
}

template<typename T, class P>
bool is_sorted(const T &src, const P &predicate) {
    bool _is_sorted = true;
    auto prev = src.begin();
    for (auto it = src.begin(); it != src.end(); ++it) {
        if (it == src.begin())
            continue;
        
        if (!predicate(*it, *prev))
            _is_sorted = false;
        ++prev;
    }
    return _is_sorted;
}

template<typename T, class P>
bool is_partitioned(const T &src, const P &predicate) {
    auto first = src.begin();
    auto last = src.end();
    while (first!=last && predicate(*first)) {
        ++first;
    }
    while (first!=last) {
        if (predicate(*first))
            return false;
        ++first;
    }
    return true;
}

template<typename T, typename K>
auto find_not(const T &src, const K &key) {
    auto res = src.end();
    for (auto it = src.begin(); it != src.end(); ++it) {
        if (*it != key) {
            res = it;
            break;
        }
    }
    return res;
}

template<typename T, typename K>
auto find_backward(const T &src, const K &key) {
    auto tmp = src.end();
    auto res = src.end();
    while (true) {
        if (*tmp == key) {
            res = tmp;
            break;
        }
        if (tmp == src.begin()) {
            break;
        }
        --tmp;
    }
    return res;
}

template<typename T, class P>
bool is_palindrome(const T &src, const P &predicate) {
    bool _is_palindrome = true;
    auto first = src.begin();
    auto second = src.end();
    int sz = src.size();
    int it = 0;
    
    if (sz != 0)
        --second;

    while(it < sz / 2) {
        if (predicate(*first) != predicate(*second)) {
            _is_palindrome = false;
            break;
        }
        ++first;
        --second;
        ++it;
    }

    return _is_palindrome;
}

#endif
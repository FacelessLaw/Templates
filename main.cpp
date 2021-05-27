#include <iostream>
#include <set>
#include <vector>

#include "r_vector.hpp"
#include "templates.cpp"

const int SIZE = 10;

int main()
{
    std::vector<int> a(SIZE);
    int key = SIZE;

    std::cout << "Working whith vector of integers" << std::endl;
    std::cout << "*-----------------------------------------------------------*" << std::endl;
    std::cout << "Results before assigning the elemets of container" << std::endl;
    std::cout << "The result of all_of:" << std::endl;
    std::cout << all_of(a, Predicate1()) << std::endl;
    std::cout << all_of(a, Predicate2()) << std::endl;
    std::cout << "The result of any_of:" << std::endl;
    std::cout << any_of(a, Predicate1()) << std::endl;
    std::cout << any_of(a, Predicate2()) << std::endl;
    std::cout << "The result of none_of:" << std::endl;
    std::cout << none_of(a, Predicate1()) << std::endl;
    std::cout << none_of(a, Predicate2()) << std::endl;
    std::cout << "The result of one_of:" << std::endl;
    std::cout << one_of(a, Predicate1()) << std::endl;
    std::cout << one_of(a, Predicate2()) << std::endl;
    std::cout << "The result of is_sorted:" << std::endl;
    std::cout << is_sorted(a, Predicate_comparator_greater()) << std::endl;
    std::cout << "The result of is_partitioned:" << std::endl;
    std::cout << is_partitioned(a, Predicate1()) << std::endl;
    std::cout << is_partitioned(a, Predicate2()) << std::endl;
    std::cout << "The result of find_not for key:" << std::endl;
    std::cout << a[find_not(a, key) - a.begin()] << std::endl;
    std::cout << "The result of find_backward for key:" << std::endl;
    std::cout << a[find_backward(a, key) - a.begin()] << std::endl;
    std::cout << "The result of is_palindrome" << std::endl;
    std::cout << is_palindrome(a, Predicate1()) << std::endl;
    std::cout << is_palindrome(a, Predicate2()) << std::endl;

    for (int i = 0; i < SIZE - 1; ++i) {
        a[i] = i + 1;
    }

    std::cout << "*-----------------------------------------------------------*" << std::endl;
    std::cout << "Results before assigning almost all the elemets of container" << std::endl;
    std::cout << "The result of all_of:" << std::endl;
    std::cout << all_of(a, Predicate1()) << std::endl;
    std::cout << all_of(a, Predicate2()) << std::endl;
    std::cout << "The result of any_of:" << std::endl;
    std::cout << any_of(a, Predicate1()) << std::endl;
    std::cout << any_of(a, Predicate2()) << std::endl;
    std::cout << "The result of none_of:" << std::endl;
    std::cout << none_of(a, Predicate1()) << std::endl;
    std::cout << none_of(a, Predicate2()) << std::endl;
    std::cout << "The result of one_of:" << std::endl;
    std::cout << one_of(a, Predicate1()) << std::endl;
    std::cout << one_of(a, Predicate2()) << std::endl;
    std::cout << "The result of is_sorted:" << std::endl;
    std::cout << is_sorted(a, Predicate_comparator_greater()) << std::endl;
    std::cout << "The result of is_partitioned:" << std::endl;
    std::cout << is_partitioned(a, Predicate1()) << std::endl;
    std::cout << is_partitioned(a, Predicate2()) << std::endl;
    std::cout << "The result of find_not for key:" << std::endl;
    std::cout << a[find_not(a, key) - a.begin()] << std::endl;
    std::cout << "The result of find_backward for key:" << std::endl;
    std::cout << a[find_backward(a, key) - a.begin()] << std::endl;
    std::cout << "The result of is_palindrome" << std::endl;
    std::cout << is_palindrome(a, Predicate1()) << std::endl;
    std::cout << is_palindrome(a, Predicate2()) << std::endl;

    for (int i = 0; i < SIZE; ++i) {
        a[i] = i + 1;
    }

    std::cout << "*-----------------------------------------------------------*" << std::endl;
    std::cout << "Results after assigning all the elemets of container" << std::endl;
    std::cout << "The result of all_of:" << std::endl;
    std::cout << all_of(a, Predicate1()) << std::endl;
    std::cout << all_of(a, Predicate2()) << std::endl;
    std::cout << "The result of any_of:" << std::endl;
    std::cout << any_of(a, Predicate1()) << std::endl;
    std::cout << any_of(a, Predicate2()) << std::endl;
    std::cout << "The result of none_of:" << std::endl;
    std::cout << none_of(a, Predicate1()) << std::endl;
    std::cout << none_of(a, Predicate2()) << std::endl;
    std::cout << "The result of one_of:" << std::endl;
    std::cout << one_of(a, Predicate1()) << std::endl;
    std::cout << one_of(a, Predicate2()) << std::endl;
    std::cout << "The result of is_sorted:" << std::endl;
    std::cout << is_sorted(a, Predicate_comparator_greater()) << std::endl;
    std::cout << "The result of is_partitioned:" << std::endl;
    std::cout << is_partitioned(a, Predicate1()) << std::endl;
    std::cout << is_partitioned(a, Predicate2()) << std::endl;
    std::cout << "The result of find_not for key:" << std::endl;
    std::cout << a[find_not(a, key) - a.begin()] << std::endl;
    std::cout << "The result of find_backward for key:" << std::endl;
    std::cout << a[find_backward(a, key) - a.begin()] << std::endl;
    std::cout << "The result of is_palindrome" << std::endl;
    std::cout << is_palindrome(a, Predicate1()) << std::endl;
    std::cout << is_palindrome(a, Predicate2()) << std::endl;
    std::cout << "*-----------------------------------------------------------*" << std::endl;
    std::cout << std::endl;

    std::set<R_VECTOR> b;
    R_VECTOR nkey = R_VECTOR(SIZE, 0);

    std::cout << "Working whith set of radius-vectors" << std::endl;
    std::cout << "*-----------------------------------------------------------*" << std::endl;
    std::cout << "Results before assigning the elemets of container" << std::endl;
    std::cout << "The result of all_of:" << std::endl;
    std::cout << all_of(b, Predicate1()) << std::endl;
    std::cout << all_of(b, Predicate2()) << std::endl;
    std::cout << "The result of any_of:" << std::endl;
    std::cout << any_of(b, Predicate1()) << std::endl;
    std::cout << any_of(b, Predicate2()) << std::endl;
    std::cout << "The result of none_of:" << std::endl;
    std::cout << none_of(b, Predicate1()) << std::endl;
    std::cout << none_of(b, Predicate2()) << std::endl;
    std::cout << "The result of one_of:" << std::endl;
    std::cout << one_of(b, Predicate1()) << std::endl;
    std::cout << one_of(b, Predicate2()) << std::endl;
    std::cout << "The result of is_sorted:" << std::endl;
    std::cout << is_sorted(b, Predicate_comparator_greater()) << std::endl;
    std::cout << "The result of is_partitioned:" << std::endl;
    std::cout << is_partitioned(b, Predicate1()) << std::endl;
    std::cout << is_partitioned(b, Predicate2()) << std::endl;
    std::cout << "The result of find_not for key:" << std::endl;
    std::cout << (*find_not(b, key)).get_norm() << ' ' 
              << (*find_not(b, key)).get_angle()<< std::endl;
    std::cout << "The result of find_backward for key:" << std::endl;
    std::cout << (*find_backward(b, key)).get_norm() << ' ' 
              << (*find_backward(b, key)).get_angle()<< std::endl;
    std::cout << "The result of is_palindrome" << std::endl;
    std::cout << is_palindrome(b, Predicate1()) << std::endl;
    std::cout << is_palindrome(b, Predicate2()) << std::endl;

    for (int i = 0; i < SIZE; ++i) {
        b.insert(R_VECTOR(i + 1));
    }

    std::cout << "*-----------------------------------------------------------*" << std::endl;
    std::cout << "Results after assigning all the elemets of container" << std::endl;
    std::cout << "The result of all_of:" << std::endl;
    std::cout << all_of(b, Predicate1()) << std::endl;
    std::cout << all_of(b, Predicate2()) << std::endl;
    std::cout << "The result of any_of:" << std::endl;
    std::cout << any_of(b, Predicate1()) << std::endl;
    std::cout << any_of(b, Predicate2()) << std::endl;
    std::cout << "The result of none_of:" << std::endl;
    std::cout << none_of(b, Predicate1()) << std::endl;
    std::cout << none_of(b, Predicate2()) << std::endl;
    std::cout << "The result of one_of:" << std::endl;
    std::cout << one_of(b, Predicate1()) << std::endl;
    std::cout << one_of(b, Predicate2()) << std::endl;
    std::cout << "The result of is_sorted:" << std::endl;
    std::cout << is_sorted(b, Predicate_comparator_greater()) << std::endl;
    std::cout << "The result of is_partitioned:" << std::endl;
    std::cout << is_partitioned(b, Predicate1()) << std::endl;
    std::cout << is_partitioned(b, Predicate2()) << std::endl;
    std::cout << "The result of find_not for key:" << std::endl;
    std::cout << (*find_not(b, key)).get_norm() << ' ' 
              << (*find_not(b, key)).get_angle()<< std::endl;
    std::cout << "The result of find_backward for key:" << std::endl;
    std::cout << (*find_backward(b, key)).get_norm() << ' ' 
              << (*find_backward(b, key)).get_angle()<< std::endl;
    std::cout << "The result of is_palindrome" << std::endl;
    std::cout << is_palindrome(b, Predicate1()) << std::endl;
    std::cout << is_palindrome(b, Predicate2()) << std::endl;
    std::cout << "*-----------------------------------------------------------*" << std::endl;

    return 0;
}
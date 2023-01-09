#ifndef PATTERNS_STL_STRATEGY_H
#define PATTERNS_STL_STRATEGY_H

#include <vector>
#include <algorithm>
#include <numeric>

void stl_strategy() {
    // sort algorithm
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::sort(v.begin(), v.end(), std::greater<>());

    std::vector<int> numbers = {1, 2, 3, 4, 5};
    // хотим посчитать сумму чисел
    std::accumulate(numbers.cbegin(), numbers.cend(),
                    0,
                    std::plus{} // <-- СТРАТЕГИЯ: "складывать числа"
    );
    // хотим посчитать произведение чисел
    std::accumulate(numbers.cbegin(), numbers.cend(),
                    1,
                    std::multiplies{} // <-- СТРАТЕГИЯ: "умножать числа"
    );
}

#endif //PATTERNS_STL_STRATEGY_H

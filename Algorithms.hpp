#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include <vector>

/* Функция быстрой сортировки */
// Входные параметры:
// vec_in - входной вектор для которого необходима сортировка
// left   - индекс элемента с которого необходимо начать сортировку
// right  - индекс элемента в котором необходимо закончить сортировку
void QuickSort(std::vector<int> &vec_in, size_t left, size_t right);

#endif
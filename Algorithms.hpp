#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include <vector>

/* Функция пузырьковой сортировки */
// Входные параметры:
  // vec_in - входной вектор для которого необходима сортировка
template <class T = int>
void BubbleSort(std::vector<T>& vec_in);

/* Функция шейкерной сортировки (сортировка перемешиванием) */
// Входные параметры:
  // vec_in - входной вектор для которого необходима сортировка
template <class T = int>
void CocktailShakerSort(std::vector<T>& vec_in);

/* Функция быстрой сортировки */
// Входные параметры:
  // vec_in - входной вектор для которого необходима сортировка
  // left   - индекс элемента с которого необходимо начать сортировку
  // right  - индекс элемента в котором необходимо закончить сортировку
template <class T = int>
void QuickSort(std::vector<T>& vec_in, size_t left, size_t right);

#endif
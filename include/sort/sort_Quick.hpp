#ifndef SORT_QUICK_HPP
#define SORT_QUICK_HPP

#include <vector>

// Входные параметры:
  // vec_in - входной вектор для которого необходима сортировка
  // left   - индекс элемента с которого необходимо начать сортировку
  // right  - индекс элемента в котором необходимо закончить сортировку
template <class T = int>
void QuickSort(std::vector<T>& vec_in, size_t left, size_t right)
{
  T mid = vec_in[(right + left) / 2]; // Центральынй элемент в массиве
  size_t left_local = left;           // Локальный индекс элемента слева относительно центрального
  size_t right_local = right;         // Локальный индекс элемента справа относительно центрального
  T temp = 0;                         // Вспомогательная временная переменная для перестановки элементов

  // Основной цикл
  while (left_local <= right_local)
  {
    // Поиск элемента слева относительно центра
    while (vec_in[left_local] < mid)
    {
      left_local++;
    }
    // Поиск элемента справа относительно справа
    while (vec_in[right_local] > mid)
    {
      right_local--;
    }
    // Если найденные элементы стоят на разных позициях
    if (left_local <= right_local)
    {
      temp = vec_in[left_local];
      vec_in[left_local] = vec_in[right_local];
      vec_in[right_local] = temp;
      left_local++;
      right_local--;
    }
  }
  // Условие для вызова сортировки подвекторов слева относительно центрального элемента
  if (right_local > left)
  {
    QuickSort(vec_in, left, right_local);
  }
  // Условие для вызова сортировки подветоров справа относительно центрального элемента
  if (left_local < right)
  {
    QuickSort(vec_in, left_local, right);
  }
}

#endif // SORT_QUICK_HPP

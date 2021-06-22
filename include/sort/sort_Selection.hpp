#ifndef SORT_SELECTION_HPP
#define SORT_SELECTION_HPP

#include <vector>

/* Функция сортировки выбором */
// Входные параметры:
  // vec_in - входной вектор для которого необходима сортировка
template <class T = int> 
void SelectionSort(std::vector<T>& vec_in)
{
  size_t ind_min; // Переменная для хранения индекса минимального элемента
  T temp;         // Переменная для хранения промежуточного значения для перестановки
  // Основной цикл перебора
  for (size_t ind_m = 0; ind_m < vec_in.size(); ind_m++)
  {
    // Сначала минимальным элементом считаем первый элемент
    ind_min = ind_m;
    // Второй цикл перебора
    for (size_t ind_s = ind_m+1; ind_s < vec_in.size(); ind_s++)
    {
      // Условие выбора минимального элемента
      if (vec_in[ind_min] > vec_in[ind_s])
      {
        ind_min = ind_s;
      }
    }
    // Если индекс минимального элемента не равен текущему индексу, тогда меняем местами элементы
    if (ind_min != ind_m)
    {
      temp = vec_in[ind_min];
      vec_in[ind_min] = vec_in[ind_m];
      vec_in[ind_m]   = temp; 
    }
  }
}

#endif // SORT_SELECTION_HPP

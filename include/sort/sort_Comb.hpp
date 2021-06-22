#ifndef SORT_COMB_HPP
#define SORT_COMB_HPP

#include <vector>

/* Функция сортировки расческой */
// Входные параметры:
  // vec_in - входной вектор для которого необходима сортировка
template <class T = int>
void CombSort(std::vector<T>& vec_in)
{
  const float opt_fact = 1.247;   // Оптимальное значение фактора уменьшения
  size_t right = vec_in.size()-1; // Второй элемнт для сравнения
  T temp = 0;                     // Вспомогательная переменная для перемещения элементов

  // Основной цикл
  while (right >= 1)
  {
    size_t ind_two = right;
    // Цикл для сравнения элементов
    for (size_t ind_one = 0; ind_two < vec_in.size(); ind_one++, ind_two++)
    {
      if (vec_in[ind_one] > vec_in[ind_two])
      {
        temp = vec_in[ind_one];
        vec_in[ind_one] = vec_in[ind_two];
        vec_in[ind_two] = temp;
      }
    }
    // Получаем новый второй элемент путем
    right /= opt_fact;
  }
}

#endif // SORT_COMB_HPP
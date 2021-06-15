#include "../Algorithms.hpp"

/* Функция пузырьковой сортировки */
// Входные параметры:
  // vec_in - входной вектор для которого необходима сортировка
template <class T = int>
void BubbleSort(std::vector<T>& vec_in)
{
  size_t size_vec = vec_in.size(); // Размер вектора
  T temp;                          // Вспомогательная переменная для перемещения элементов
  // Цикл прохода вектора
  for (size_t i = 0; i < size_vec; i++)
  {
    for (size_t j = size_vec-1; j > i; j--)
    {
      if (vec_in[j] < vec_in[j-1])
      {
        temp = vec_in[j-1];
        vec_in[j-1] = vec_in[j];
        vec_in[j] = temp;
      }
    }
  }
}
#include "../Algorithms.hpp"

/* Функция шейкерной сортировки (сортировка перемешиванием) */
// Входные параметры:
  // vec_in - входной вектор для которого необходима сортировка
template <class T = int>
void CocktailShakerSort(std::vector<T>& vec_in)
{
  size_t size_vec = vec_in.size(); // Размер вектора
  size_t left = 0;                 // Левая граница
  size_t right = size_vec-1;       // Правая граница
  T temp;                          // Вспомогательная переменная для перемещения элементов
  // Основной цикл
  while (right > left)
  {
    // Цикл прохода с конца в начало
    for (size_t j = right; j > left; j--)
    {
      if (vec_in[j] < vec_in[j-1])
      {
        temp = vec_in[j-1];
        vec_in[j-1] = vec_in[j];
        vec_in[j] = temp;
      }
    }
    // Увеличиваем левую границу
    left++;
    // Цикл прохода от начала до конца
    for (size_t j = left; j < right; j++)
    {
      if (vec_in[j] > vec_in[j+1])
      {
        temp = vec_in[j+1];
        vec_in[j+1] = vec_in[j];
        vec_in[j] = temp;
      }
    }
    // Уменьшаем правую границу
    right--;
  }
}


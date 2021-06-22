#ifndef SORT_INSERTION_HPP
#define SORT_INSERTION_HPP

#include <vector>

/* Функция сортировки вставками */
// Входные параметры:
  // vec_in - входной вектор для которого необходима сортировка
template <class T = int>
void InsertionSort(std::vector<T>& vec_in)
{
  std::vector<T> vec_sort;                  // Отсортированный вектор
  typename std::vector<T>::iterator it_ins; // Итератор для вставки
  // Основной цикл
  for (typename std::vector<T>::iterator it_in = vec_in.begin(); it_in != vec_in.end(); it_in++)
  {
    // Eсли все элементы в отсортированном векторе окажутся меньше выбранного,
    // чтобы выделенный элемент вставился в конец
    it_ins = vec_sort.end();
    // Цикл перебора отсортированного вектора
    for (typename std::vector<T>::iterator it_s = vec_sort.begin(); it_s != vec_sort.end(); it_s++)
    {
      // Условие вставки элемента
      if (*it_s > *it_in)
      {
        // Удаляем элемент из входного массива
        it_ins = it_s;
        break;
      }
    }
    // Вставляем элемент в отсортированный вектор
    vec_sort.insert(it_ins, *it_in);
    // Удаляем элемент из входного вектора
    vec_in.erase(it_in);
    // Так как удалили вектор и итератор переместился на след. элемент необходимо его декрементировать
    it_in--;
  }
  vec_in = vec_sort;
}



#endif // SORT_INSERTION_HPP
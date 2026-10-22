// Завдання 6.4 (варіант 30). Динамічний масив цілих чисел.

int  Abs(const int x);                                                      // модуль числа
void Create(int* a, const int size, const int Low, const int High, int i);  // заповнення випадковими числами
void Print(const int* a, const int size, int i);                            // виведення масиву в рядок
int  MinAbs(const int* a, const int size, int i);                           // мінімальний за модулем елемент
int  FindFirstZero(const int* a, const int size, int i);                    // індекс першого нуля або -1
int  SumAbs(const int* a, const int size, int i);                           // сума модулів від індексу i до кінця
void CopyStep2(const int* a, const int size, int i, int* b, int& j);        // копіює кожен 2-й елемент a (з i) у b
void CopyBack(const int* b, int* a, const int size, int i);                 // копіює b назад в a
void Rearrange(int* a, const int size);                                     // парні позиції – у першу половину, непарні – у другу

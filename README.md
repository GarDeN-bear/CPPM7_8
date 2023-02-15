# Задача 1. Простое исключение
В этом задании вы попробуете выбросить и обработать исключение.

Создайте функцию `int function(std::string str, int forbidden_length)`. Эта функция должна возвращать длину переданной строки, если эта длина не равна значению переданного параметра `forbidden_length`. В противном случае она должна выбрасывать исключение `bad_length`.

Для проверки функции организуйте работу с пользователем. В начале задайте запретную длину, а затем считывайте пользовательские строки и выводите их длину до тех пор, пока пользователь не введёт строку запретной длины. После этого сообщите ему, что он ввёл строку запретной длины, и завершите программу.

### Пример работы программы
#### Консоль
```
Введите запретную длину: 5
Введите слово: Привет
Длина слова "Привет" равна 6
Введите слово: мир
Длина слова "мир" равна 3
Введите слово: пирог
Вы ввели слово запретной длины! До свидания
```

#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>

Для вычисления длины строки используйте метод класса `std::string` — `length`.

Для создания исключения используйте ключевое слово `throw`.

Для ожидания исключения используйте ключевое слово `try`.

Для обработки исключения используйте ключевое слово `catch`.

</details>

# Задача 2. Исключения в конструкторах
В этом задании вы запретите создавать экземпляры классов геометрических фигур с неправильными данными.

Создайте собственный класс исключения для ошибки создания геометрической фигуры. Подумайте, от какого типа его унаследовать, и не забудьте поместить новый класс в отдельную пару файлов.

Возьмите иерархию классов из [предыдущего задания](../../06/03). Теперь при создании экземпляров классов вам нужно проверять аргументы, которые поступают на вход конструктору. Если аргументы не соответствуют ограничениям, объект не должен быть создан, а на консоль должно быть выведено соответствующее сообщение. Причина ошибки должна быть сформулирована на уровне конструктора и выведена на экран при обработке ошибок.

Ограничения:
 - треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180); 
 - прямоугольный треугольник (угол `C` всегда равен 90);
 - равнобедренный треугольник (стороны `a` и `c` равны, углы `A` и `C` равны);
 - равносторонний треугольник (все стороны равны, все углы равны 60);
 - четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
 - прямоугольник (стороны `a`,`c` и `b`,`d` попарно равны, все углы равны 90);
 - квадрат (все стороны равны, все углы равны 90);
 - параллелограмм (стороны `a`,`c` и `b`,`d` попарно равны, углы `A`,`C` и `B`,`D` попарно равны);
 - ромб (все стороны равны, углы `A`,`C` и `B`,`D` попарно равны).

Для проверки попробуйте создать разные геометрические фигуры — правильные и неправильные. В случае успешного создания выводите на экран сообщение об успешном создании и параметры фигуры. В случае, если создание не удалось, выведите причину ошибки.

### Пример работы программы
#### Консоль
```
Прямоугольный треугольник (стороны 3, 4, 5; углы 30, 60, 90) создан
Ошибка создания фигуры. Причина: сумма углов не равна 180
```

#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>

Класс исключения будет разумно унаследовать от `domain_error`.

Для предотвращения создания объекта выбрасывайте исключение, если параметры не соответствуют ограничениям.

Не забудьте при создании исключения указать причину ошибки. Для этого вам надо создать в вашем классе исключения конструктор, принимающий строку и передающий её конструктору родителя.

Для создания исключения используйте ключевое слово `throw`.

Для ожидания исключения используйте ключевое слово `try`.

Для обработки исключения используйте ключевое слово `catch`.

</details>
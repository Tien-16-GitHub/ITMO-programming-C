<!-- Copy and paste the converted output. -->

<!-----
NEW: Check the "Suppress top comment" option to remove this info from the output.

Conversion time: 1.902 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β29
* Mon Mar 15 2021 03:45:13 GMT-0700 (PDT)
* Source doc: Новый документ
* Tables are currently converted to HTML tables.
----->


# Лабораторная работа 11. Использование заголовочных файлов

Задание

Разработать структуру, описывающую геометрическую фигуру на плоскости с помощью её координат, а также функции расчёта площади этой геометрической фигуры и её периметра (длины окружности). Дополнительно разработать функцию, позволяющую создавать структуру моделируемой геометрической фигуры на основании данных, введённых с консоли (самостоятельно определить формат этих вводимых данных). Вид геометрической фигуры и набор её рассчитываемых параметров определяются по номеру варианта.

Разместить программный код функций, рассчитывающих параметры фигуры в отдельном файле исходного текста. Создать заголовочный файл, позволяющий вызывать функции созданного файла исходного текса из других файлов. Разместить в созданном заголовочном файле структуру, описывающую моделируемую геометрическую фигуру. Предусмотреть в созданном заголовочном файле защиту от повторного включения с помощью Include Guard.

Создать файл исходного текста для размещения в нём точки входа. Разработать программный код функции main, создающий экземпляр структуры моделируемой фигуры, а также осуществляющий вызовы созданных функций расчёта параметров этой фигуры. Входные данные для моделирования фигуры вводить с консоли, результаты расчёта параметров фигуры также выводить на консоль.

Варианты геометрических фигур



1. Прямоугольник.
2. Квадрат.
3. Окружность (круг).
4. Параллелограмм.
5. Ромб.
6. Произвольный треугольник.
7. Правильный выпуклый пятиугольник.
8. Прямоугольный треугольник.
9. Равнобедренный треугольник.
10. Кольцо (фигура, созданная пересечением двух концентрических кругов).

Варианты заданий


<table>
  <tr>
   <td><strong>№ варианта</strong>
   </td>
   <td><strong>Геометрическая фигура</strong>
   </td>
   <td><strong>Расчёт периметра/длины</strong>
   </td>
   <td><strong>Расчёт площади</strong>
   </td>
   <td><strong>Создание структуры по данным с консоли</strong>
   </td>
  </tr>
  <tr>
   <td><strong>1</strong>
   </td>
   <td>1
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>2</strong>
   </td>
   <td>2
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>3</strong>
   </td>
   <td>3
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>4</strong>
   </td>
   <td>4
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>5</strong>
   </td>
   <td>5
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>6</strong>
   </td>
   <td>6
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>7</strong>
   </td>
   <td>7
   </td>
   <td>×
   </td>
   <td>
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>8</strong>
   </td>
   <td>8
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>9</strong>
   </td>
   <td>9
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>10</strong>
   </td>
   <td>10
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>11</strong>
   </td>
   <td>1
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>12</strong>
   </td>
   <td>2
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>13</strong>
   </td>
   <td>3
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>14</strong>
   </td>
   <td>4
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>15</strong>
   </td>
   <td>5
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>16</strong>
   </td>
   <td>6
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>17</strong>
   </td>
   <td>7
   </td>
   <td>×
   </td>
   <td>
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>18</strong>
   </td>
   <td>8
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>19</strong>
   </td>
   <td>9
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>20</strong>
   </td>
   <td>10
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>21</strong>
   </td>
   <td>1
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>22</strong>
   </td>
   <td>2
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>23</strong>
   </td>
   <td>3
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>24</strong>
   </td>
   <td>4
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>25</strong>
   </td>
   <td>5
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>26</strong>
   </td>
   <td>6
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>27</strong>
   </td>
   <td>7
   </td>
   <td>×
   </td>
   <td>
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>28</strong>
   </td>
   <td>8
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>×
   </td>
  </tr>
  <tr>
   <td><strong>29</strong>
   </td>
   <td>9
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
  <tr>
   <td><strong>30</strong>
   </td>
   <td>10
   </td>
   <td>×
   </td>
   <td>×
   </td>
   <td>
   </td>
  </tr>
</table>


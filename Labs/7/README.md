<!-- Output copied to clipboard! -->

<!-----
NEW: Check the "Suppress top comment" option to remove this info from the output.

Conversion time: 1.64 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β29
* Mon Mar 15 2021 03:26:56 GMT-0700 (PDT)
* Source doc: Новый документ
* Tables are currently converted to HTML tables.
----->


# Лабораторная работа 7. Типы данных, определяемые пользователем

Задания:



1. Использовать перечислимый тип для хранения названий дней недели (месяцев, названий организационно-правовых форм предприятий и т.п.). Вывести на консоль значение целого числа, соответствующее указанному в варианте задания элементу перечисления.

    Варианты перечислений:

    1. Дни недели. Отобразить: понедельник.
    2. Месяцы. Отобразить: июль.
    3. Названия организационно-правовых форм предприятий (ЗАО, ООО, ИП и т.п.). Отобразить: ООО.
    4. Типы автомобилей (легковой, грузовой, автобус, гоночный и т.п.). Отобразить: автобус.
    5. Виды музыкальных стилей (классика, поп, рок, рэп, нью-эйдж, электроника и т.п.). Отобразить: рок.
    6. Виды печатных изданий (книга, журнал, газета и т.п.). Отобразить: газета.
    7. Виды кондитерских изделий (торт, пирожное, мороженое, конфета и т.п.). Отобразить: конфета.
    8. Виды электрических ламп (накаливания, дневного света, галогенные и т.п.). Отобразить: галогенная лампа.
    9. Виды встраиваемых операционных систем (Symbian, Embedded Linux, Windows CE. VxWorks, QNX и т.п.). Отобразить: Symbian.
    10. Виды красок (акварельная, масляная, водоэмульсионная и т.п.).
    2. Разработать структуру, описывающую координаты и другие требуемые параметры простейшей геометрической фигуры (отрезок прямой, прямоугольник, квадрат, треугольник, окружность) с расчётом одного из её параметров (периметра, площади, длины окружности и т.п.). Исходные данные для расчёта указать в тексте программы. Результат расчёта вывести на консоль.

    Варианты структур:

    1. Отрезок прямой.
    2. Прямоугольник.
    3. Квадрат.
    4. Треугольник.
    5. Окружность.
    3. Разработать битовое поле, описывающее состояния элементов прибора. Ввести с консоли число в 16-ричной системе счисления, преобразовать его в битовое поле за счёт использования объединения. Вывести на консоль состояния элементов прибора, соответствующие состоянию битов во введённом числе.

    Варианты приборов и их элементов:

    1. Клавиатура. Элементы: NumLock вкл/выкл, CapsLock вкл/выкл, ScrollLock вкл/выкл.
    2. ADSL модем. Элементы: DSL вкл/выкл, PPP вкл/выкл, Link вкл/выкл.
    3. MP3 проигрыватель-диктофон. Элементы: воспроизведение вкл/выкл, пауза вкл/выкл, запись вкл/выкл.
    4. Лазерный принтер. Элементы: готов вкл/выкл, мало тонера вкл/выкл, повреждён барабан вкл/выкл, нет бумаги вкл/выкл.
    5. Card-reader. Элементы: включён, активна карта SD, активна карта Compact Flash, активна карта MemoyStick.

Варианты заданий


<table>
  <tr>
   <td><strong>№ варианта</strong>
   </td>
   <td><strong>Вариант перечисления</strong>
   </td>
   <td><strong>Вариант структуры</strong>
   </td>
   <td><strong>Вариант битового поля</strong>
   </td>
  </tr>
  <tr>
   <td><strong>1</strong>
   </td>
   <td>1
   </td>
   <td>2
   </td>
   <td>3
   </td>
  </tr>
  <tr>
   <td><strong>2</strong>
   </td>
   <td>2
   </td>
   <td>3
   </td>
   <td>4
   </td>
  </tr>
  <tr>
   <td><strong>3</strong>
   </td>
   <td>3
   </td>
   <td>4
   </td>
   <td>5
   </td>
  </tr>
  <tr>
   <td><strong>4</strong>
   </td>
   <td>4
   </td>
   <td>5
   </td>
   <td>1
   </td>
  </tr>
  <tr>
   <td><strong>5</strong>
   </td>
   <td>5
   </td>
   <td>1
   </td>
   <td>2
   </td>
  </tr>
  <tr>
   <td><strong>6</strong>
   </td>
   <td>6
   </td>
   <td>2
   </td>
   <td>3
   </td>
  </tr>
  <tr>
   <td><strong>7</strong>
   </td>
   <td>7
   </td>
   <td>3
   </td>
   <td>4
   </td>
  </tr>
  <tr>
   <td><strong>8</strong>
   </td>
   <td>8
   </td>
   <td>4
   </td>
   <td>5
   </td>
  </tr>
  <tr>
   <td><strong>9</strong>
   </td>
   <td>9
   </td>
   <td>5
   </td>
   <td>1
   </td>
  </tr>
  <tr>
   <td><strong>10</strong>
   </td>
   <td>10
   </td>
   <td>1
   </td>
   <td>3
   </td>
  </tr>
  <tr>
   <td><strong>11</strong>
   </td>
   <td>1
   </td>
   <td>3
   </td>
   <td>1
   </td>
  </tr>
  <tr>
   <td><strong>12</strong>
   </td>
   <td>2
   </td>
   <td>1
   </td>
   <td>2
   </td>
  </tr>
  <tr>
   <td><strong>13</strong>
   </td>
   <td>3
   </td>
   <td>2
   </td>
   <td>3
   </td>
  </tr>
  <tr>
   <td><strong>14</strong>
   </td>
   <td>4
   </td>
   <td>3
   </td>
   <td>4
   </td>
  </tr>
  <tr>
   <td><strong>15</strong>
   </td>
   <td>5
   </td>
   <td>4
   </td>
   <td>5
   </td>
  </tr>
  <tr>
   <td><strong>16</strong>
   </td>
   <td>6
   </td>
   <td>5
   </td>
   <td>1
   </td>
  </tr>
  <tr>
   <td><strong>17</strong>
   </td>
   <td>7
   </td>
   <td>1
   </td>
   <td>2
   </td>
  </tr>
  <tr>
   <td><strong>18</strong>
   </td>
   <td>8
   </td>
   <td>2
   </td>
   <td>3
   </td>
  </tr>
  <tr>
   <td><strong>19</strong>
   </td>
   <td>9
   </td>
   <td>3
   </td>
   <td>4
   </td>
  </tr>
  <tr>
   <td><strong>20</strong>
   </td>
   <td>10
   </td>
   <td>4
   </td>
   <td>5
   </td>
  </tr>
  <tr>
   <td><strong>21</strong>
   </td>
   <td>1
   </td>
   <td>5
   </td>
   <td>2
   </td>
  </tr>
  <tr>
   <td><strong>22</strong>
   </td>
   <td>2
   </td>
   <td>2
   </td>
   <td>1
   </td>
  </tr>
  <tr>
   <td><strong>23</strong>
   </td>
   <td>3
   </td>
   <td>1
   </td>
   <td>2
   </td>
  </tr>
  <tr>
   <td><strong>24</strong>
   </td>
   <td>4
   </td>
   <td>2
   </td>
   <td>3
   </td>
  </tr>
  <tr>
   <td><strong>25</strong>
   </td>
   <td>5
   </td>
   <td>3
   </td>
   <td>4
   </td>
  </tr>
  <tr>
   <td><strong>26</strong>
   </td>
   <td>6
   </td>
   <td>4
   </td>
   <td>5
   </td>
  </tr>
  <tr>
   <td><strong>27</strong>
   </td>
   <td>7
   </td>
   <td>5
   </td>
   <td>1
   </td>
  </tr>
  <tr>
   <td><strong>28</strong>
   </td>
   <td>8
   </td>
   <td>1
   </td>
   <td>2
   </td>
  </tr>
  <tr>
   <td><strong>29</strong>
   </td>
   <td>9
   </td>
   <td>2
   </td>
   <td>3
   </td>
  </tr>
  <tr>
   <td><strong>30</strong>
   </td>
   <td>10
   </td>
   <td>3
   </td>
   <td>4
   </td>
  </tr>
</table>


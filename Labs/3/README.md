<!-- Output copied to clipboard! -->

<!-----
NEW: Check the "Suppress top comment" option to remove this info from the output.

Conversion time: 1.188 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β29
* Mon Mar 15 2021 03:15:42 GMT-0700 (PDT)
* Source doc: Новый документ
* Tables are currently converted to HTML tables.
----->


# Лабораторная работа 3. Представление чисел в различных системах счисления и битовые операции.

Задания



1. Запросите с консоли целое число в указанной системе счисления.
2. Выведите на консоль введённое число в указанной системе счисления.
3. Выведите на консоль введённое в задании 1 число в 16-ричной или 8-ричной системе счисления, а также это же число в той же системе счисления, но сдвинутое влево/вправо на указанное число бит.
4. Выведите на консоль введённое в задании 1 число в 16-ричной или 8-ричной системе счисления (согласно заданию 3), а также это же число в той же системе счисления после применения к нему битовой операции отрицания.
5. Введите с консоли целое число в системе счисления, указанной в задании 3. Выведите на консоль результат указанной битовой операции (и, или, исключающее или) введённого числа и числа, введённого в задании 1 в системе счисления, указанной в задании 3.

Варианты заданий


<table>
  <tr>
   <td><strong>№ варианта</strong>
   </td>
   <td><strong>Основание системы счисления для задания 1</strong>
   </td>
   <td><strong>Основание системы счисления для задания 2</strong>
   </td>
   <td><strong>Основание системы счисления для задания 3</strong>
   </td>
   <td><strong>Направление сдвига и количество бит сдвига для задания 3</strong>
   </td>
   <td><strong>Операция для задания 5</strong>
   </td>
  </tr>
  <tr>
   <td><strong>1</strong>
   </td>
   <td>8
   </td>
   <td>10
   </td>
   <td>8
   </td>
   <td>влево 1
   </td>
   <td>и
   </td>
  </tr>
  <tr>
   <td><strong>2</strong>
   </td>
   <td>10
   </td>
   <td>8
   </td>
   <td>16
   </td>
   <td>влево 2
   </td>
   <td>или
   </td>
  </tr>
  <tr>
   <td><strong>3</strong>
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>8
   </td>
   <td>влево 3
   </td>
   <td>исключающее или
   </td>
  </tr>
  <tr>
   <td><strong>4</strong>
   </td>
   <td>8
   </td>
   <td>16
   </td>
   <td>16
   </td>
   <td>влево 4
   </td>
   <td>и
   </td>
  </tr>
  <tr>
   <td><strong>5</strong>
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>вправо 1
   </td>
   <td>исключающее или
   </td>
  </tr>
  <tr>
   <td><strong>6</strong>
   </td>
   <td>16
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>вправо 2
   </td>
   <td>или
   </td>
  </tr>
  <tr>
   <td><strong>7</strong>
   </td>
   <td>8
   </td>
   <td>10
   </td>
   <td>8
   </td>
   <td>вправо 3
   </td>
   <td>или
   </td>
  </tr>
  <tr>
   <td><strong>8</strong>
   </td>
   <td>10
   </td>
   <td>8
   </td>
   <td>16
   </td>
   <td>вправо 4
   </td>
   <td>исключающее или
   </td>
  </tr>
  <tr>
   <td><strong>9</strong>
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>8
   </td>
   <td>влево 1
   </td>
   <td>и
   </td>
  </tr>
  <tr>
   <td><strong>10</strong>
   </td>
   <td>8
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>влево 2
   </td>
   <td>исключающее или
   </td>
  </tr>
  <tr>
   <td><strong>11</strong>
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>влево 3
   </td>
   <td>и
   </td>
  </tr>
  <tr>
   <td><strong>12</strong>
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>16
   </td>
   <td>влево 4
   </td>
   <td>и
   </td>
  </tr>
  <tr>
   <td><strong>13</strong>
   </td>
   <td>8
   </td>
   <td>10
   </td>
   <td>8
   </td>
   <td>вправо 1
   </td>
   <td>исключающее или
   </td>
  </tr>
  <tr>
   <td><strong>14</strong>
   </td>
   <td>10
   </td>
   <td>8
   </td>
   <td>16
   </td>
   <td>вправо 2
   </td>
   <td>и
   </td>
  </tr>
  <tr>
   <td><strong>15</strong>
   </td>
   <td>16
   </td>
   <td>10
   </td>
   <td>8
   </td>
   <td>вправо 3
   </td>
   <td>или
   </td>
  </tr>
  <tr>
   <td><strong>16</strong>
   </td>
   <td>8
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>вправо 4
   </td>
   <td>и
   </td>
  </tr>
  <tr>
   <td><strong>17</strong>
   </td>
   <td>10
   </td>
   <td>8
   </td>
   <td>8
   </td>
   <td>влево 1
   </td>
   <td>исключающее или
   </td>
  </tr>
  <tr>
   <td><strong>18</strong>
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>16
   </td>
   <td>влево 2
   </td>
   <td>или
   </td>
  </tr>
  <tr>
   <td><strong>19</strong>
   </td>
   <td>8
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>влево 3
   </td>
   <td>и
   </td>
  </tr>
  <tr>
   <td><strong>20</strong>
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>16
   </td>
   <td>влево 4
   </td>
   <td>и
   </td>
  </tr>
  <tr>
   <td><strong>21</strong>
   </td>
   <td>16
   </td>
   <td>10
   </td>
   <td>8
   </td>
   <td>вправо 1
   </td>
   <td>или
   </td>
  </tr>
  <tr>
   <td><strong>22</strong>
   </td>
   <td>8
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>вправо 2
   </td>
   <td>или
   </td>
  </tr>
  <tr>
   <td><strong>23</strong>
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>вправо 3
   </td>
   <td>или
   </td>
  </tr>
  <tr>
   <td><strong>24</strong>
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>16
   </td>
   <td>вправо 4
   </td>
   <td>исключающее или
   </td>
  </tr>
  <tr>
   <td><strong>25</strong>
   </td>
   <td>8
   </td>
   <td>10
   </td>
   <td>8
   </td>
   <td>влево 1
   </td>
   <td>или
   </td>
  </tr>
  <tr>
   <td><strong>26</strong>
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>16
   </td>
   <td>влево 2
   </td>
   <td>исключающее или
   </td>
  </tr>
  <tr>
   <td><strong>27</strong>
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>8
   </td>
   <td>влево 3
   </td>
   <td>и
   </td>
  </tr>
  <tr>
   <td><strong>28</strong>
   </td>
   <td>8
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>влево 4
   </td>
   <td>или
   </td>
  </tr>
  <tr>
   <td><strong>29</strong>
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>8
   </td>
   <td>вправо 1
   </td>
   <td>исключающее или
   </td>
  </tr>
  <tr>
   <td><strong>30</strong>
   </td>
   <td>16
   </td>
   <td>10
   </td>
   <td>16
   </td>
   <td>вправо 2
   </td>
   <td>и
   </td>
  </tr>
</table>


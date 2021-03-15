<!-- Output copied to clipboard! -->

<!-----
NEW: Check the "Suppress top comment" option to remove this info from the output.

Conversion time: 0.821 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β29
* Mon Mar 15 2021 03:16:57 GMT-0700 (PDT)
* Source doc: Новый документ
* Tables are currently converted to HTML tables.
----->


# Лабораторная работа 4. Логические операции

Задания



1. Запросить с консоли целое число и проверить его на попадание в заданный диапазон значений. Результат такой проверки вывести на консоль. При выполнении задания не использовать условный оператор.
2. Запросить с консоли целое число и проверить значение бита с указанным номером в этом числе. Результат такой проверки вывести на консоль. Для удобства разрешается запрашивать указанное число в восьмиричной или шестнадцатиричой системе счисления. При выполнении задания важно обратить внимание на грамотный выбор типа данных анализируемого числа.

Варианты заданий


<table>
  <tr>
   <td><strong>№ варианта</strong>
   </td>
   <td><strong>Диапазон для задания 1</strong>
   </td>
   <td><strong>Номер бита для задания 2</strong>
   </td>
  </tr>
  <tr>
   <td><strong>1</strong>
   </td>
   <td>1 – 10
   </td>
   <td>1
   </td>
  </tr>
  <tr>
   <td><strong>2</strong>
   </td>
   <td>1 – 100
   </td>
   <td>2
   </td>
  </tr>
  <tr>
   <td><strong>3</strong>
   </td>
   <td>1 – 1000
   </td>
   <td>3
   </td>
  </tr>
  <tr>
   <td><strong>4</strong>
   </td>
   <td>23 – 45
   </td>
   <td>4
   </td>
  </tr>
  <tr>
   <td><strong>5</strong>
   </td>
   <td>-3 – 6
   </td>
   <td>5
   </td>
  </tr>
  <tr>
   <td><strong>6</strong>
   </td>
   <td>76 – 78
   </td>
   <td>6
   </td>
  </tr>
  <tr>
   <td><strong>7</strong>
   </td>
   <td>23 – 32
   </td>
   <td>7
   </td>
  </tr>
  <tr>
   <td><strong>8</strong>
   </td>
   <td>-56 – 56
   </td>
   <td>8
   </td>
  </tr>
  <tr>
   <td><strong>9</strong>
   </td>
   <td>-100 – 100
   </td>
   <td>9
   </td>
  </tr>
  <tr>
   <td><strong>10</strong>
   </td>
   <td>88 – 99
   </td>
   <td>10
   </td>
  </tr>
  <tr>
   <td><strong>11</strong>
   </td>
   <td>11 – 12
   </td>
   <td>11
   </td>
  </tr>
  <tr>
   <td><strong>12</strong>
   </td>
   <td>21 – 56
   </td>
   <td>12
   </td>
  </tr>
  <tr>
   <td><strong>13</strong>
   </td>
   <td>64 – 87
   </td>
   <td>13
   </td>
  </tr>
  <tr>
   <td><strong>14</strong>
   </td>
   <td>33 – 55
   </td>
   <td>14
   </td>
  </tr>
  <tr>
   <td><strong>15</strong>
   </td>
   <td>-4 – -1
   </td>
   <td>15
   </td>
  </tr>
  <tr>
   <td><strong>16</strong>
   </td>
   <td>21 – 45
   </td>
   <td>16
   </td>
  </tr>
  <tr>
   <td><strong>17</strong>
   </td>
   <td>20 – 30
   </td>
   <td>17
   </td>
  </tr>
  <tr>
   <td><strong>18</strong>
   </td>
   <td>-77 – 1
   </td>
   <td>18
   </td>
  </tr>
  <tr>
   <td><strong>19</strong>
   </td>
   <td>-50 – 50
   </td>
   <td>19
   </td>
  </tr>
  <tr>
   <td><strong>20</strong>
   </td>
   <td>33 – 88
   </td>
   <td>20
   </td>
  </tr>
  <tr>
   <td><strong>21</strong>
   </td>
   <td>10 – 100
   </td>
   <td>21
   </td>
  </tr>
  <tr>
   <td><strong>22</strong>
   </td>
   <td>100 – 1000
   </td>
   <td>22
   </td>
  </tr>
  <tr>
   <td><strong>23</strong>
   </td>
   <td>1000 – 10000
   </td>
   <td>23
   </td>
  </tr>
  <tr>
   <td><strong>24</strong>
   </td>
   <td>65 – 87
   </td>
   <td>24
   </td>
  </tr>
  <tr>
   <td><strong>25</strong>
   </td>
   <td>-9 – 0
   </td>
   <td>25
   </td>
  </tr>
  <tr>
   <td><strong>26</strong>
   </td>
   <td>6 – 9
   </td>
   <td>26
   </td>
  </tr>
  <tr>
   <td><strong>27</strong>
   </td>
   <td>99 – 999
   </td>
   <td>27
   </td>
  </tr>
  <tr>
   <td><strong>28</strong>
   </td>
   <td>-30 – 45
   </td>
   <td>28
   </td>
  </tr>
  <tr>
   <td><strong>29</strong>
   </td>
   <td>-10 – -3
   </td>
   <td>29
   </td>
  </tr>
  <tr>
   <td><strong>30</strong>
   </td>
   <td>11 – 22
   </td>
   <td>30
   </td>
  </tr>
</table>


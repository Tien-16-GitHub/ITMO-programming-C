<!-- Copy and paste the converted output. -->

<!-----
NEW: Check the "Suppress top comment" option to remove this info from the output.

Conversion time: 0.405 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β29
* Mon Mar 15 2021 03:48:02 GMT-0700 (PDT)
* Source doc: Новый документ
----->



# Лабораторная работ 14. Игра жизнь

Целью лабораторной работы является реализация [игры “Жизнь”](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life) , позволяющая выводить поколение игры в монохромную картинку в [формате BMP](https://en.wikipedia.org/wiki/BMP_file_format). Плоскость “вселенной” игры ограничена положительными координатами.

Лабораторная работы должна быть выполнена в виде консольного приложения принимающего в качестве аргументов следующие параметры:



1. **_--input input_file.bmp_** 

        Где input_file.bmp - монохромная картинка в формате bmp, хранящая начальную ситуация (первое поколение) игры

2. -**_-output dir_name_** 

        	Название директории для хранения поколений игры в виде монохромной картинки

3. **_--max_iter N_**

			Максимальное число поколений которое может эмулировать программа. Необязательный параметр, по-умолчанию бесконечность



4. **_--dump_freq N_**

            Частота с которой программа должно сохранять поколения виде картинки. Необязательный параметр, по-умолчанию равен 1


	Программа должна предусматривать исключительные ситуации, которые могут возникать во время ее работы и корректно их обрабатывать. 

 

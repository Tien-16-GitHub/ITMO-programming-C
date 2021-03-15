<!-- Copy and paste the converted output. -->

<!-----
NEW: Check the "Suppress top comment" option to remove this info from the output.

Conversion time: 0.274 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β29
* Mon Mar 15 2021 03:47:09 GMT-0700 (PDT)
* Source doc: Новый документ
----->



# Лабораторная работа 13. Редактор метаинформации mp3-файла

Задача.	

	Реализовать редактор текстовой метаинформации mp3 файла. В качестве стандарта метаинформации принимаем ID3v2.

	Редактор представлять из себя консольную программу принимающую в качестве аргументов имя файла через параметра _--filepath _, а также одну из выбранных команд 



1. --show - отображение всей метаинформации в виде таблицы
2. _--set=prop_name --value=prop_value _ - выставляет значение определенного поля метаинформации с именем prop_name в значение prop_value
3. --get=prop_name - вывести определенное поле метаинформации с именем prop_name

Например:


    _app.exe --filepath=Song.mp3 --show  _


    _app.exe --filepath=Song.mp3 --get=TIT2_


    _app.exe --filepath=Song.mp3 --set=COMM --value=Test _

Примечание.


    При выполнения данной работы разрешается использовать только стандартную библиотеку языка С. Исключением может являться процесс разбора аргументов командной строки. 

<!-- Copy and paste the converted output. -->

<!-----
NEW: Check the "Suppress top comment" option to remove this info from the output.

Conversion time: 0.346 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β29
* Mon Mar 15 2021 03:48:50 GMT-0700 (PDT)
* Source doc: Новый документ
----->



# Лабораторная работ 15. Архиватор файлов.

Целью лабораторной работы является разработка программы по архивированию и распаковке нескольких файлов в один архив. Архиватор должен



1. Уметь архивировать несколько (один и более) указанных файлов в архив с расширением ***.arc**
2. Уметь распаковывать файловых архив, извлекая изначально запаковонные файлы
3. Предоставлять список файлов упакованных в архиве
4. _Сжимать и разжимать данные при архивировании  с помощью алгоритма Хаффмана (опциональное задание, оценивается доп баллами)_

Архиватор должен быть выполнен в виде консольного приложения, принимающего в качестве аргументов следующий параметры



*   **--file  FILE **

        Имя файлового архива с которым будет работать архиватор

*   **--create** 

        Команда для создания файлового архива

*   **--extract;**

        Команда для извлечения из файлового архива файлов

*   **--list **

        Команда для предоставления списка файлов, хранящихся в архиве

*   **FILE1 FILE2 …. FILEN**

        Свободные аргументы для передачи списка файлов для запаковки


Примеры использования:


    **_arc --file  data.arc --create a.txt b.bin c.bmp_**


    **_arc --file  data.arc --extract_**


    **_arc --file  data.arc --list_**

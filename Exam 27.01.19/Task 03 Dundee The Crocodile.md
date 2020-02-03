## Дънди крокодила

[Judge System](https://www.hackerrank.com/contests/sda-exam-27-01-19-/challenges/dundee-the-crocodile)

Дадени са ви две изречения **A** и **B**.

Думите в изреченията са **само с малки букви** и всяка дума е разделена с точно един знак за празен символ.

Освен малки букви и празно място между тях, **други символи няма да същестуват като вход.**

Една дума ще наричаме „Крокодил от Австралия“, **ако се среща точно един път в едно от изреченията и не се среща в другото изречение**.

От вас се иска да изведете по дума на нов ред всички такива думи, които са „Крокодил от Австралия“ . Тъй като може да има много възможни наредби за изход, то първо сортирайте всички тези думи спрямо тяхната лексикографка наредба и след това ги отпечатайте, всяка на нов ред.

Пример:
```
a b c
b a d
```
Двете думи които отговарят на условието са: d,c

Примерен Изход:
```
c
d
```
Пояснение:
```
d
c
```
Не е коректен отговор, защото трябва да изведете всяка дума на нов ред като започнем от лексикографски най-малката.

#### Входен формат

Две изречения, всяко на нов ред.

#### Ограничения

Дължината на A и B не е по-голяма от 500 символа.

#### Изходен формат

Всички думи които отговарят на условието, като на всеки ред трябва да имате по една дума.

Примерен вход 0|Очакван изход 0
-|-
hello world<br>world bye|bye<br>hello

Примерен вход 0|Очакван изход 0
-|-
ha ha ha ha<br>not|not
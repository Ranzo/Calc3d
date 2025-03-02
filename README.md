# Calc3D by Risen
Калькулятор Calc3D by Risen предназначен для быстрой оценки стоимости печати на 3D принтере,
исходя из стоимости пластика, веса, тарифа электроэнергии и прочего...

## Содержание
- [Формула расчета](#формула-расчета)
- [Как скачать](#как-скачать)
- [FAQ](#faq)
- [Зачем это всё](#почему-я-решил-реализовать-этот-проект?)
- [Команда проекта](#команда-проекта)
- [Лицензия](#лицензия)
- 
## Формула расчета

```
S = ((p/1000*t/60*h)+(md*d*st/mk)+(a+post))*x+mod
```
где
```
 S - стоимость печати, руб.
        p - мощность принтера, Вт
        t - время печати, мин.
        h - тариф на электроэнергию, кВт/ч
        md - вес детали, гр.
        d - множитель отбраковки.
        st - стоимость катушки пластика, руб.
        mk - вес пластика в катушке, гр.
        a - амортизация принтера, руб.
        post - стоимость постобработки, руб.
        х - количество печатаемых дубликатов, шт.
        mod - стоимость моделирования, руб
```


## Как скачать
Переходим в раздел "Релизы" по это ссылке: [релизы](https://git.risenhome.xyz/risen/Calc3D_by_Risen/releases)

Качаем последнюю версию, настраиваем свои параметры и пользуемся.

## FAQ  
Раздел в процессе написания

## Почему я решил реализовать этот проект?
Не нашел в интернете таких калькуляторов офлайн. Решил сделать для себя, заодно потренироваться в программировании.

## Команда проекта
Вы можете написать мне в личку в телеграм, если у Вас есть какие-то вопросы по работе калькулятора.

- [Risen (Colin Robinson)](tg://resolve?domain=RisenYT) — разработчик-любитель
- [Jun_Uno](tg://resolve?domain=Jun_Uno) — разработчик-любитель

## Лицензия
MIT 
```
Copyright (c) <2024> <Risen>

Данная лицензия разрешает лицам, получившим копию данного программного обеспечения и сопутствующей документации 
(далее — Программное обеспечение), безвозмездно использовать Программное обеспечение без ограничений, включая 
неограниченное право на использование, копирование, изменение, слияние, публикацию, распространение, сублицензирование
и/или продажу копий Программного обеспечения, а также лицам, которым предоставляется данное Программное обеспечение,
при соблюдении следующих условий:

Указанное выше уведомление об авторском праве и данные условия должны быть включены во все копии или значимые части
данного Программного обеспечения.

ДАННОЕ ПРОГРАММНОЕ ОБЕСПЕЧЕНИЕ ПРЕДОСТАВЛЯЕТСЯ «КАК ЕСТЬ», БЕЗ КАКИХ-ЛИБО ГАРАНТИЙ, ЯВНО ВЫРАЖЕННЫХ ИЛИ ПОДРАЗУМЕВАЕМЫХ,
ВКЛЮЧАЯ ГАРАНТИИ ТОВАРНОЙ ПРИГОДНОСТИ, СООТВЕТСТВИЯ ПО ЕГО КОНКРЕТНОМУ НАЗНАЧЕНИЮ И ОТСУТСТВИЯ НАРУШЕНИЙ,
НО НЕ ОГРАНИЧИВАЯСЬ ИМИ. НИ В КАКОМ СЛУЧАЕ АВТОРЫ ИЛИ ПРАВООБЛАДАТЕЛИ НЕ НЕСУТ ОТВЕТСТВЕННОСТИ ПО КАКИМ-ЛИБО ИСКАМ,
ЗА УЩЕРБ ИЛИ ПО ИНЫМ ТРЕБОВАНИЯМ, В ТОМ ЧИСЛЕ, ПРИ ДЕЙСТВИИ КОНТРАКТА, ДЕЛИКТЕ ИЛИ ИНОЙ СИТУАЦИИ,
ВОЗНИКШИМ ИЗ-ЗА ИСПОЛЬЗОВАНИЯ ПРОГРАММНОГО ОБЕСПЕЧЕНИЯ ИЛИ ИНЫХ ДЕЙСТВИЙ С ПРОГРАММНЫМ ОБЕСПЕЧЕНИЕМ.
```
```
Copyright (c) <2024> <Risen>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
documentation files (the "Software"), to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED 
TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE 
OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.```
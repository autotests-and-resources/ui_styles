# Класс __UI_Styles__
Класс со стилями приложений команды

## Как использовать

Для любого объекта, который имеет метод `setStyleSheet`, применить подходящий статический метод из `UI_Styles`

```c++
QLabel *title = new QLabel("Title", this);
title->setStyleSheet(UI_Styles::label_title());
```
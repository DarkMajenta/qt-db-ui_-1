````markdown
# 🧪 Конструктор тестов (C++ / Qt)

📚 **Конструктор тестов** — это десктопное приложение, созданное с использованием **C++ и Qt Creator**, предназначенное для создания, редактирования и прохождения тестов в офлайн-режиме, **без использования внешней базы данных**.

---

## 🚀 Возможности

### 👤 Роли пользователей:
- **Администратор**:
  - Добавление, отключение, включение и удаление пользователей
  - Назначение прав: создание/просмотр/прохождение тестов
- **Пользователь**:
  - В зависимости от выданных прав: создавать, просматривать или проходить тесты

### 🧩 Поддержка типов вопросов:
- С одним верным ответом (single choice)
- С несколькими ответами (multiple choice)
- С открытым текстовым полем

### 🎨 Дополнительные функции:
- Простая настройка внешнего вида (темы оформления)
- Хранение данных в формате `.json` (внутреннее хранилище в `./data`)
- Работа без интернета и сторонних серверов

---

## 🛠️ Установка и запуск

### 📦 Зависимости
- **Qt 6+** (рекомендуется Qt 6.5+)
- **CMake 3.16+**
- **C++17 или выше**

### 🔧 Сборка

#### Через Qt Creator:
1. Открой `CMakeLists.txt`
2. Настрой сборку (Desktop Qt 6.5+)
3. Собери и запусти проект

#### Через терминал:
```bash
git clone https://github.com/yourname/test-constructor.git
cd test-constructor
mkdir build && cd build
cmake ..
make
./TestConstructor
````

---

## 📁 Структура проекта

```
test-constructor/
├── CMakeLists.txt                  # или .pro-файл (если используется qmake)
├── main.cpp                        # Точка входа
├── mainwindow.ui                   # Главное окно (Qt Designer)
├── mainwindow.cpp
├── mainwindow.h
│
├── core/                           # Логика приложения
│   ├── user.h
│   ├── user.cpp
│   ├── test.h
│   ├── test.cpp
│   ├── question.h
│   ├── question.cpp
│   ├── answer.h
│   ├── answer.cpp
│   ├── permissions.h               # Структура прав доступа
│   ├── usermanager.h
│   ├── usermanager.cpp
│   ├── testmanager.h
│   ├── testmanager.cpp
│   └── utils.h / utils.cpp         # Утилиты (валидация, цвет, и пр.)
│
├── gui/                            # UI-элементы
│   ├── loginwindow.ui
│   ├── loginwindow.cpp
│   ├── loginwindow.h
│   ├── testeditor.ui               # Конструктор теста
│   ├── testeditor.cpp
│   ├── testeditor.h
│   ├── testviewer.ui               # Просмотр тестов
│   ├── testviewer.cpp
│   ├── testviewer.h
│   ├── testpasser.ui               # Прохождение теста (если нужно)
│   ├── testpasser.cpp
│   ├── testpasser.h
│   ├── settingsdialog.ui          # Настройки (цвета и проч.)
│   ├── settingsdialog.cpp
│   └── settingsdialog.h
│
├── data/                           # Локальное хранилище данных
│   ├── users.json                  # Все пользователи и роли
│   ├── tests/                      # Каталог всех тестов
│   │   ├── math_test.json
│   │   └── english_test.json
│   └── results/                    # (опционально) Ответы пользователей
│       ├── user1_math_test.json
│       └── user2_english_test.json
│
├── resources/                      # Ресурсы (иконки, стили, темы)
│   ├── icons/
│   │   ├── user.png
│   │   ├── admin.png
│   │   └── logo.png
│   └── styles/
│       └── themes.qrc              # Qt Resource Collection (если используешь .qrc)
│
└── README.md                       # Инструкции по сборке и использованию
```

---

## 📄 Пример формата теста (`data/tests/example_test.json`)

```json
{
  "title": "Основы C++",
  "description": "Проверка базовых знаний",
  "questions": [
    {
      "type": "single",
      "text": "Что такое указатель?",
      "options": ["Тип данных", "Переменная, хранящая адрес", "Функция", "Цикл"],
      "correct": [1]
    },
    {
      "type": "text",
      "text": "Ключевое слово для объявления класса",
      "answer": "class"
    }
  ]
}
```

---

## 📜 Лицензия

Данный проект распространяется под лицензией **GNU GPL v3.0**.
Вы можете свободно использовать, изменять и распространять исходный код, при условии сохранения этой лицензии.

[Условия лицензии (GPL-3.0)](https://www.gnu.org/licenses/gpl-3.0.html)

---

## 👨‍💻 Автор

Разработано студентом направления **Информатика и вычислительная техника (ИВТ)** в рамках курсовой работы.
Консультации и помощь: [Drk_Mjnt](#)

---

## 🤝 Контрибьюторам

Будем рады вашему участию в развитии проекта! Pull Request'ы и Issue'ы приветствуются.


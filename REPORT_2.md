## Лабораторная работа№2
__Обухов Пётр ИУ8-21__


# Part I
1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
    ```sh
    $ cd workspace/projects/lab02
    cd abchihba868/workspace/projects/lab02
    ```
3. Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.
  ```
      #include <iostream>
  
  using namespace std;
  
  int main() {
      cout << "Hello, World!" << endl;
      return 0;
  }
  ```
4. Добавьте этот файл в локальную копию репозитория.
  ```
  $ git .
  ```
5. Закоммитьте изменения с осмысленным сообщением.
  ```
  git commit -m "Initial commit with Hello World program"
  
  ```
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.
 ```
    #include <iostream>
  #include <string>
  
  using namespace std;
  
  int main() {
      string name;
      cout << "Enter your name: ";
      cin >> name;
      cout << "Hello, World! from " << name << endl;
      return 0;
  }
  ```
7. Закоммитьте новую версию программы. 
  ```
  git commit -am "Updated Hello World program to ask for user's name"
[patch1 de1d9ce] Updated Hello World program to ask for user's name
 1 file changed, 12 insertions(+), 7 deletions(-)
  ```
8. Запуште изменения в удалёный репозиторий.
  ```
  git push origin master

  ```
9. Проверьте, что история коммитов доступна в удалёный репозитории.
    
# Part II
1.В локальной копии репозитория создайте локальную ветку patch1.
    ```
    git branch patch1
    git checkout patch1
    ```
    
2.Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;

    ```sh
      #include <iostream>
      #include <string>
      
      int main() {
          std::string name;
          std::cout << "Enter your name: ";
          std::cin >> name;
          std::cout << "Hello, World! from " << name << std::endl;
          return 0;
      }
    ```
    
commit, push локальную ветку в удалённый репозиторий.
    ```
    git commit -am "Removed using namespace std"
    git push origin patch1
    
    ```
  3.Проверьте, что ветка patch1 доступна в удалёный репозитории.
  4.Создайте pull-request patch1 -> master.
  5.В локальной копии в ветке patch1 добавьте в исходный код комментарии.
    commit, push.
    
    ```
    git commit -am "Added comments to the code"
    git push origin patch1
    

    ```
  6.Проверьте, что новые изменения есть в созданном на шаге 5 pull-request
  7.В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.
  8.Локально выполните pull.
  ```
git checkout master
git pull origin master 


```
  9.С помощью команды git log просмотрите историю в локальной версии ветки master.Удалите локальную ветку patch1.
```
git branch -D patch1
Deleted branch patch1 (was 68d074b)
```
# Part III
1.Создайте новую локальную ветку patch2.
```
git checkout -b patch2
Переключились на новую ветку «patch2»

```
2.Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.
```
clang-format -style=Mozilla -i hello_world.cpp
```
3.commit, push, создайте pull-request patch2 -> master.
```
git commit -am "Formatted code with clang-format"
git push origin patch2

```
4.В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.
```
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: "; // Запрос имени пользователя
    std::cin >> name;
    std::cout << "Hello, World! from " << name << std::endl; // Вывод приветствия
    return 0;
}

```
5.Убедитесь, что в pull-request появились конфликтны.
6.Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.
```
git pull origin master  
git rebase master  


```
7.Сделайте force push в ветку patch2
```
 git push origin patch2 --force


```
8.Убедитель, что в pull-request пропали конфликтны.
9.Вмержите pull-request patch2 -> master.


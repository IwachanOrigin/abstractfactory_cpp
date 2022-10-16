# AbstractFactory cpp demo code

## Overview

    AbstractFactoryの使い方

## 使いどころ

    同じ構成のクラスを作るけど、処理内容自体は各メソッドレベルで異なる場合...でしょうか。  
    FactoryMethodのパターン3とやっていることはほぼ同じだと思います。  
    それぞれのファクトリークラス経由で処理の異なるクラスを呼び出しているので。  
    設計次第では、大量のファクトリークラスが生成されて嫌気がさすかもしれません。  
    ただ、どうしても同じようなパーツを作成しなくてはならない場合にはとても有用だと思います。  
    例えば、"Page"という基底クラスを宣言して、"MainPage", "SubPage", "SubSubPage"...のように  
    継承したクラスを作成することで、各ページの切り替えを簡単に行うことが出来ます。  
    この場合、"xxFactory"というクラスは"PageController"のような名前にしておくと良いのかも。  
    名前を考えるって難しいですね。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。(Debug Buildです)  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build 

    ex. LLVM(15.0.0+) + Ninja + cmakeの場合  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/abstractfactory_cpp/blob/master/LICENSE)


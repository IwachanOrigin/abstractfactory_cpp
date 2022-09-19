# AbstractFactory cpp demo code

## Overview

    AbstractFactoryの使い方

## 使いどころ

    同じ構成のクラスを作るけど、処理内容自体は各メソッドレベルで異なる場合...だと思います。  
    

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build 

## Licence

[MIT](https://github.com/IwachanOrigin/singleton_cpp/blob/master/LICENSE)


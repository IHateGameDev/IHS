# IHSytem - полезная библиотека
Вообще, эта библиотека создавалась как вспомогательная для моей другой библиотеки -
[*"IHEngine"*](https://github.com/IHateGameDev/IHEngine). Вы можете смело использовать их в своих проектах, но согласно правилам [**MIT License**](../License) конечно.
Вы также можете [внести вклад в разработку!](#cooperation)
### Другие языки для README:
- [Английский](../README.md)
- ~~**Русский**~~
- [Французский](RMFranch.md)
- [Немецкий](RMGerman.md)

## Сборка
### Флаги:
- -DREMOVE_CASHE=OFF/ON #Включает удаление кэша предыдущей сборки
- -DLIBRARY=ON/OFF #Включает сборку библиотеки
- -DEXAMPLES=ON/OFF #Включает сборку примеров

Откройте терминал, загрузите исходники и приготовьтесь к сборке:
```
git clone https://github.com/IHateGameDev/IHSystem.git
cd IHSystem
mkdir build #!!!MAKEDIR в Windows
cd build
```

Если нужна только библиотека:
```
cmake ../ -DEXAMPLES=OFF
make
sudo make install
```

Если нужны только примеры:
```
cmake ../ -DLIBRARY=OFF
make
```

Хотите все и сразу?:
```
cmake ../
make
sudo make install
```

## Сотрудничество
<a name="cooperation"></a>
Пока я не имею четкого представления о том, во что может превратиться этот проект.
Но буду рад любой помощи. Единственное, что нужно для кодинга, это +- нормальные знания C++/C и git.
Вы также можете найти ошибки или предложить что-то новое!
Если вы хотите помочь: [Telegram](https://t.me/IHateGameDev/), [Mail](izaachategamedev@gmail.com), [Discord](https://discordapp.com/users/1258273988908552293/).

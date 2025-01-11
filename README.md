# IHSytem - a useful library
In general, this library was created as an auxiliary one for my other library -
[*"IHEngine"*](https://github.com/IHateGameDev/IHEngine). You can safely use them in your projects, but according to the rules of the [**MIT License**](../License) of course.
You can also [contribute to the development!](#cooperation)
### Other languages ​​for README:
- [English](../README.md)
- ~~**Russian**~~
- [French](RMFranch.md)
- [German](RMGerman.md)

## Build
### Flags:
- -DREMOVE_CASHE=OFF/ON #Enables deleting the cache of the previous build
- -DLIBRARY=ON/OFF #Enables building the library
- -DEXAMPLES=ON/OFF #Enables building examples

Open a terminal, download the sources and get ready to build:
```
git clone https://github.com/IHateGameDev/IHSystem.git
cd IHSystem
mkdir build #!!!MAKEDIR on Windows
cd build
```

If you only need library:
```
cmake ../ -DEXAMPLES=OFF
make
sudo make install
```

If you only need examples:
```
cmake ../ -DLIBRARY=OFF
make
```

Want everything at once?:
```
cmake ../
make
sudo make install
```

## Cooperation
<a name="cooperation"></a>
I don't have a clear idea of what this project could turn into yet.
But I'd be glad to get any help. The only thing you need for coding is +- normal knowledge of C++/C and git.
You can also find errors or suggest something new!
If you want to help: [Telegram](https://t.me/IHateGameDev/), [Mail](izaachategamedev@gmail.com), [Discord](https://discordapp.com/users/1258273988908552293/).

*partially translated by translator*

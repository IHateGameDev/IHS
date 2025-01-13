# IHSytem – eine nützliche Bibliothek
Im Allgemeinen wurde diese Bibliothek als Hilfsbibliothek für meine andere Bibliothek erstellt –
[*"IHEngine"*](https://github.com/IHateGameDev/IHEngine). Sie können sie sicher in Ihren Projekten verwenden, aber natürlich gemäß den Regeln der [**MIT-Lizenz**](../Lizenz).
Sie können auch [zur Entwicklung beitragen!](#Zusammenarbeit)
### Andere Sprachen für README:
- [Englisch](../README.md)
- [Russisch](RMRussian.md)
- [Französisch](RMFranch.md)
- ~~**Deutsch**~~

## Build
### Flags:
- -DREMOVE_CASHE=OFF/ON #Aktiviert das Löschen des Caches des vorherigen Builds
- -DLIBRARY=ON/OFF #Aktiviert das Erstellen der Bibliothek
- -DEXAMPLES=ON/OFF #Aktiviert das Erstellen von Beispielen

Öffnen Sie ein Terminal, laden Sie die Quellen herunter und machen Sie sich bereit zum Erstellen:
```
git clone https://github.com/IHateGameDev/IHSystem.git
cd IHSystem
mkdir build #!!!MAKEDIR unter Windows
cd build
```

Wenn Sie nur die Bibliothek benötigen:
```
cmake ../ -DEXAMPLES=OFF
make
sudo make install
```

Wenn du nur Beispiele brauchst:
```
cmake ../ -DLIBRARY=OFF
make
```

Du willst alles auf einmal?:
```
cmake ../
make
sudo make install
```

## Kooperation
<a name="cooperation"></a>
Ich habe noch keine klare Vorstellung, was aus diesem Projekt werden könnte.
Aber ich freue mich über jede Hilfe. Das Einzige, was du zum Programmieren brauchst, sind +- normale Kenntnisse in C++/C und Git.
Du kannst auch Fehler finden oder etwas Neues vorschlagen!
Wenn du helfen willst: [Telegram](https://t.me/IHateGameDev/), [Mail](https://izaachategamedev@gmail.com), [Discord](https://discordapp.com/users/1258273988908552293/).

*übersetzt von Übersetzer*

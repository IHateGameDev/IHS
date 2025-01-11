# IHSytem - une bibliothèque utile
En général, cette bibliothèque a été créée comme une bibliothèque auxiliaire pour mon autre bibliothèque -
[*"IHEngine"*](https://github.com/IHateGameDev/IHEngine). Vous pouvez les utiliser en toute sécurité dans vos projets, mais selon les règles de la [**Licence MIT**](../License) bien sûr.
Vous pouvez aussi [contribuer au développement !](#coopération)
### Autres langues pour README :
- [Anglais](../README.md)
- [Russe](RMRussian.md)
- ~~**Français**~~
- [Allemand](RMGerman.md)

## Build
### Drapeaux :
- -DREMOVE_CASHE=OFF/ON #Active la suppression du cache de la version précédente
- -DLIBRARY=ON/OFF #Active la construction de la bibliothèque
- -DEXAMPLES=ON/OFF #Active la construction d'exemples

Ouvrez un terminal, téléchargez les sources et préparez-vous à construire :
```
git clone https://github.com/IHateGameDev/IHSystem.git
cd IHSystem
mkdir build #!!!MAKEDIR sous Windows
cd build
```

Si vous n'avez besoin que de la bibliothèque :
```
cmake ../ -DEXAMPLES=OFF
make
sudo make install
```

Si vous n'avez besoin que d'exemples :
```
cmake ../ -DLIBRARY=OFF
make
```

Vous voulez tout en même temps ?:
```
cmake ../
make
sudo make install
```

## Coopération
<a name="cooperation"></a>
Je n'ai pas encore d'idée précise de ce que ce projet pourrait devenir.
Mais je serais heureux d'obtenir de l'aide. La seule chose dont vous avez besoin pour coder est +- une connaissance normale de C++/C et git.
Vous pouvez également trouver des erreurs ou suggérer quelque chose de nouveau !
Si vous voulez aider : [Telegram](https://t.me/IHateGameDev/), [Mail](izaachategamedev@gmail.com), [Discord](https://discordapp.com/users/1258273988908552293/).

*traduit par un traducteur*

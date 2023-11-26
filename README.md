# <p align="center">bnspatch</p>
# 3.2+ Changes
Pilao left awhile ago so these are changes I made with input from Hora to fit our needs and make our jobs a bit easier. Be warned dirty copy paste code has soiled this.

## New
Any plugin running the pluginsdk >= 3.2 will have a new init callback for when game engine has initialized (Just before the loop begins). Additionally loader3 version is now set to the PluginInfo. This wasn't an ideal way but only way I knew how to keep compatibility for <3.2
Sample template has been updated and pluginsdk received some compatibility changes for newer C++ language standard.
## Acknowledgements
- [dcleblanc/**SafeInt**][3.0] (MIT license)
- [fmtlib/**fmt**][3.1] (MIT license)
- [microsoft/**Detours**][3.2] (MIT license)
- [microsoft/**wil**][3.3] (MIT license)
- [processhacker/**phnt**][3.4] (CC-BY-4.0 license)
- [zeux/**pugixml**][3.5] (MIT license)

[3.0]: https://github.com/dcleblanc/SafeInt
[3.1]: https://github.com/fmtlib/fmt
[3.2]: https://github.com/microsoft/Detours
[3.3]: https://github.com/microsoft/wil
[3.4]: https://github.com/processhacker/phnt
[3.5]: https://github.com/zeux/pugixml


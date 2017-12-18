# PP2D-T3ST

A test of PP2D

## Compiling
Prerequisites: 

- devkitARM 
- [ctrulib 1.4.0](https://github.com/smealum/ctrulib/releases/tag/v1.4.0)
- A recent commit of [makerom](https://github.com/profi200/Project_CTR/tree/master/makerom) and [bannertool](https://github.com/Steveice10/bannertool) added to PATH
- the `zip` command line tool

Build Types:

- Typing `make` will build 3dsx, CIA, and elf versions of the app in the `out` folder.

- Typing `make 3dsx` will build a 3dsx version of the app in the `out` folder.

- Typing `make cia` will build a CIA version of the app in the `out` folder.

- Typing `make release` will build 3DSX and CIA versions of the app, neatly package them in a zip file called `(FolderName)-(VERSION).zip` and clean up after itself.

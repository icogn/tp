
Notes for decomp:

(Note: during git clone, for windows you can set core.eol to crlf)

Installed WSL2.

Ran 2 apt-get commands.
Ran commands to install python3 pip or something.

Did the command in the readme with the tools/requirements.txt

GC_COMPILERS zip in pins.
	Put in correct location.
	Replace one file with newer one.
	Update one of the exe's with a recently pinned one.
	chmod +x on the exe files.
	Changed dll filename to be capital letters.

Installed wine (32 and 64) in WSL, then closed and reopened.

`make` should run at that point.


Other setup-related notes:

python3 diff.py -mwo 80056A94
This command can be run from the root of the repo.
By default if gives this error:

Traceback (most recent call last):
  File "diff.py", line 37, in <module>
    from elftools.elf.elffile import ELFFile
ModuleNotFoundError: No module named 'elftools'

Need to run:
	python3 -m pip install --user pyelftools

Error it gives after that says to run:
	python3 -m pip install --user colorama ansiwrap watchdog python-Levenshtein cxxfilt

Need to also install DEVKITPRO in WSL to have DEVKITPPC variable on Path I think:
Instructions to do that:

- Download ARM deb package from devkitpro latest release on github
- Had to run sudo apt-get install pkg-config
- Run: sudo dpkg -i devkitpro-pacman.amd64.deb

- Run: sudo dkp-pacman -S gamecube-dev
- 	Press Enter to select the default "all".
- Exit and rerun `wsl`.

You can run `printenv | grep DEVKIT' to confirm the following environment variables are set:

DEVKITPRO=/opt/devkitpro
DEVKITARM=/opt/devkitpro/devkitARM
DEVKITPPC=/opt/devkitpro/devkitPPC

If needed, here is an example of how to set one of these:
export DEVKITPPC=/opt/devkitpro/devkitPPC

After running make successfully the first time,
	make an `/expected` dir,
	then copy the `/build` dir to `/expected/build`.


```
Note you may want to enable Ctrl+Shift+V to paste by
right-clicking the top bar and selecting Properties, then enabling in the popup.

Note you can run `explorer.exe .` to open the current directory in the Windows file explorer.
```

Clang format:

In wsl, run `apt-cache search clang-format`
This should display versions.

The newest version might look something like "clang-format-12"

Run:
`sudo apt-get install clang-format-12` (Your clang-format version may not be 12).

Have to edit ~/.bashrc and add:
CLANG_FORMAT_EXE=clang-format-12


Install extension: Clang-Format ---- By xaver (650,000+ downloads)

To workspace settings, add:
	"clang-format.executable": "C:\\Users\\Isaac\\Downloads\\clang-format-6923b0a7.exe",
	"clang-format.assumeFilename": ".clang-format"

First need to get executable from:
https://llvm.org/builds/
At bottom of page, download link after:
"A separate build of the clang-format binary is available as ..."
Download, put somewhere, and use the absolute path of the exe in your workspace settings.



Right click in cpp file, do:
Format Document with...
Then click:
Configure Default Formatter...
Pick:
Clang-Format

You may need to tell it to format again.




\\wsl$\Ubuntu\home\isaac\code\tp\zeldaret\tp\src\d\kankyo\d_kankyo_data.cpp








Other notes:

bss is zero-initialized data.

DOL File Format: http://wiki.tockdom.com/wiki/DOL_(File_Format)




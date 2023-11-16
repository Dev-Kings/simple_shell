# Project 0x16. C - Simple Shell

A simple UNIX command interpreter.

## Prerequisites

```
Ubuntu LTS 20.04
GCC installed. If not install with: 
	sudo apt get update
	sudo apt install gcc
```

## Usage
i). Pull the 'master' branch.
```
	git pull master https://github.com/Dev-Kings/simple_shell
```

ii). Move to the directory "simple_shell"
```
	cd ./simple_shell
```

iii). Compile with the flags as shown below:
```
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o shell
```

iv). Run the "shell" executable created above.
```
./shell
```

v). Run commands on the custom shell. Type the command and press "Enter"
```
	$ ls -l
	...
	$ uname
	Linux
	$ /bin/pwd
	...
```
## Authors & Contributors

* **David King'asia** - [Dev-Kings](https://github.com/Dev-Kings)
* **Collins Kimotho** - [collins-kimotho](https://github.com/collins-kimotho)


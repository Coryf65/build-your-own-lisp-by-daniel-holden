# Building your own LISP
by: Daniel Holden

Follow along with the digital copy or buy the [book](https://www.amazon.com/Build-Your-Lisp-Daniel-Holden/dp/1501006622) to support Daniel, like me!

- [website](https://www.buildyourownlisp.com/)
- [Code companion guide](https://github.com/orangeduck/BuildYourOwnLisp)
- [C standard Library](https://en.cppreference.com/w/c/header)

install the cc compilier, for linux debian based distros
```cli
sudo apt install make-essential
```

Compile in C, using the CC compilier
```cli
cc -std=c99 -Wall hello_world.c -o hello_world
```

Running a C program
```
./hello_world
```

### some recommendations

- Valgrind: a tool for debugging C programs

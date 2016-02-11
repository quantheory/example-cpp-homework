# Example C++ Homework

Another example homework assignment for figuring out how to use Github for
classrooms with C++ files. This is definitely subject to change but for now
seems to be a decent start.

Similar to
[example-python-homework](https://github.com/uwhpsc-2016/example-python-homework),
the object of this assignment is to procide a C++ function which squares an
input value

    int square(int x)
    {
        // return the square of x
    }

A toy test suite is supplied to the students so they can check the validity of
thier code. The actual test suite is hidden from the students and will be run
using their code once the homework is submitted. This is similar to how
[Project Euler](http://projecteuler.net) sets up its exercises.

# How to Submit

1. Edit the `int square(int x)` function in `lib/square.cpp`.
2. Check that your function compiles into a shared library correctly using the
   supplied `Makefile`

        $ make lib

2. Test your code by compiling and running the toy test suite

        $ make test
        $ ./runtests

4. If all tests pass then ...


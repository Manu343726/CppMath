CppMath [![Build Status](https://travis-ci.org/Manu343726/try-biicode-travisci.svg?branch=master)](https://travis-ci.org/Manu343726/try-biicode-travisci)
=======

A fictional math library to show biicode deployment with Travis CI

Description
===========

Suppose you have a C++ math library called *CppMath*. Its hosted on github, and you were runing some unit tests via Travis CI.  
One day you discover biicode, a dependency manager like python's pip or Java's maven, but for C and C++. So cool! You can deploy your CppMath
library to biicode allowing everybody to use it via just an `#include`!  

Deploying to biicode is done via just a `bii publish` command. But for a better development workflow, it would be better to automatize that deploy after ensuring the library is working. So what we need is:

 - Run some unit tests on the library
 - If those passed, publish the library changes to biicode

The CppMath library is structured as a `developer/cppmath` biicode block. That block includes library features ([`vector3.hpp`](https://github.com/Manu343726/try-biicode-travisci/blob/master/blocks/manu343726/try-biicode-travisci/vector3.hpp)) and a [`tests.cpp`](https://github.com/Manu343726/try-biicode-travisci/blob/master/blocks/manu343726/try-biicode-travisci/test.cpp) file full of unit tests.

This project serves as an example of how to use biicode on Travis CI builds. You may configure and build blocks, run them, and check if everything worked as expected. Then publish the block to biicode automatically thanks to the Travis CI deployment service.


TinyTest
========

A really really really tiny and simple no-hassle C unit-testing framework.

Features
--------

* **No library dependencies**. Not even itself. Just a header file.
* Simple ANSI C. Should work with virtually every C or C++ compiler on virtually any platform.
* Reports assertion failures, including expressions and line numbers.
* Stops test on first failed assertion.
* ANSI color output for maximum visibility.
* Easy to embed in apps for runtime tests (e.g. environment tests).

Example Usage
-------------

    #include "tinytest.h"
    #include "mylib.h"
    
    void test_sheep()
    {
      ASSERT("Sheep are cool", are_sheep_cool());
      ASSERT_EQUALS(4, sheep.legs);
    }
    
    void test_cheese()
    {
      ASSERT("Cheese is tangy", cheese.tanginess > 0);
      ASSERT_STRING_EQUALS("Wensleydale", cheese.name);
    }
    
    int main()
    {
      RUN(test_sheep);
      RUN(test_cheese);
      return TEST_REPORT();
    }

To run the tests, compile the tests as a binary and run it.

*2010-2014, -Joe Walnes <joe@walnes.com> http://joewalnes.com*


[![Bitdeli Badge](https://d2weczhvl823v0.cloudfront.net/joewalnes/tinytest/trend.png)](https://bitdeli.com/free "Bitdeli Badge")


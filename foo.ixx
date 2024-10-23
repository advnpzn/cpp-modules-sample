module;

#include <iostream>

export module foo;

namespace foo {
    export class bar {
    public:
        bar();
        void hello();

    };


    bar::bar() = default;
    void bar::hello() {
        std::cout << "Hello world!\n";
    }
}






#include <manu343726/bandit/bandit.h>
#include <manu343726/try-biicode-travisci/vector3.hpp>

using namespace bandit;

go_bandit([]()
{
    describe("Comparison ops", []()
    {
        it("compares for equality", []()
        {
        	vector3 a{1.0f, 2.0f, 3.0f};
        	vector3 b{2.0f, 3.0f, 4.0f};

            AssertThat( a == a, Is().EqualTo(true));
            AssertThat( a == b, Is().EqualTo(false));
        });

        it("compares for inequality", []()
        {
        	vector3 a{1.0f, 2.0f, 3.0f};
        	vector3 b{2.0f, 3.0f, 4.0f};

        	AssertThat( a != a, Is().EqualTo(false));	
            AssertThat( a != b, Is().EqualTo(true));
        });
    });

    describe("Algebraic ops", []()
    {
        it("adds", []()
        {
        	vector3 a{1.0f, 2.0f, 3.0f};
        	vector3 b{2.0f, 3.0f, 4.0f};
        	vector3 c{3.0f, 5.0f, 7.0f};

            //AssertThat( a + b, Is().EqualTo(c));
        });
    });
});
        

int main(int argc, char* argv[])
{
    bandit::run(argc,argv);
}

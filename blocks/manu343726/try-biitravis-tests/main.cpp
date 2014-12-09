#include <manu343726/bandit/bandit.h>

go_bandit([]()
{
    describe("There's no test, really", []()
    {
        it("just runs", []()
        {
            AssertThat(true, Is().EqualTo(true));
        });
    });
});
        

int main(int argc, char* argv[])
{
    bandit::run(argc,argv);
}

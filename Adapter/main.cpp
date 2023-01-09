#include "SquarePegAdapter.h"
#include "RoundHole.h"
#include "better_example.h"

using std::cout, std::endl, std::cin;


int main() {
    client();
    return 0;
    int hole_radius;
    cout << "Enter hole radius:";
    cin  >> hole_radius;

    int peg_radius;
    cout << "Enter peg radius:";
    cin  >> peg_radius;

    auto hole  = new RoundHole(hole_radius);
    auto r_peg = new RoundPeg(peg_radius);

    cout << "Does round peg fits this hole? " << endl
         << ((hole->fits(r_peg))? "Yes" : "No") << endl;

    auto small_sq_peg = new SquarePeg(5);
    auto large_sq_peg = new SquarePeg(10);

    auto s_sq_peg_adapter = new SquarePegAdapter(*small_sq_peg);
    auto l_sq_peg_adapter = new SquarePegAdapter(*large_sq_peg);

    cout << "Does small square peg fits this hole via adapter? " << endl
         << ((hole->fits(s_sq_peg_adapter))? "Yes" : "No") << endl;

    cout << "Does large square peg fits this hole via adapter? " << endl
         << ((hole->fits(l_sq_peg_adapter))? "Yes" : "No") << endl;

    return 0;
}
#include <boost/chrono.hpp>
#include <cmath>
#include<bits/stdc++.h>
int main()
{

    boost::chrono::system_clock::time_point start = boost::chrono::system_clock::now();

    for ( long i = 0; i < 10000000; ++i )
    std::sqrt( 123.456L ); // burn some time

    boost::chrono::duration<double> sec = boost::chrono::system_clock::now() - start;
    std::cout << "took " << sec.count() << " seconds\n";
    return 0;

	
<<<<<<< HEAD

=======
>>>>>>> b71171336142c465e5cc984776d971732c0366f7
}

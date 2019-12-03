#include <iostream>
#include <list>
#include <utility> // for std::pair

/*
 * Lorem ipsum dolor sit amet, consectetur adipiscing elit.
  * Cras fermentum id diam sit amet consequat.
 * Nulla ac lectus et neque ultricies sodales.
*/

/*
 * Lorem ipsum dolor sit amet, consectetur adipiscing elit.
* Cras fermentum id diam sit amet consequat.
  * Nulla ac lectus et neque ultricies sodales.
 */

/*
 * Lorem ipsum dolor sit amet, consectetur adipiscing elit.
* Cras fermentum id diam sit amet consequat.
  * Nulla ac lectus et neque ultricies sodales.
 */


int main()
{
	/*
	* In ultrices turpis at purus venenatis, ac aliquam quam luctus.
	* Sed ultrices ac dui ut tincidunt. Maecenas in egestas eros.
	 * Pellentesque ac libero vitae ante efficitur interdum pulvinar ac sapien.
	 */
	std::list<std::pair< int, int> > *lp = new std::list< std::pair<int, int> >(10);

	/*
	* In ultrices turpis at purus venenatis, ac aliquam quam luctus.
	* Sed ultrices ac dui ut tincidunt. Maecenas in egestas eros.
	 * Pellentesque ac libero vitae ante efficitur interdum pulvinar ac sapien.
	*/
	std::cout << "lp size is " << lp->size() << '\n';

	delete lp;

	return 0;
}
#include "Skipper.h"

// Constructors/Destructors
//  

Skipper::Skipper ( ) {
initAttributes();
}

Skipper::~Skipper ( ) { }

//  
// Methods
//  


// Accessor methods
//  


/**
 * Add a Balades object to the m_baladesVector List
 */
void Skipper::addBalades ( Balade * add_object ) {
  m_baladesVector.push_back(add_object);
}

/**
 * Remove a Balades object from m_baladesVector List
 */
void Skipper::removeBalades ( Balade * remove_object ) {
  int i, size = m_baladesVector.size();
  for ( i = 0; i < size; ++i) {
  	Balade * item = m_baladesVector.at(i);
  	if(item == remove_object) {
  		vector<Balade *>::iterator it = m_baladesVector.begin() + i;
  		m_baladesVector.erase(it);
  		return;
  	}
   }
}

/**
 * Get the list of Balades objects held by m_baladesVector
 * @return vector<Balade *> list of Balades objects held by m_baladesVector
 */
vector<Balade *> Skipper::getBaladesList ( ) {
  return m_baladesVector;
}

// Other methods
//  

void Skipper::initAttributes ( ) {
}


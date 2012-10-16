#include "TypeBateau.h"

// Constructors/Destructors
//  

TypeBateau::TypeBateau ( ) {
initAttributes();
}

TypeBateau::~TypeBateau ( ) { }

//  
// Methods
//  


// Accessor methods
//  


/**
 * Add a Permis object to the m_permisVector List
 */
void TypeBateau::addPermis ( undef * add_object ) {
  m_permisVector.push_back(add_object);
}

/**
 * Remove a Permis object from m_permisVector List
 */
void TypeBateau::removePermis ( undef * remove_object ) {
  int i, size = m_permisVector.size();
  for ( i = 0; i < size; ++i) {
  	undef * item = m_permisVector.at(i);
  	if(item == remove_object) {
  		vector<undef *>::iterator it = m_permisVector.begin() + i;
  		m_permisVector.erase(it);
  		return;
  	}
   }
}

/**
 * Get the list of Permis objects held by m_permisVector
 * @return vector<undef *> list of Permis objects held by m_permisVector
 */
vector<undef *> TypeBateau::getPermisList ( ) {
  return m_permisVector;
}

// Other methods
//  

void TypeBateau::initAttributes ( ) {
}


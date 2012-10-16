#include "Bateau.h"

// Constructors/Destructors
//  

Bateau::Bateau ( ) {
initAttributes();
}

Bateau::~Bateau ( ) { }

//  
// Methods
//  


// Accessor methods
//  


/**
 * Add a Balades object to the m_baladesVector List
 */
void Bateau::addBalades ( Balade * add_object ) {
  m_baladesVector.push_back(add_object);
}

/**
 * Remove a Balades object from m_baladesVector List
 */
void Bateau::removeBalades ( Balade * remove_object ) {
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
vector<Balade *> Bateau::getBaladesList ( ) {
  return m_baladesVector;
}

/**
 * Set the value of m_type
 * @param new_var the new value of m_type
 */
void Bateau::setType ( TypeBateau * new_var ) {
  m_type = new_var;
}

/**
 * Get the value of m_type
 * @return the value of m_type
 */
TypeBateau * Bateau::getType ( ) {
  return m_type;
}

// Other methods
//  

void Bateau::initAttributes ( ) {
  m_type = new TypeBateau( );
}


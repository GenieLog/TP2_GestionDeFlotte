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
void TypeBateau::addPermis ( Permis * add_object ) {
				m_permisVector.push_back(add_object);
}

/**
 * Remove a Permis object from m_permisVector List
 */
void TypeBateau::removePermis ( Permis * remove_object ) {
				int i, size = m_permisVector.size();
				for ( i = 0; i < size; ++i) {
					Permis * item = m_permisVector.at(i);
					if(item == remove_object) {
						vector<Permis *>::iterator it = m_permisVector.begin() + i;
						m_permisVector.erase(it);
						return;
					}
				 }
}

/**
 * Get the list of Permis objects held by m_permisVector
 * \return vector<Permis *> list of Permis objects held by m_permisVector
 */
vector<Permis *> TypeBateau::getPermisList ( ) {
				return m_permisVector;
}

// Other methods
//  

void TypeBateau::initAttributes ( ) {
}


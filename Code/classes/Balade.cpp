#include "Balade.h"

// Constructors/Destructors
//  

Balade::Balade ( ) {
initAttributes();
}

Balade::~Balade ( ) { }

//  
// Methods
//  


// Accessor methods
//  


/**
 * Set the value of m_capitaine
 * balade en tant que capitaine
 * @param new_var the new value of m_capitaine
 */
void Balade::setCapitaine ( Client * new_var ) {
  m_capitaine = new_var;
}

/**
 * Get the value of m_capitaine
 * balade en tant que capitaine
 * @return the value of m_capitaine
 */
Client * Balade::getCapitaine ( ) {
  return m_capitaine;
}

/**
 * Add a Accompagnateurs object to the m_accompagnateursVector List
 */
void Balade::addAccompagnateurs ( Client * add_object ) {
  m_accompagnateursVector.push_back(add_object);
}

/**
 * Remove a Accompagnateurs object from m_accompagnateursVector List
 */
void Balade::removeAccompagnateurs ( Client * remove_object ) {
  int i, size = m_accompagnateursVector.size();
  for ( i = 0; i < size; ++i) {
  	Client * item = m_accompagnateursVector.at(i);
  	if(item == remove_object) {
  		vector<Client *>::iterator it = m_accompagnateursVector.begin() + i;
  		m_accompagnateursVector.erase(it);
  		return;
  	}
   }
}

/**
 * Get the list of Accompagnateurs objects held by m_accompagnateursVector
 * @return vector<Client *> list of Accompagnateurs objects held by
 * m_accompagnateursVector
 */
vector<Client *> Balade::getAccompagnateursList ( ) {
  return m_accompagnateursVector;
}

/**
 * Set the value of m_bateau
 * @param new_var the new value of m_bateau
 */
void Balade::setBateau ( Bateau * new_var ) {
  m_bateau = new_var;
}

/**
 * Get the value of m_bateau
 * @return the value of m_bateau
 */
Bateau * Balade::getBateau ( ) {
  return m_bateau;
}

/**
 * Add a Skipper object to the m_skipperVector List
 */
void Balade::addSkipper ( Skipper * add_object ) {
  m_skipperVector.push_back(add_object);
}

/**
 * Remove a Skipper object from m_skipperVector List
 */
void Balade::removeSkipper ( Skipper * remove_object ) {
  int i, size = m_skipperVector.size();
  for ( i = 0; i < size; ++i) {
  	Skipper * item = m_skipperVector.at(i);
  	if(item == remove_object) {
  		vector<Skipper *>::iterator it = m_skipperVector.begin() + i;
  		m_skipperVector.erase(it);
  		return;
  	}
   }
}

/**
 * Get the list of Skipper objects held by m_skipperVector
 * @return vector<Skipper *> list of Skipper objects held by m_skipperVector
 */
vector<Skipper *> Balade::getSkipperList ( ) {
  return m_skipperVector;
}

/**
 * Add a Escales object to the m_escalesVector List
 */
void Balade::addEscales ( Escale * add_object ) {
  m_escalesVector.push_back(add_object);
}

/**
 * Remove a Escales object from m_escalesVector List
 */
void Balade::removeEscales ( Escale * remove_object ) {
  int i, size = m_escalesVector.size();
  for ( i = 0; i < size; ++i) {
  	Escale * item = m_escalesVector.at(i);
  	if(item == remove_object) {
  		vector<Escale *>::iterator it = m_escalesVector.begin() + i;
  		m_escalesVector.erase(it);
  		return;
  	}
   }
}

/**
 * Get the list of Escales objects held by m_escalesVector
 * @return vector<Escale *> list of Escales objects held by m_escalesVector
 */
vector<Escale *> Balade::getEscalesList ( ) {
  return m_escalesVector;
}

/**
 * Add a Escales object to the m_escalesVector List
 */
void Balade::addEscales ( Escale * add_object ) {
  m_escalesVector.push_back(add_object);
}

/**
 * Remove a Escales object from m_escalesVector List
 */
void Balade::removeEscales ( Escale * remove_object ) {
  int i, size = m_escalesVector.size();
  for ( i = 0; i < size; ++i) {
  	Escale * item = m_escalesVector.at(i);
  	if(item == remove_object) {
  		vector<Escale *>::iterator it = m_escalesVector.begin() + i;
  		m_escalesVector.erase(it);
  		return;
  	}
   }
}

/**
 * Get the list of Escales objects held by m_escalesVector
 * @return vector<Escale *> list of Escales objects held by m_escalesVector
 */
vector<Escale *> Balade::getEscalesList ( ) {
  return m_escalesVector;
}

// Other methods
//  

void Balade::initAttributes ( ) {
  id_balade = null;
  m_capitaine = new Client( );
  m_bateau = new Bateau( );
}


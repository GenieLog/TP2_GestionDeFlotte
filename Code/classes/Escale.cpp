#include "Escale.h"

// Constructors/Destructors
//  

Escale::Escale ( ) {
initAttributes();
}

Escale::~Escale ( ) { }

//  
// Methods
//  


// Accessor methods
//  


/**
 * Set the value of m_balade
 * @param new_var the new value of m_balade
 */
void Escale::setBalade ( Balade * new_var ) {
  m_balade = new_var;
}

/**
 * Get the value of m_balade
 * @return the value of m_balade
 */
Balade * Escale::getBalade ( ) {
  return m_balade;
}

/**
 * Set the value of m_balade
 * @param new_var the new value of m_balade
 */
void Escale::setBalade ( Balade * new_var ) {
  m_balade = new_var;
}

/**
 * Get the value of m_balade
 * @return the value of m_balade
 */
Balade * Escale::getBalade ( ) {
  return m_balade;
}

// Other methods
//  

void Escale::initAttributes ( ) {
  m_balade = new Balade( );
}


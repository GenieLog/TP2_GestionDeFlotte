#include "Client.h"

// Constructors/Destructors
//  

Client::Client ( ) {
initAttributes();
}

Client::~Client ( ) { }

//  
// Methods
//  


// Accessor methods
//  


/**
 * Add a BaladesAsCapit object to the m_baladesascapitVector List
 */
void Client::addBaladesAsCapit ( Balade * add_object ) {
				m_baladesascapitVector.push_back(add_object);
}

/**
 * Remove a BaladesAsCapit object from m_baladesascapitVector List
 */
void Client::removeBaladesAsCapit ( Balade * remove_object ) {
				int i, size = m_baladesascapitVector.size();
				for ( i = 0; i < size; ++i) {
					Balade * item = m_baladesascapitVector.at(i);
					if(item == remove_object) {
						vector<Balade *>::iterator it = m_baladesascapitVector.begin() + i;
						m_baladesascapitVector.erase(it);
						return;
					}
				 }
}

/**
 * Get the list of BaladesAsCapit objects held by m_baladesascapitVector
 * \return vector<Balade *> list of BaladesAsCapit objects held by
 * m_baladesascapitVector
 */
vector<Balade *> Client::getBaladesAsCapitList ( ) {
				return m_baladesascapitVector;
}

/**
 * Add a BaladesAsAccomp object to the m_baladesasaccompVector List
 */
void Client::addBaladesAsAccomp ( Balade * add_object ) {
				m_baladesasaccompVector.push_back(add_object);
}

/**
 * Remove a BaladesAsAccomp object from m_baladesasaccompVector List
 */
void Client::removeBaladesAsAccomp ( Balade * remove_object ) {
				int i, size = m_baladesasaccompVector.size();
				for ( i = 0; i < size; ++i) {
					Balade * item = m_baladesasaccompVector.at(i);
					if(item == remove_object) {
						vector<Balade *>::iterator it = m_baladesasaccompVector.begin() + i;
						m_baladesasaccompVector.erase(it);
						return;
					}
				 }
}

/**
 * Get the list of BaladesAsAccomp objects held by m_baladesasaccompVector
 * \return vector<Balade *> list of BaladesAsAccomp objects held by
 * m_baladesasaccompVector
 */
vector<Balade *> Client::getBaladesAsAccompList ( ) {
				return m_baladesasaccompVector;
}

/**
 * Add a Permis object to the m_permisVector List
 */
void Client::addPermis ( Permis * add_object ) {
				m_permisVector.push_back(add_object);
}

/**
 * Remove a Permis object from m_permisVector List
 */
void Client::removePermis ( Permis * remove_object ) {
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
vector<Permis *> Client::getPermisList ( ) {
				return m_permisVector;
}

// Other methods
//  

void Client::initAttributes ( ) {
}


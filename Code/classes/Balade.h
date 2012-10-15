
#ifndef BALADE_H
#define BALADE_H

#include <string.h>
#include vector.h

class Client;
#include "Client.h"
#include "Bateau.h"
class Skipper;
class Escale;
#include "Escale.h"


/**
  * class Balade
  * 
  */

class Balade
{
public:

				// Constructors/Destructors
				//  


				/**
				 * Empty Constructor
				 */
				Balade ( );

				/**
				 * Empty Destructor
				 */
				virtual ~Balade ( );

				// Static Public attributes
				//  

				// Public attributes
				//  


				// balade en tant que capitaine
				Client * m_capitaine;

				vector<Client*> m_accompagnateursVector;

				Bateau * m_bateau;

				vector<Skipper*> m_skipperVector;

				vector<Escale*> m_escalesVector;

				vector<Escale*> m_escalesVector;

				// Public attribute accessor methods
				//  


				// Public attribute accessor methods
				//  


				/**
				 * Set the value of m_capitaine
				 * balade en tant que capitaine
				 * \param new_var the new value of m_capitaine
				 */
				void setCapitaine ( Client * new_var );

				/**
				 * Get the value of m_capitaine
				 * balade en tant que capitaine
				 * \return the value of m_capitaine
				 */
				Client * getCapitaine ( );


				/**
				 * Add a Accompagnateurs object to the m_accompagnateursVector List
				 */
				void addAccompagnateurs ( Client * add_object );

				/**
				 * Remove a Accompagnateurs object from m_accompagnateursVector List
				 */
				void removeAccompagnateurs ( Client * remove_object );

				/**
				 * Get the list of Accompagnateurs objects held by m_accompagnateursVector
				 * \return vector<Client *> list of Accompagnateurs objects held by
				 * m_accompagnateursVector
				 */
				vector<Client *> getAccompagnateursList ( );

				/**
				 * Set the value of m_bateau
				 * \param new_var the new value of m_bateau
				 */
				void setBateau ( Bateau * new_var );

				/**
				 * Get the value of m_bateau
				 * \return the value of m_bateau
				 */
				Bateau * getBateau ( );


				/**
				 * Add a Skipper object to the m_skipperVector List
				 */
				void addSkipper ( Skipper * add_object );

				/**
				 * Remove a Skipper object from m_skipperVector List
				 */
				void removeSkipper ( Skipper * remove_object );

				/**
				 * Get the list of Skipper objects held by m_skipperVector
				 * \return vector<Skipper *> list of Skipper objects held by m_skipperVector
				 */
				vector<Skipper *> getSkipperList ( );

				/**
				 * Add a Escales object to the m_escalesVector List
				 */
				void addEscales ( Escale add_object );

				/**
				 * Remove a Escales object from m_escalesVector List
				 */
				void removeEscales ( Escale remove_object );

				/**
				 * Get the list of Escales objects held by m_escalesVector
				 * \return vector<Escale> list of Escales objects held by m_escalesVector
				 */
				vector<Escale> getEscalesList ( );

				/**
				 * Add a Escales object to the m_escalesVector List
				 */
				void addEscales ( Escale add_object );

				/**
				 * Remove a Escales object from m_escalesVector List
				 */
				void removeEscales ( Escale remove_object );

				/**
				 * Get the list of Escales objects held by m_escalesVector
				 * \return vector<Escale> list of Escales objects held by m_escalesVector
				 */
				vector<Escale> getEscalesList ( );


				/**
				 * \param  escale
				 */
				void addEscale (Escale escale )
				{
				}

protected:

				// Static Protected attributes
				//  

				// Protected attributes
				//  

public:


				// Protected attribute accessor methods
				//  

protected:

public:


				// Protected attribute accessor methods
				//  

protected:


private:

				// Static Private attributes
				//  

				// Private attributes
				//  

				unsigned int id_balade;
				string date_depart;
				string date_fin;
public:


				// Private attribute accessor methods
				//  

private:

public:


				// Private attribute accessor methods
				//  


				/**
				 * Set the value of id_balade
				 * \param new_var the new value of id_balade
				 */
				void setId_balade ( unsigned int new_var )				 {
												id_balade = new_var;
				}

				/**
				 * Get the value of id_balade
				 * \return the value of id_balade
				 */
				unsigned int getId_balade ( )				 {
								return id_balade;
				}

				/**
				 * Set the value of date_depart
				 * \param new_var the new value of date_depart
				 */
				void setDate_depart ( string new_var )				 {
												date_depart = new_var;
				}

				/**
				 * Get the value of date_depart
				 * \return the value of date_depart
				 */
				string getDate_depart ( )				 {
								return date_depart;
				}

				/**
				 * Set the value of date_fin
				 * \param new_var the new value of date_fin
				 */
				void setDate_fin ( string new_var )				 {
												date_fin = new_var;
				}

				/**
				 * Get the value of date_fin
				 * \return the value of date_fin
				 */
				string getDate_fin ( )				 {
								return date_fin;
				}
private:


				void initAttributes ( ) ;

};

#endif // BALADE_H

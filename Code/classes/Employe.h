
#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "Personne.h"

#include <string.h>

/**
  * class Employe
  * 
  */

class Employe : virtual public Personne
{
public:

				// Constructors/Destructors
				//  


				/**
				 * Empty Constructor
				 */
				Employe ( );

				/**
				 * Empty Destructor
				 */
				virtual ~Employe ( );

				// Static Public attributes
				//  

				// Public attributes
				//  


				// Public attribute accessor methods
				//  


				// Public attribute accessor methods
				//  


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

				static string postes_;
				// Private attributes
				//  

				unsigned int id_employe;
				string poste;
public:


				// Private attribute accessor methods
				//  


				/**
				 * Get the value of postes_
				 * \return the value of postes_
				 */
				string getPostes_ ( )				 {
								return Employe::postes_;
				}
private:

public:


				// Private attribute accessor methods
				//  


				/**
				 * Set the value of id_employe
				 * \param new_var the new value of id_employe
				 */
				void setId_employe ( unsigned int new_var )				 {
												id_employe = new_var;
				}

				/**
				 * Get the value of id_employe
				 * \return the value of id_employe
				 */
				unsigned int getId_employe ( )				 {
								return id_employe;
				}

				/**
				 * Set the value of poste
				 * \param new_var the new value of poste
				 */
				void setPoste ( string new_var )				 {
												poste = new_var;
				}

				/**
				 * Get the value of poste
				 * \return the value of poste
				 */
				string getPoste ( )				 {
								return poste;
				}
private:


				void initAttributes ( ) ;

};

#endif // EMPLOYE_H

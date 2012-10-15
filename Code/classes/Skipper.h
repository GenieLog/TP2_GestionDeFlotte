
#ifndef SKIPPER_H
#define SKIPPER_H
#include "Personne.h"

#include <string.h>
#include vector.h

#include "Balade.h"


/**
  * class Skipper
  * 
  */

class Skipper : virtual public Personne
{
public:

				// Constructors/Destructors
				//  


				/**
				 * Empty Constructor
				 */
				Skipper ( );

				/**
				 * Empty Destructor
				 */
				virtual ~Skipper ( );

				// Static Public attributes
				//  

				// Public attributes
				//  


				vector<Balade*> m_baladesVector;

				// Public attribute accessor methods
				//  


				// Public attribute accessor methods
				//  


				/**
				 * Add a Balades object to the m_baladesVector List
				 */
				void addBalades ( Balade * add_object );

				/**
				 * Remove a Balades object from m_baladesVector List
				 */
				void removeBalades ( Balade * remove_object );

				/**
				 * Get the list of Balades objects held by m_baladesVector
				 * \return vector<Balade *> list of Balades objects held by m_baladesVector
				 */
				vector<Balade *> getBaladesList ( );

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

				unsigned int id_skipper;
public:


				// Private attribute accessor methods
				//  

private:

public:


				// Private attribute accessor methods
				//  


				/**
				 * Set the value of id_skipper
				 * \param new_var the new value of id_skipper
				 */
				void setId_skipper ( unsigned int new_var )				 {
												id_skipper = new_var;
				}

				/**
				 * Get the value of id_skipper
				 * \return the value of id_skipper
				 */
				unsigned int getId_skipper ( )				 {
								return id_skipper;
				}
private:


				void initAttributes ( ) ;

};

#endif // SKIPPER_H

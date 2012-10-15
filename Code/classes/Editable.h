
#ifndef EDITABLE_H
#define EDITABLE_H

#include <string.h>

/**
  * class Editable
  * 
  */

/******************************* Abstract Class ****************************
Editable does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class Editable
{
public:

				// Constructors/Destructors
				//  


				/**
				 * Empty Constructor
				 */
				Editable ( );

				/**
				 * Empty Destructor
				 */
				virtual ~Editable ( );

				// Static Public attributes
				//  

				// Public attributes
				//  


				// Public attribute accessor methods
				//  


				// Public attribute accessor methods
				//  



				/**
				 * \return bool
				 */
				bool save ( )
				{
				}


				/**
				 * \return bool
				 */
				bool delete ( )
				{
				}

protected:

				// Static Protected attributes
				//  

				// Protected attributes
				//  

				string file_save;
public:


				// Protected attribute accessor methods
				//  

protected:

public:


				// Protected attribute accessor methods
				//  


				/**
				 * Set the value of file_save
				 * \param new_var the new value of file_save
				 */
				void setFile_save ( string new_var )				 {
												file_save = new_var;
				}

				/**
				 * Get the value of file_save
				 * \return the value of file_save
				 */
				string getFile_save ( )				 {
								return file_save;
				}
protected:


private:

				// Static Private attributes
				//  

				// Private attributes
				//  

public:


				// Private attribute accessor methods
				//  

private:

public:


				// Private attribute accessor methods
				//  

private:


				void initAttributes ( ) ;

};

#endif // EDITABLE_H

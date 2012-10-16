
#ifndef TYPEBATEAU_H
#define TYPEBATEAU_H

#include <string>
#include vector

#include "undef.h"


/**
  * class TypeBateau
  * 
  */

class TypeBateau
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  TypeBateau ( );

  /**
   * Empty Destructor
   */
  virtual ~TypeBateau ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  vector<undef*> m_permisVector;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Add a Permis object to the m_permisVector List
   */
  void addPermis ( undef * add_object );

  /**
   * Remove a Permis object from m_permisVector List
   */
  void removePermis ( undef * remove_object );

  /**
   * Get the list of Permis objects held by m_permisVector
   * @return vector<undef *> list of Permis objects held by m_permisVector
   */
  vector<undef *> getPermisList ( );

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

  unsigned int id_type;
  unsigned int cylindre;
  bool voile;
  string permis;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id_type
   * @param new_var the new value of id_type
   */
  void setId_type ( unsigned int new_var )   {
      id_type = new_var;
  }

  /**
   * Get the value of id_type
   * @return the value of id_type
   */
  unsigned int getId_type ( )   {
    return id_type;
  }

  /**
   * Set the value of cylindre
   * @param new_var the new value of cylindre
   */
  void setCylindre ( unsigned int new_var )   {
      cylindre = new_var;
  }

  /**
   * Get the value of cylindre
   * @return the value of cylindre
   */
  unsigned int getCylindre ( )   {
    return cylindre;
  }

  /**
   * Set the value of voile
   * @param new_var the new value of voile
   */
  void setVoile ( bool new_var )   {
      voile = new_var;
  }

  /**
   * Get the value of voile
   * @return the value of voile
   */
  bool getVoile ( )   {
    return voile;
  }

  /**
   * Set the value of permis
   * @param new_var the new value of permis
   */
  void setPermis ( string new_var )   {
      permis = new_var;
  }

  /**
   * Get the value of permis
   * @return the value of permis
   */
  string getPermis ( )   {
    return permis;
  }
private:


  void initAttributes ( ) ;

};

#endif // TYPEBATEAU_H

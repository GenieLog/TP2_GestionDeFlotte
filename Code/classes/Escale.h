
#ifndef ESCALE_H
#define ESCALE_H

#include <string>
#include vector

#include "Balade.h"
class Balade;


/**
  * class Escale
  * 
  */

class Escale
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Escale ( );

  /**
   * Empty Destructor
   */
  virtual ~Escale ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  Balade * m_balade;

  Balade * m_balade;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of m_balade
   * @param new_var the new value of m_balade
   */
  void setBalade ( Balade new_var );

  /**
   * Get the value of m_balade
   * @return the value of m_balade
   */
  Balade getBalade ( );


  /**
   * Set the value of m_balade
   * @param new_var the new value of m_balade
   */
  void setBalade ( Balade new_var );

  /**
   * Get the value of m_balade
   * @return the value of m_balade
   */
  Balade getBalade ( );



  /**
   * @return unsigned int
   */
  unsigned int getDepart ( )
  {
  }


  /**
   * @return unsigned int
   */
  unsigned int getArrivee ( )
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

  unsigned int id_escale;
  string name;
  unsigned int dateArrivee;
  unsigned int dateDepart;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id_escale
   * @param new_var the new value of id_escale
   */
  void setId_escale ( unsigned int new_var )   {
      id_escale = new_var;
  }

  /**
   * Get the value of id_escale
   * @return the value of id_escale
   */
  unsigned int getId_escale ( )   {
    return id_escale;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName ( string new_var )   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ( )   {
    return name;
  }

  /**
   * Set the value of dateArrivee
   * @param new_var the new value of dateArrivee
   */
  void setDateArrivee ( unsigned int new_var )   {
      dateArrivee = new_var;
  }

  /**
   * Get the value of dateArrivee
   * @return the value of dateArrivee
   */
  unsigned int getDateArrivee ( )   {
    return dateArrivee;
  }

  /**
   * Set the value of dateDepart
   * @param new_var the new value of dateDepart
   */
  void setDateDepart ( unsigned int new_var )   {
      dateDepart = new_var;
  }

  /**
   * Get the value of dateDepart
   * @return the value of dateDepart
   */
  unsigned int getDateDepart ( )   {
    return dateDepart;
  }
private:


  void initAttributes ( ) ;

};

#endif // ESCALE_H

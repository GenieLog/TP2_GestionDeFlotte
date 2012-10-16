
#ifndef BATEAU_H
#define BATEAU_H

#include <string>
#include vector

class Balade;
#include "TypeBateau.h"


/**
  * class Bateau
  * 
  */

class Bateau
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Bateau ( );

  /**
   * Empty Destructor
   */
  virtual ~Bateau ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  vector<Balade*> m_baladesVector;

  TypeBateau * m_type;

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
   * @return vector<Balade *> list of Balades objects held by m_baladesVector
   */
  vector<Balade *> getBaladesList ( );

  /**
   * Set the value of m_type
   * @param new_var the new value of m_type
   */
  void setType ( TypeBateau * new_var );

  /**
   * Get the value of m_type
   * @return the value of m_type
   */
  TypeBateau * getType ( );



  /**
   * @return bool
   */
  bool need_revision ( )
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

  unsigned int id_bateau;
  string marque;
  Datetime mise_a_leau;
  unsigned int heures_utilisation;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id_bateau
   * @param new_var the new value of id_bateau
   */
  void setId_bateau ( unsigned int new_var )   {
      id_bateau = new_var;
  }

  /**
   * Get the value of id_bateau
   * @return the value of id_bateau
   */
  unsigned int getId_bateau ( )   {
    return id_bateau;
  }

  /**
   * Set the value of marque
   * @param new_var the new value of marque
   */
  void setMarque ( string new_var )   {
      marque = new_var;
  }

  /**
   * Get the value of marque
   * @return the value of marque
   */
  string getMarque ( )   {
    return marque;
  }

  /**
   * Set the value of mise_a_leau
   * @param new_var the new value of mise_a_leau
   */
  void setMise_a_leau ( Datetime new_var )   {
      mise_a_leau = new_var;
  }

  /**
   * Get the value of mise_a_leau
   * @return the value of mise_a_leau
   */
  Datetime getMise_a_leau ( )   {
    return mise_a_leau;
  }

  /**
   * Set the value of heures_utilisation
   * @param new_var the new value of heures_utilisation
   */
  void setHeures_utilisation ( unsigned int new_var )   {
      heures_utilisation = new_var;
  }

  /**
   * Get the value of heures_utilisation
   * @return the value of heures_utilisation
   */
  unsigned int getHeures_utilisation ( )   {
    return heures_utilisation;
  }
private:


  void initAttributes ( ) ;

};

#endif // BATEAU_H

/*! \file cartesianVelocityElements.h
 *    This header file contains the Cartesian velocity elements class included
 *    in Tudat.
 *
 *    Path              : /Astrodynamics/States/
 *    Version           : 1
 *    Check status      : Checked
 *
 *    Checker           : K. Kumar
 *    Affiliation       : Delft University of Technology
 *    E-mail address    : K.Kumar@tudelft.nl
 *
 *    Checker           : D. Dirkx
 *    Affiliation       : Delft University of Technology
 *    E-mail address    : D.Dirkx@tudelft.nl
 *
 *    Date created      : 7 Feburary, 2011
 *    Last modified     : 7 February, 2011
 *
 *    References
 *
 *    Notes
 *
 *    Copyright (c) 2010 Delft University of Technology.
 *
 *    This software is protected by national and international copyright.
 *    Any unauthorized use, reproduction or modification is unlawful and
 *    will be prosecuted. Commercial and non-private application of the
 *    software in any form is strictly prohibited unless otherwise granted
 *    by the authors.
 *
 *    The code is provided without any warranty; without even the implied
 *    warranty of merchantibility or fitness for a particular purpose.
 *
 *    Changelog
 *      YYMMDD    Author            Comment
 *      110207    K. Kumar          First creation of code.
 */

#ifndef CARTESIANVELOCITYELEMENTS_H
#define CARTESIANVELOCITYELEMENTS_H

// Include statements.
#include "orbitalElements.h"

//! Cartesian position elements class.
/*!
 * This class contains the Cartesian position elements.
 */
class CartesianVelocityElements : public OrbitalElements
{
public:

    //! Default constructor.
    /*!
     * Default constructor.
     */
    CartesianVelocityElements( );

    //! Default destructor.
    /*!
     * Default destructor.
     */
    ~CartesianVelocityElements( );

    //! Set Cartesian element: xDot.
    /*!
     * Sets the Cartesian element: xDot.
     * \param cartesianElementXDot Cartesian element: xDot.
     */
    void setCartesianElementXDot( const double& cartesianElementXDot );

    //! Set Cartesian element: yDot.
    /*!
     * Sets the Cartesian element: yDot.
     * \param cartesianElementYDot Cartesian element: yDot.
     */
    void setCartesianElementYDot( const double& cartesianElementYDot );

    //! Set Cartesian element: zDot.
    /*!
     * Sets the Cartesian element: zDot.
     * \param cartesianElementZDot Cartesian element: zDot.
     */
    void setCartesianElementZDot( const double& cartesianElementZDot );

    //! Get Cartesian element: xDot.
    /*!
     * Returns the Cartesian element: xDot.
     * \return Cartesian element: xDot.
     */
    double& getCartesianElementXDot( );

    //! Get Cartesian element: yDot.
    /*!
     * Returns the Cartesian element: yDot.
     * \return Cartesian element: yDot.
     */
    double& getCartesianElementYDot( );

    //! Get Cartesian element: zDot.
    /*!
     * Returns the Cartesian element: zDot.
     * \return Cartesian element: zDot.
     */
    double& getCartesianElementZDot( );

    //! Overload ostream to print class information.
    /*!
     * Overloads ostream to print class information.
     * \param stream Stream object.
     * \param cartesianVelocityElements CartesianVelocityElements object.
     * \return Stream object.
     */
    friend std::ostream& operator<<( std::ostream& stream,
                                     CartesianVelocityElements&
                                     cartesianVelocityElements );

protected:

private:
};

#endif // CARTESIANVELOCITYELEMENTS_H

// End of file.
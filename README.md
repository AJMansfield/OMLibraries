OMMenuMgr Library for AVR
=========================

User Interface Libraries for the Arduino Platform
------------------------------------------------------------------------------

This set of libraries provides several key components to aid in easily and quickly developing menu interfaces.

Key Libraries
-------------

### OMMenuMgr

The OpenMoCo Menu Manager provides a nearly complete automation of a menuing system. This class is designed to allow for rapid development of menuing systems on Arduino devices, using five input controls (buttons), and character displays of at least two rows. 

Designed to make it easy to implement menu systems, the Menu Manager requires the developer to do little more than specify the structure of the menu, and how to draw on the display.

Key features:

*    Menu structures automatically and easily stored in program memory instead of SRAM
*    Automatic handling of either analog or digital button inputs
*    Automatic management of user inputs for numeric and select list types
**        In-place editing with ability for user to abort
**        Write-back on user save to original variables
**        Specify lists of display values for users to select between
**        Control over user input precision in floats, and more
*    Ability to trigger code actions from menu items
*    One-method polling automatically handles and executes menu as-needed
*    Streamlined setup for complex and even recursive menus
*    Support for any width screen
*    Reduced memory footprint
*    No fixed limitations on menu depths, have as many sub-menus as you require
*    Flexible drawing methodology allows the user of any character-based (or even graphic) display




 

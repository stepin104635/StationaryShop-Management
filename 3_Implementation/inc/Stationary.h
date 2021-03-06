/**
* @file Stationary.h
*/

#ifndef STATIONARY_H_INCLUDED
#define STATIONARY_H_INCLUDED
/**
*calculation of Stationary products fare that customer should pay
*@param[in] items count to calculate total fare depending upon the product
*/
int si_cal(int *items);
/**
*calculation of total fare for books that customer should pay
*@param[in] items count to calculate total fare depending upon selected book
*/
int bill(int *items);
/**
*displays the list of products present in the store along with count of the product
*/
void display_items();
/**
*the function is for admin (has to log in) who has password to enter and then to add items i.e., to update the count of the product in the store
*/
int add_items();
/**
*calculation of total bill to paid by the customer with discount
*@param[in] items is array of items to calculate the fare
*if the customer bought greater than or equal to 5 books or if stationary products greater than or equal to 10 avails offer
*and also if the customer is old customer add on another 5% offer on the total fare
*/
int book_cal(int *items);

#endif // STATIONARY_H_INCLUDED

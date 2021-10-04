/* Struct
 * 
 * struct {{tag-name}}
 * 	declarator_list;
 *
 * ex)
 * struct cand {
 * 	int pips;
 * 	char suit;
 * }
 *
 * ex2)
 * struct card {
 * 	int pips;
 * 	char suit;
 * } deck[52];
 *
 * - You can use 'typedef' to simplify declarations
 * ex)
 * typedef struct {
 * 	float re;
 * 	float im;
 * } complex;
 * complex a, b, c[10];
 *
 * # How to access struct members
 * - There are two ways to access to members
 *   1. using member access operator dot(.)
 *   2. using member access operator arrow(->) : point member
 *
 * ex) 1st method
 * struct card {
 * 	int pips;
 * 	char suit;
 * } c1, c2, c3;
 * c1.pips = 3;
 * c1.suit = 'h';
 * 
 * ex) 2nd method : somehow more complicated, but need to get used to
 * struct card *ptr_to_card;
 * ptr_to_card = &c1;
 * ptr_to_card->pips = 5;
 * ptr_to_card->suit = 's';
 *
 * cf. arrow operator(->) and dot operator(.) are the highest precedence
 */

<br> 1) Write a program to find the weight of the camel given height, length and stomach radius.
weight = pi \* stomach_raduius^3 \* sqrt(height \* length). using four functions and following function signatures.

<br> float input_radius();
<br> float input_heigth();
<br> float input_length();
<br> float find_weight(float radius, float height, float length);
<br> void output(float radius, float height, float length, float weight);
<br> and int main()

<br> 2) Write a program to find the weight of the camel given height, length and stomach radius.
weight = pi \* stomach_raduius^3 \* sqrt(height \* length). using four functions and following function signatures.
<br> struct camel {
<br> 	float radius, height, length, weight;
<br> };
<br> typedef struct camel Camel;
<br> Camel input(); /\* do not take weight as input from the user \*/
<br> void find_weight(Camel \*c); /\*passing address variable \*/
<br> void output(Camel c);
<br> and int main()

<br> 3. When a camel is 
<br> a) sick its stomach_radius is less than height and less than length.
<br> b) happy its height is less than length and less than stomach_radius.
<br> c) tense its length is less than height and stomach_radius.
<br> Write a program to find whether a camel is sick, happy, or tense with functions and structure. 
<br> struct camel {
<br>	float radius, height, length, weight;
<br>	int mood; /\* sick = 0, happy = 1, tense = 2 \*/
<br> };

<br> typedef struct camel Camel;
<br> Camel input(); /\* do not take weight and mood as input from the user \*/
<br> void find_weight(Camel \*c); /\*passing address variable \*/
<br> void find_mood(Camel \*c);
<br> void output(Camel c);
<br> and int main()

<br> 4) Write a program to find borga^x given x.
<br> The formula for finding borga^x

<br> 1 + x/3! + x^2/5! + x^3/7! .....
<br> stop when the next term is less 0.000001 With four functions.

<br> 5)Write a program to sort a an array using bubble sort.
<br> use following function prototypes.
<br> void input(int n, int a[n]);
<br> void bubble_sort(int n, int a[n]);
<br> void output_array(int n, int a[n]); /\* print all the elements of the array \*/
<br> and main.

<br> 6)Write a program to search for an element using binary search.
<br> use following function prototypes.
<br> void input(int n, int a[n]);
<br> void sort(int n, int a[n]);
<br> int bin_search(int n, int a[n], int key);
<br> void print_position(int n, int a[n], int key, int position);
<br> and main.

<br> 7)Write a program to find if a name is a nice name.
<br> A name is nice if it has at least 2 vowels and 2 consonants in it.
<br> with four functions. 

<br> void input_name(char \*s);
<br> int is_name_nice(char \*s);
<br> void print_name(char \*s, int is_nice);
<br> and 
<br> main().

<br> Array of Structures

<br> 8)Write program to find the weight of a truck load of n camels. 
<br> Take input 
<br> a)  truck weight and
<br> b)  height, radius and length of n camels
<br> and compute the total truck weight. ( Truck weight + weight of the camels)
<br> With functions.

<br> Call functions from earlier programs where required.
<br> float input_truck_weight();
<br> int input_no_camels();
<br> void input_camel_details(int n, Camel c[n]);
<br> float comput_total_weight(int n, Camel c[n], float truck_weight);
<br> void ouput(float total_truck_weight);
<br> and 
<br> int main()

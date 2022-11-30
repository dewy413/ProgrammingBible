# Order of Growth

| *n*            | log<sub>2</sub> *n* | *n*            | *n* log<sub>2</sub> *n* | *n*<sup>2<sup>  | *n*<sup>3<sup>  | 2<sup>*n*</sup>     | *n*!                 |
|----------------|---------------------|----------------|-------------------------|-----------------|-----------------|---------------------|----------------------|
| 10             | 3.3                 | 10<sup>1</sup> | 3.3*10<sup>1</sup>      | 10<sup>2</sup>  | 10<sup>3</sup>  | 10<sup>3</sup>      | 3.6*10<sup>6</sup>   |
| 10<sup>2</sup> | 6.6                 | 10<sup>2</sup> | 6.6*10<sup>2</sup>      | 10<sup>4</sup>  | 10<sup>6</sup>  | 1.3*10<sup>30</sup> | 9.3*10<sup>157</sup> |
| 10<sup>3</sup> | 10                  | 10<sup>3</sup> | 1.0*10<sup>4</sup>      | 10<sup>6</sup>  | 10<sup>9</sup>  |                     |                      |
| 10<sup>4</sup> | 13                  | 10<sup>4</sup> | 1.3*10<sup>5</sup>      | 10<sup>8</sup>  | 10<sup>12</sup> |                     |                      |
| 10<sup>5</sup> | 17                  | 10<sup>5</sup> | 1.7*10<sup>6</sup>      | 10<sup>10</sup> | 10<sup>15</sup> |                     |                      |
| 10<sup>6</sup> | 20                  | 10<sup>6</sup> | 2.0*10<sup>7</sup>      | 10<sup>12</sup> | 10<sup>18</sup> |                     |                      |


# Worst-Cast, Best-Case, and Average-Case Efficiencies

Worst Case
: Efficiency for the worst case of size *n*, which is an input(or inputs) of size *n* for which the algorithm runs the longest among all opposable input of that size. 
: *C*<sub>worst</sub>(n)

Average Case
: Efficiency for the average case of size *n*, which is the amount of some computational resource (typically time) used by the algorithm, averaged over all possible inputs.
: *C*<sub>avg</sub>(n)

Best Case
: Efficiency for the best case of size *n*, which is an input(or inputs) of size *n* for which the algorithm runs the fastest among all opposable input of that size.
: *C*<sub>best</sub>(n)



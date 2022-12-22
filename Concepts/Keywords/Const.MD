# **_const_**

#### - A situation or state that does not change.

**_const_** can be use for methods, variables, and objects.


You use const if you want something in your code to never change and stay the same.

# Variables

Creating a variable with  **_const_**
* You must initialize the variable
```C++
// GOOD 
const int var = 5;

// BAD
const int var;
var = 5;
```
* You cannot assign it anywhere else in the program.
```C++

const int var = 5;

var = 6;

// This will cause an error.

```

* Specific values need to be assigned at the time of making the variable.



# Methods

Creating a method with **_const_** is simpler than a variable. A method that is of type const means that you cannot modifiy that data classes variables.

### Example 
```C++

class Test {
int x = 0;

private:
int y = 0;

public:
int z = 0;
int changeData() {
x++;
y++;
z++;
return x + y + z; // This works
}

int changeDataTwo() const {
x++;// Gives you an error because the method is const.
y++;// Gives you an error because the method is const. 
z++;// Gives you an error because the method is const. 
return x + y + z; // Still works and returns just fine.
}
};

```

# Pointers

Not writing about this yet as I don't feel a need for it, but I do find the idea quite interesting.
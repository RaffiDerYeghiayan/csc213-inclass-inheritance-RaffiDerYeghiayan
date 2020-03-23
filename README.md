# Using Git and Github
1. First download GitHub Desktop
You got to this page by clicking on the link i sent you by email.
1. Click on clone or download button then click on the right of the link to copy it
1. Open GitHub desktop and log in using your username/password
1. Select File->clone repository
1. Select your github repository and set the local directory
1. Open visual studio (2019) and select continue without code (bottom right) (for 2017 see this link
https://tutorials.visualstudio.com/vs-get-started/creating-and-running)
1. Select File->New->Project from existing code. In the project file location select the directory where you have clone the github repository.
1. Type a project name then next
1. Project type select console application
Now you can make the necessary changes to the code (see below). When you are done use github Desktop to PUSH the changes back to the server.

# csc213-inclass-inheritance
1. Write a base class Shapes with one constructor and one destructor. When an object is created the message “A shape is created” must be printed on the screen, and when an object dies, the message “A shape disappeared” must appear on the screen.
Test your code with the instruction ```Shapes s1;```
1. Write two derived classes twoD and threeD with one constructor and one destructor each that indicate when an object is created and deleted (as you did in the previous part). 
Test your code with the instructions ```twoD d2; threeD d3;```
The classes twoD and threeD must have two private members, size (double) and name(string) (size corresponds to the basic length related to a 2D shape, for example the side of a square or the radius of a circle); together with public setters and getters methods. Define a constructor to initialize size and name.
Test your code for example with ```twoD d(5.2,"twoD"); cout<<d.getSize()<<endl```
Observe in the above two cases when the base and derived classes are constructed and destroyed.
1. Write classes Circle and Square that derive from twoD. Each should have the coordinate of the center in addition to the size (the radius in case of the circle and side length in case of the square). Since the base class has a name variable initialized with "Circle" and "Square" respectively.
1. Remove all printouts in the constructors and destructors of all classes.
1. Add a method ```double aread(){return 0;}``` to the twoD class. Override this method in the classes Circle and Square to return the appropriate area.
1. Write a global function ```double total(twoD *d[],int n)``` that takes an array of twoD pointers of length n and returns the total area (i.e. the sum of all areas)
Test the above function with the code below. 

```
int main(){
	twoD d(2.3,"towD");
  Circle c(0, 0, 2);
	Square s(0, 0, 3);
	Cube x(0, 0, 0, 3);
	twoD* d[] = { &c,&s };
	std::cout << "total area is " << std::endl;
	std::cout << total(d, 2) << std::endl;
}
```
## Virtual function and dynamic binding
As you can see the total function is using the member function area() of the base class. This is called early or compile time binding. To force it to do late or run time binding we use the keyword virtual. Add virtual the area function in twoD
```virtual double area()```
1. Run the code again. What do you get for the total?
1. Did we have to use pointers? Try the code with the following modifications
   1. ```double area(twoD d[],int n)```
   1. ```twoD d[]={c,s};```
1. As you can see dynamic binding works only with pointers and references to objects.
## Pure virtual functions and abstract classes
Did we have define area in twoD? We had somehow to force derived classes to have their own area function. But this is not a solution because derived class might not override the area function and therefore we obtain 0. Can we somehow force a derived class to have a certain function? Yes by using pure virtual functions. To make a virtual functions pure we suffix its definition with =0. 

1. replace your definition of area in twoD with
``` virtual double area()=0;```
1. Check the main function and you will see that the compiler is giving an error. This is because if a class (twoD in this instance) has a pure virtual function it becomes an abstract class, it cannot be instantiated directly.
1. Furthermore, if a derived class of an abstract class does not override the pure function **it becomes also an abstract class**
1. Test the above by commenting out the definition of area in the Circle class.
1. Add a pure virtual function ```virtual string getName()=0;``` to class Shape.


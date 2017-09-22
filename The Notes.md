## Learning Path
1. Copy the OpenMesh's tourials. learn the usage of template\const\references.
2. Learn Eigen Library.
3. A new Languages features perday.

[这里面说的不错](http://www.cnblogs.com/wintergrass/archive/2011/04/15/2015020.html)  
---

### const、pointer、reference
1. **const**
const int i = 0; #=> a const must be initialized. 

1. **pointers and const ((that we can))**
```
int i = 0;
const int *p = &i; 
#=> low-level const. 1.we can change p; 2.we CANNOT alter i via p; 3.we can manipulate and alter i direcly.
```

int *const p = &i; #=> top-level const. 1.p will always points to i;

const int *const p = &i;


2. **pointers and const ((that we CANNOT))**

const int i = 0;
int* p = &i;
#=> error : p is a plain pointer

3. **references to const ((that we can))**
int i = 0;
const int &r = i; 

#=> 1.we cannot alter i via r; 2.we can manipulate and alter i direcly;
    3.just the same as low-level pointer; 4.there is no top-level reference , because it's natural from it's defintion;
    
const int i = 0;
const int &r = i;
#=> both reference and underlying object are const

4. **references to const ((that we CANNOT))**

const int i = 0;
int &r = i;
#=> error: nonconst reference to a const object . that is we cannot bind an ordinary int& to a const in object

5. **const在成员函数中**
- 如果返回值不是内部数据类型，将函数A GetA(void) 改写为const A & GetA(void)的确能提高效率。但此时千万千万要小心，
一定要搞清楚函数究竟是想返回一个对象的“拷贝”还是仅返回“别名”就可以了，否则程序会出错。
- const成员函数也不能在函数中调用其他非const 的函数。

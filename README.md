# OODP

Object Oriented Design and Programing

## Unit 1: Introduction to OOPS

### Diagrams

#### Use case diagram

- Bank stuff

#### Sequence diagram

public and protected => protected

- Login use case
- Activating the credit card

#### Collaboration Model

- functionnalities between objetcs and roles
- Capture interaction
- hence class
- Interractions (lifelines) using sequenced msg

> See exemple on paper

### Inheritance

- Capability of one class to take props and caract form another class

```cpp
class Subclass_name : access_mode Superclass_name
```

- Source class named : Parent, Bae or Super class
- Inheritance class named : Child, Derived, Sub class
- All members of a class execpt private are inherited
- Types : Single, Multiple, Hierarchical, Multilevel, Hybrid (see exemple on paper)
- Advantages
  - Code Reusability
  - Method Overriding (Hence, Runtime Polymorphism)
  - Use of Virtual Keyword
- Modes
  - Public
  - Private: public and protected => private
  - Protected: public and protected => protected

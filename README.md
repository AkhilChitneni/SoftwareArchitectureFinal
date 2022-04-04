Software Architecture Final Project


Group-18

Task 3: 
Make the Observer functionality be more generic. The Observer functionality was prototype and placed in a way that makes it hard to extend, as well as will lead to circular dependencies or callbacks being needed.
The Observer Code needs to be genericized, in such a way we can add in other types of observers.  We will also need to move the PartObservers to be in a better library location.  Additionally we will probable need a TopLevel Session class instead of relying upon CoreSession (Have a Session class inherit from CoreSession).  And then have that top level Session class have observers from the various needs.  i.e. it contains a list of PartObservers.  And the other type of Observers needed (say a Drawing Observer).



**Requirements:**
Requirement 1 (REQUIRED) – All core Observer services should be in libcore
Requirement 2 (REQUIRED) – Application specific portions of Observer should be in appropriate libraries (i.e. not libcore)
Requirement 3 (REQUIRED) – Need to have a High level Session object. So application specific observers are not registered on CoreSession.
Requirement 4 (Required) – Implement a second use case for observers to show that core functionality is isolated, but can be extensible.




**Estimations:**
Requirement 1 (REQUIRED) – All core Observer services should be in libcore - 3 hours
Requirement 2 (REQUIRED) – Application specific portions of Observer should be in appropriate libraries (i.e. not libcore) - 4 hours
Requirement 3 (REQUIRED) – Need to have a High level Session object. So application specific observers are not registered on CoreSession. - 4 hours
Requirement 4 (Required) – Implement a second use case for observers to show that core functionality is isolated, but can be extensible. - 6 hours 

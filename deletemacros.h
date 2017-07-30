#ifndef _DELETEMACROS_H
#define _DELETEMACROS_H

// Defines
#define SafeRelease(x) { if(x) {x->Release(); x = nullptr;} }  // Macro for releasing COM object
#define SafeDelete(x) { if(x) {delete x; x = nullptr;} }  // Macro for deleting objects

#endif
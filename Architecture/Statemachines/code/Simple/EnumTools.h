#pragma once

#define EnumTools_getText(X) #X
#define EnumTools_CreateEnumStringCase(X)  case X : text = EnumTools_getText(X); break;





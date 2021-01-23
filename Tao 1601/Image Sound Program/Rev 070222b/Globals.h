#include "TypeDefs.h"

#include "SimplSig.h"

   #include "S2_SPlus3.h"


union Globals_u
{
   GLOBAL_VAR_STRUCT( S2_SPlus3 );
};


union Nvram_u
{
   NVRAM_VAR_STRUCT( S2_SPlus3 );
};


register union Globals_u *Globals asm ("%a5");
register union Nvram_u *Nvram asm ("%a4");



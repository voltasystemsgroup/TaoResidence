#ifndef __S2_INDEX_TRANSLATION_F_X__H__
#define __S2_INDEX_TRANSLATION_F_X__H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/



#define __S2_Index_Translation_f_x__X_ANALOG_INPUT 0
#define __S2_Index_Translation_f_x__X_ARRAY_LENGTH 2
#define __S2_Index_Translation_f_x__X_PARAMETER_ANALOG_INPUT 2
#define __S2_Index_Translation_f_x__X_PARAMETER_ARRAY_LENGTH 17
#define __S2_Index_Translation_f_x__Y_ANALOG_INPUT 19
#define __S2_Index_Translation_f_x__Y_ARRAY_LENGTH 17

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_Index_Translation_f_x__FUNCTION_OF_X_ANALOG_OUTPUT 0
#define __S2_Index_Translation_f_x__FUNCTION_OF_X_ARRAY_LENGTH 2

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Index_Translation_f_x_ )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __X );
   DECLARE_IO_ARRAY( __X_PARAMETER );
   DECLARE_IO_ARRAY( __Y );
   DECLARE_IO_ARRAY( __FUNCTION_OF_X );
   unsigned short __GNINITCOMPLETE;
};

START_NVRAM_VAR_STRUCT( S2_Index_Translation_f_x_ )
{
};



#endif //__S2_INDEX_TRANSLATION_F_X__H__


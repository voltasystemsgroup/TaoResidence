#ifndef __S2_XPERINET_MIRV_API2_FEEDBACK_PARSER___COMMAND_GENERATOR_R01_H__
#define __S2_XPERINET_MIRV_API2_FEEDBACK_PARSER___COMMAND_GENERATOR_R01_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_CLEAR_STATUS_STRINGS_DIG_INPUT 0


/*
* ANALOG_INPUT
*/
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_ZONE_IN_ANALOG_INPUT 0

#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_IN$_STRING_INPUT 1
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_IN$_STRING_MAX_LEN 300
CREATE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __IN$, __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_IN$_STRING_MAX_LEN );
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_CMD$_STRING_INPUT 2
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_CMD$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __CMD$, __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_CMD$_STRING_MAX_LEN );
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_SEARCH$_STRING_INPUT 3
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_SEARCH$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __SEARCH$, __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_SEARCH$_STRING_MAX_LEN );
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_SEARCH_CMD$_STRING_INPUT 4
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_SEARCH_CMD$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __SEARCH_CMD$, __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_SEARCH_CMD$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_ERROR_PULSE_DIG_OUTPUT 0
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_API2_OK_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_ZONE_OUT_ANALOG_OUTPUT 0

#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_TX$_STRING_OUTPUT 1
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_ERROR$_STRING_OUTPUT 2

#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_OUT$_STRING_OUTPUT 3
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_OUT$_ARRAY_LENGTH 40

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
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_TEMP$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __TEMP$, __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_TEMP$_STRING_MAX_LEN );
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_SURROUND_TEMP$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __SURROUND_TEMP$, __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_SURROUND_TEMP$_STRING_MAX_LEN );
#define __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_TEMP_ERROR$_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __TEMP_ERROR$, __S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01_TEMP_ERROR$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __OUT$ );
   DECLARE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __IN$ );
   DECLARE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __CMD$ );
   DECLARE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __SEARCH$ );
   DECLARE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __SEARCH_CMD$ );
};

START_NVRAM_VAR_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01 )
{
   DECLARE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __TEMP$ );
   DECLARE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __SURROUND_TEMP$ );
   DECLARE_STRING_STRUCT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, __TEMP_ERROR$ );
   unsigned short __ZONE;
   unsigned short __WAIT_FLAG;
   unsigned short __TEMP_AN;
   unsigned short __MSG_TYPE;
};

DEFINE_WAITEVENT( S2_Xperinet_MIRV_API2_Feedback_Parser___Command_Generator_r01, ERROR_CLEAR );


#endif //__S2_XPERINET_MIRV_API2_FEEDBACK_PARSER___COMMAND_GENERATOR_R01_H__


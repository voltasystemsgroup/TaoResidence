#include "TypeDefs.h"
#include "Globals.h"
#include "FnctList.h"
#include "Library.h"
#include "SimplSig.h"
#include "S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0.h"

FUNCTION_MAIN( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 );
EVENT_HANDLER( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 );
DEFINE_ENTRYPOINT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 );



static struct StringHdr_s* S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEDELIMITEDTEXT ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringHdr_s* __SZTEXT , struct StringHdr_s* __SZANCHOR , struct StringHdr_s* __SZDELIMITER , unsigned short __BCASEMATCH ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __NPOS; 
    unsigned short  __NSTART; 
    unsigned short  __NRANGE; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SZVALUE, 256 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SZVALUE );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__1, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__1 );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SZVALUE );
    INITIALIZE_LOCAL_STRING_STRUCT( __SZVALUE, 256 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 305 );
    __NPOS = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 306 );
    __NSTART = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 307 );
    __NRANGE = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 309 );
    if ( __BCASEMATCH) 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 309 );
        __NPOS = Find( LOCAL_STRING_STRUCT( __SZANCHOR  )  , LOCAL_STRING_STRUCT( __SZTEXT  )  , 1 , 1 ); 
        }
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 310 );
        __NPOS = Find( LOCAL_STRING_STRUCT( __SZANCHOR  )  , LOCAL_STRING_STRUCT( __SZTEXT  )  , 1 , 0 ); 
        }
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 312 );
    if ( (__NPOS > 0)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 314 );
        __NSTART = (__NPOS + Len( LOCAL_STRING_STRUCT( __SZANCHOR  )  )); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 316 );
        if ( __BCASEMATCH) 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 316 );
            __NRANGE = Find( LOCAL_STRING_STRUCT( __SZDELIMITER  )  , LOCAL_STRING_STRUCT( __SZTEXT  )  , __NSTART , 1 ); 
            }
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 317 );
            __NRANGE = Find( LOCAL_STRING_STRUCT( __SZDELIMITER  )  , LOCAL_STRING_STRUCT( __SZTEXT  )  , __NSTART , 0 ); 
            }
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 319 );
        __NRANGE = (__NRANGE - __NSTART); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 321 );
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SZTEXT  )  , __NSTART, __NRANGE)  )  ; 
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , LOCAL_STRING_STRUCT( __SZVALUE  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 322 );
        FormatString( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ),  __FN_DSTRET_STR__, 2, "%s", ( LOCAL_STRING_STRUCT( __SZVALUE  )  ) );
        goto S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSEDELIMITEDTEXT ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 324 );
        FormatString( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ),  __FN_DSTRET_STR__, 2, "%s", (  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) );
        goto S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSEDELIMITEDTEXT ; 
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSEDELIMITEDTEXT:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SZVALUE );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    /* End Free local function variables */
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 329 );
    return __FN_DSTRET_STR__; 
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEMAIN ( struct StringHdr_s* __MAINDATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "MAIN:SLEEP=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "MAIN:VOL=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "MAIN:AUDSEL=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "MAIN:DECODERSEL=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "MAIN:PUREDIRMODE=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "MAIN:ADAPTIVEDRC=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "MAIN:LIPSYNCMODE=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "MAIN:STRAIGHT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "MAIN:ENHANCER=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "MAIN:SOUNDPRG=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "MAIN:ADAPTIVEDSP=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "MAIN:EXSURDECODER=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "MAIN:2CHDECODER=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_14__, sizeof( "MAIN:HDMIOUT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_14__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_15__, sizeof( "MAIN:HDMIPROCESSING=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_15__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_16__, sizeof( "MAIN:HDMIASPECT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_16__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_17__, sizeof( "MAIN:HDMIRESOL=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_17__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_18__, sizeof( "MAIN:ZONENAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_18__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_19__, sizeof( "MAIN:SCENE1NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_19__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_20__, sizeof( "MAIN:SCENE2NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_20__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_21__, sizeof( "MAIN:SCENE3NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_21__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_22__, sizeof( "MAIN:SCENE4NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_22__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_23__, sizeof( "MAIN:SCENE5NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_23__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_24__, sizeof( "MAIN:SCENE6NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_24__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_25__, sizeof( "MAIN:SCENE7NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_25__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_26__, sizeof( "MAIN:SCENE8NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_26__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_27__, sizeof( "MAIN:SCENE9NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_27__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_28__, sizeof( "MAIN:SCENE10NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_28__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_29__, sizeof( "MAIN:SCENE11NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_29__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_30__, sizeof( "MAIN:SCENE12NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_30__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "MAIN:SLEEP=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "MAIN:VOL=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "MAIN:AUDSEL=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "MAIN:DECODERSEL=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "MAIN:PUREDIRMODE=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "MAIN:ADAPTIVEDRC=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "MAIN:LIPSYNCMODE=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "MAIN:STRAIGHT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "MAIN:ENHANCER=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "MAIN:SOUNDPRG=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "MAIN:ADAPTIVEDSP=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "MAIN:EXSURDECODER=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "MAIN:2CHDECODER=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_14__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__, "MAIN:HDMIOUT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_15__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__, "MAIN:HDMIPROCESSING=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_16__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__, "MAIN:HDMIASPECT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_17__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_17__, "MAIN:HDMIRESOL=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_18__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_18__, "MAIN:ZONENAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_19__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_19__, "MAIN:SCENE1NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_20__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_20__, "MAIN:SCENE2NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_21__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__, "MAIN:SCENE3NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_22__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_22__, "MAIN:SCENE4NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_23__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_23__, "MAIN:SCENE5NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_24__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_24__, "MAIN:SCENE6NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_25__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_25__, "MAIN:SCENE7NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_26__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_26__, "MAIN:SCENE8NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_27__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_27__, "MAIN:SCENE9NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_28__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_28__, "MAIN:SCENE10NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_29__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_29__, "MAIN:SCENE11NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_30__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_30__, "MAIN:SCENE12NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 334 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 336 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 337 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 338 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SLEEP_TIMER_TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 341 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 343 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 344 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 345 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_VOL_TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 348 );
            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 350 );
                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 351 );
                __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 352 );
                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_CURR_INPUT_AUDIO_TYPE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                
                ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 355 );
                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 357 );
                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 358 );
                    __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 359 );
                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_DECODER_MODE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                    
                    ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 362 );
                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 364 );
                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 365 );
                        __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 366 );
                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_PURE_DIRECT_MODE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                        
                        ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 369 );
                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 371 );
                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 372 );
                            __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 373 );
                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_ADAPTIVE_DYNAMIC_RANGE_MODE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                            
                            ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 376 );
                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 378 );
                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 379 );
                                __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 380 );
                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_LIP_SYNC_MODE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                
                                ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 383 );
                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 385 );
                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 386 );
                                    __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 387 );
                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_STRAIGHT_MODE_STATUS_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                    
                                    ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 390 );
                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 392 );
                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 393 );
                                        __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 394 );
                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_ENHANCER_STATUS_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                        
                                        ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 397 );
                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 399 );
                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 400 );
                                            __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 401 );
                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SOUND_PROG_STATUS_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                            
                                            ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 404 );
                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 406 );
                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 407 );
                                                __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 408 );
                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_ADAPTIVE_DSP_MODE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                
                                                ; 
                                                } 
                                            
                                            else 
                                                {
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 411 );
                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 413 );
                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 414 );
                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 415 );
                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_3D_CINEMA_MODE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                    
                                                    ; 
                                                    } 
                                                
                                                else 
                                                    {
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 418 );
                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                        { 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 420 );
                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 421 );
                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 422 );
                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_EX_DECODER_MODE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                        
                                                        ; 
                                                        } 
                                                    
                                                    else 
                                                        {
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 425 );
                                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                            { 
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 427 );
                                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 428 );
                                                            __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 429 );
                                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_2CHAN_DECODER_MODE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                            
                                                            ; 
                                                            } 
                                                        
                                                        else 
                                                            {
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 432 );
                                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                { 
                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 434 );
                                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 435 );
                                                                __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 436 );
                                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_CURR_HDMI_OUT_CONFIG_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                
                                                                ; 
                                                                } 
                                                            
                                                            else 
                                                                {
                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 439 );
                                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                    { 
                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 441 );
                                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 442 );
                                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 443 );
                                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_HDMI_PROC_STATE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                    
                                                                    ; 
                                                                    } 
                                                                
                                                                else 
                                                                    {
                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 446 );
                                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                        { 
                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 448 );
                                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 449 );
                                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 450 );
                                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_HDMI_ASPECT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                        
                                                                        ; 
                                                                        } 
                                                                    
                                                                    else 
                                                                        {
                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 453 );
                                                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_17__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                            { 
                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 455 );
                                                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 456 );
                                                                            __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 457 );
                                                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_HDMI_RES_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                            
                                                                            ; 
                                                                            } 
                                                                        
                                                                        else 
                                                                            {
                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 460 );
                                                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_18__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                { 
                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 462 );
                                                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 463 );
                                                                                __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 464 );
                                                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_ZONE_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                
                                                                                ; 
                                                                                } 
                                                                            
                                                                            else 
                                                                                {
                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 467 );
                                                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_19__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                    { 
                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 469 );
                                                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 470 );
                                                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 471 );
                                                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE1_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                    
                                                                                    ; 
                                                                                    } 
                                                                                
                                                                                else 
                                                                                    {
                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 474 );
                                                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_20__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                        { 
                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 476 );
                                                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 477 );
                                                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 478 );
                                                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE2_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                        
                                                                                        ; 
                                                                                        } 
                                                                                    
                                                                                    else 
                                                                                        {
                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 481 );
                                                                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                            { 
                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 483 );
                                                                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 484 );
                                                                                            __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 485 );
                                                                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE3_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                            
                                                                                            ; 
                                                                                            } 
                                                                                        
                                                                                        else 
                                                                                            {
                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 488 );
                                                                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_22__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                                { 
                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 490 );
                                                                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 491 );
                                                                                                __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 492 );
                                                                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE4_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                                
                                                                                                ; 
                                                                                                } 
                                                                                            
                                                                                            else 
                                                                                                {
                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 495 );
                                                                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_23__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                                    { 
                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 497 );
                                                                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 498 );
                                                                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 499 );
                                                                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE5_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                                    
                                                                                                    ; 
                                                                                                    } 
                                                                                                
                                                                                                else 
                                                                                                    {
                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 502 );
                                                                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_24__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                                        { 
                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 504 );
                                                                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 505 );
                                                                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 506 );
                                                                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE6_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                                        
                                                                                                        ; 
                                                                                                        } 
                                                                                                    
                                                                                                    else 
                                                                                                        {
                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 509 );
                                                                                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_25__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                                            { 
                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 511 );
                                                                                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 512 );
                                                                                                            __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 513 );
                                                                                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE7_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                                            
                                                                                                            ; 
                                                                                                            } 
                                                                                                        
                                                                                                        else 
                                                                                                            {
                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 516 );
                                                                                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_26__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                                                { 
                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 518 );
                                                                                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 519 );
                                                                                                                __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 520 );
                                                                                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE8_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                                                
                                                                                                                ; 
                                                                                                                } 
                                                                                                            
                                                                                                            else 
                                                                                                                {
                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 523 );
                                                                                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_27__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                                                    { 
                                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 525 );
                                                                                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 526 );
                                                                                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 527 );
                                                                                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE9_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                                                    
                                                                                                                    ; 
                                                                                                                    } 
                                                                                                                
                                                                                                                else 
                                                                                                                    {
                                                                                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 530 );
                                                                                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_28__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                                                        { 
                                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 532 );
                                                                                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 533 );
                                                                                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 534 );
                                                                                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE10_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                                                        
                                                                                                                        ; 
                                                                                                                        } 
                                                                                                                    
                                                                                                                    else 
                                                                                                                        {
                                                                                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 537 );
                                                                                                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_29__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                                                            { 
                                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 539 );
                                                                                                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 540 );
                                                                                                                            __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 541 );
                                                                                                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE11_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                                                            
                                                                                                                            ; 
                                                                                                                            } 
                                                                                                                        
                                                                                                                        else 
                                                                                                                            {
                                                                                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 544 );
                                                                                                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_30__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 )) 
                                                                                                                                { 
                                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 546 );
                                                                                                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __MAINDATA  )  , 1 , 1 ); 
                                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 547 );
                                                                                                                                __EPOS = Len( LOCAL_STRING_STRUCT( __MAINDATA  )  ); 
                                                                                                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 548 );
                                                                                                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                                                                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __MAINDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                                                                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_MAIN_SCENE12_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                                                                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                                                                                                
                                                                                                                                ; 
                                                                                                                                } 
                                                                                                                            
                                                                                                                            }
                                                                                                                        
                                                                                                                        }
                                                                                                                    
                                                                                                                    }
                                                                                                                
                                                                                                                }
                                                                                                            
                                                                                                            }
                                                                                                        
                                                                                                        }
                                                                                                    
                                                                                                    }
                                                                                                
                                                                                                }
                                                                                            
                                                                                            }
                                                                                        
                                                                                        }
                                                                                    
                                                                                    }
                                                                                
                                                                                }
                                                                            
                                                                            }
                                                                        
                                                                        }
                                                                    
                                                                    }
                                                                
                                                                }
                                                            
                                                            }
                                                        
                                                        }
                                                    
                                                    }
                                                
                                                }
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSEMAIN:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_17__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_18__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_19__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_20__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_22__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_23__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_24__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_25__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_26__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_27__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_28__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_29__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_30__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEZONE2 ( struct StringHdr_s* __ZONE2DATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "ZONE2:SLEEP=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "ZONE2:VOL=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "ZONE2:ZONENAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "ZONE2:SCENE1NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "ZONE2:SCENE2NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "ZONE2:SCENE3NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "ZONE2:SCENE4NAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "ZONE2:SLEEP=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "ZONE2:VOL=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "ZONE2:ZONENAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "ZONE2:SCENE1NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "ZONE2:SCENE2NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "ZONE2:SCENE3NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "ZONE2:SCENE4NAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 559 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 561 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 562 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __ZONE2DATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 563 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_ZONE2_SLEEP_TIMER_TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 566 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 568 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 569 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __ZONE2DATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 570 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_ZONE2_VOL_TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 573 );
            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 575 );
                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 576 );
                __EPOS = Len( LOCAL_STRING_STRUCT( __ZONE2DATA  )  ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 577 );
                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_ZONE2_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                
                ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 580 );
                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 582 );
                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 583 );
                    __EPOS = Len( LOCAL_STRING_STRUCT( __ZONE2DATA  )  ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 584 );
                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_ZONE2_SCENE1_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                    
                    ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 587 );
                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 )) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 589 );
                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 590 );
                        __EPOS = Len( LOCAL_STRING_STRUCT( __ZONE2DATA  )  ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 591 );
                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_ZONE2_SCENE2_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                        
                        ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 594 );
                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 )) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 596 );
                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 597 );
                            __EPOS = Len( LOCAL_STRING_STRUCT( __ZONE2DATA  )  ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 598 );
                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_ZONE2_SCENE3_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                            
                            ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 601 );
                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 )) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 603 );
                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , 1 , 1 ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 604 );
                                __EPOS = Len( LOCAL_STRING_STRUCT( __ZONE2DATA  )  ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 605 );
                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __ZONE2DATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_ZONE2_SCENE4_NAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                
                                ; 
                                } 
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSEZONE2:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSETUNER ( struct StringHdr_s* __TUNERDATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "TUN:FMFREQ=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "TUN:AMFREQ=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "TUN:FMMODE=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "TUN:FMFREQ=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "TUN:AMFREQ=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "TUN:FMMODE=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 616 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __TUNERDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 618 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __TUNERDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 619 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __TUNERDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 620 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __TUNERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_TUNER_CURR_STATION_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 623 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __TUNERDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 625 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __TUNERDATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 626 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __TUNERDATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 627 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __TUNERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_TUNER_CURR_STATION_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 630 );
            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __TUNERDATA  )  , 1 , 1 )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 632 );
                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __TUNERDATA  )  , 1 , 1 ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 633 );
                __EPOS = Len( LOCAL_STRING_STRUCT( __TUNERDATA  )  ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 634 );
                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __TUNERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_TUNER_FM_MODE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                
                ; 
                } 
            
            }
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSETUNER:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSESIRIUSXM ( struct StringHdr_s* __SIRIUSXMDATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "SIRIUSXM:LISTLAYER=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "SIRIUSXM:LISTLAYERNAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "SIRIUSXM:LINE1TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "SIRIUSXM:LINE2TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "SIRIUSXM:LINE3TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "SIRIUSXM:LINE4TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "SIRIUSXM:LINE5TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "SIRIUSXM:LINE6TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "SIRIUSXM:LINE7TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "SIRIUSXM:LINE8TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "SIRIUSXM:SONG=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "SIRIUSXM:ARTIST=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "SIRIUSXM:ALBUM=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_14__, sizeof( "SIRIUSXM:CHNAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_14__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "SIRIUSXM:LISTLAYER=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "SIRIUSXM:LISTLAYERNAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "SIRIUSXM:LINE1TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "SIRIUSXM:LINE2TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "SIRIUSXM:LINE3TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "SIRIUSXM:LINE4TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "SIRIUSXM:LINE5TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "SIRIUSXM:LINE6TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "SIRIUSXM:LINE7TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "SIRIUSXM:LINE8TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "SIRIUSXM:SONG=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "SIRIUSXM:ARTIST=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "SIRIUSXM:ALBUM=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_14__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__, "SIRIUSXM:CHNAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 644 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 646 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 647 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 648 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMLISTLAYER_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 651 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 653 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 654 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 655 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMLISTNAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 658 );
            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 660 );
                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 661 );
                __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 662 );
                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMLINE1TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                
                ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 665 );
                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 667 );
                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 668 );
                    __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 669 );
                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMLINE2TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                    
                    ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 672 );
                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 674 );
                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 675 );
                        __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 676 );
                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMLINE3TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                        
                        ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 679 );
                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 681 );
                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 682 );
                            __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 683 );
                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMLINE4TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                            
                            ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 686 );
                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 688 );
                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 689 );
                                __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 690 );
                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMLINE5TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                
                                ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 693 );
                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 695 );
                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 696 );
                                    __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 697 );
                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMLINE6TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                    
                                    ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 700 );
                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 702 );
                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 703 );
                                        __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 704 );
                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMLINE7TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                        
                                        ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 707 );
                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 709 );
                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 710 );
                                            __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 711 );
                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMLINE8TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                            
                                            ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 714 );
                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 716 );
                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 717 );
                                                __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 718 );
                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMCURRSONGTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                
                                                ; 
                                                } 
                                            
                                            else 
                                                {
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 721 );
                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 723 );
                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 724 );
                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 725 );
                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMCURRARTISTTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                    
                                                    ; 
                                                    } 
                                                
                                                else 
                                                    {
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 728 );
                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                                                        { 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 730 );
                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 731 );
                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 732 );
                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMCURRALBUMTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                        
                                                        ; 
                                                        } 
                                                    
                                                    else 
                                                        {
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 735 );
                                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 )) 
                                                            { 
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 737 );
                                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , 1 , 1 ); 
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 738 );
                                                            __EPOS = Len( LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  ); 
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 739 );
                                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SIRIUSXMDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SIRIUSXMCURRCHANNELTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                            
                                                            ; 
                                                            } 
                                                        
                                                        }
                                                    
                                                    }
                                                
                                                }
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSESIRIUSXM:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSERHAP ( struct StringHdr_s* __RHAPDATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "RHAP:LISTLAYER=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "RHAP:LISTLAYERNAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "RHAP:LINE1TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "RHAP:LINE2TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "RHAP:LINE3TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "RHAP:LINE4TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "RHAP:LINE5TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "RHAP:LINE6TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "RHAP:LINE7TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "RHAP:LINE8TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "RHAP:SONG=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "RHAP:ARTIST=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "RHAP:ALBUM=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "RHAP:LISTLAYER=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "RHAP:LISTLAYERNAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "RHAP:LINE1TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "RHAP:LINE2TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "RHAP:LINE3TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "RHAP:LINE4TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "RHAP:LINE5TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "RHAP:LINE6TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "RHAP:LINE7TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "RHAP:LINE8TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "RHAP:SONG=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "RHAP:ARTIST=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "RHAP:ALBUM=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 750 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 752 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 753 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 754 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPLISTLAYER_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 757 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 759 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 760 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 761 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPLISTNAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 764 );
            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 766 );
                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 767 );
                __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 768 );
                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPLINE1TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                
                ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 771 );
                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 773 );
                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 774 );
                    __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 775 );
                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPLINE2TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                    
                    ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 778 );
                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 780 );
                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 781 );
                        __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 782 );
                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPLINE3TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                        
                        ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 785 );
                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 787 );
                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 788 );
                            __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 789 );
                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPLINE4TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                            
                            ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 792 );
                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 794 );
                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 795 );
                                __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 796 );
                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPLINE5TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                
                                ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 799 );
                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 801 );
                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 802 );
                                    __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 803 );
                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPLINE6TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                    
                                    ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 806 );
                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 808 );
                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 809 );
                                        __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 810 );
                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPLINE7TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                        
                                        ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 813 );
                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 815 );
                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 816 );
                                            __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 817 );
                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPLINE8TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                            
                                            ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 820 );
                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 822 );
                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 823 );
                                                __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 824 );
                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPCURRSONGTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                
                                                ; 
                                                } 
                                            
                                            else 
                                                {
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 827 );
                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 829 );
                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 830 );
                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 831 );
                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPCURRARTISTTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                    
                                                    ; 
                                                    } 
                                                
                                                else 
                                                    {
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 834 );
                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 )) 
                                                        { 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 836 );
                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __RHAPDATA  )  , 1 , 1 ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 837 );
                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __RHAPDATA  )  ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 838 );
                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __RHAPDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RHAPCURRALBUMTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                        
                                                        ; 
                                                        } 
                                                    
                                                    }
                                                
                                                }
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSERHAP:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEPANDORA ( struct StringHdr_s* __PANDORADATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "PANDORA:LISTLAYER=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "PANDORA:LISTLAYERNAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "PANDORA:LINE1TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "PANDORA:LINE2TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "PANDORA:LINE3TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "PANDORA:LINE4TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "PANDORA:LINE5TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "PANDORA:LINE6TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "PANDORA:LINE7TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "PANDORA:LINE8TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "PANDORA:TRACK=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "PANDORA:ALBUM=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "PANDORA:STATION=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "PANDORA:LISTLAYER=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "PANDORA:LISTLAYERNAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "PANDORA:LINE1TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "PANDORA:LINE2TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "PANDORA:LINE3TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "PANDORA:LINE4TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "PANDORA:LINE5TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "PANDORA:LINE6TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "PANDORA:LINE7TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "PANDORA:LINE8TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "PANDORA:TRACK=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "PANDORA:ALBUM=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "PANDORA:STATION=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 849 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 851 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 852 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 853 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDLISTLAYER_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 856 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 858 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 859 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 860 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDLISTNAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 863 );
            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 865 );
                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 866 );
                __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 867 );
                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDLINE1TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                
                ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 870 );
                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 872 );
                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 873 );
                    __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 874 );
                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDLINE2TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                    
                    ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 877 );
                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 879 );
                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 880 );
                        __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 881 );
                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDLINE3TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                        
                        ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 884 );
                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 886 );
                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 887 );
                            __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 888 );
                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDLINE4TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                            
                            ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 891 );
                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 893 );
                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 894 );
                                __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 895 );
                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDLINE5TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                
                                ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 898 );
                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 900 );
                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 901 );
                                    __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 902 );
                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDLINE6TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                    
                                    ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 905 );
                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 907 );
                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 908 );
                                        __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 909 );
                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDLINE7TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                        
                                        ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 912 );
                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 914 );
                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 915 );
                                            __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 916 );
                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDLINE8TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                            
                                            ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 919 );
                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 921 );
                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 922 );
                                                __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 923 );
                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDCURRSONGTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                
                                                ; 
                                                } 
                                            
                                            else 
                                                {
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 926 );
                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 928 );
                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 929 );
                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 930 );
                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDCURRALBUMTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                    
                                                    ; 
                                                    } 
                                                
                                                else 
                                                    {
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 933 );
                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 )) 
                                                        { 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 935 );
                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __PANDORADATA  )  , 1 , 1 ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 936 );
                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __PANDORADATA  )  ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 937 );
                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __PANDORADATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PANDCURRSTATIONTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                        
                                                        ; 
                                                        } 
                                                    
                                                    }
                                                
                                                }
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSEPANDORA:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSENETRADIO ( struct StringHdr_s* __NETRADIODATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "NETRADIO:LISTLAYER=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "NETRADIO:LISTLAYERNAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "NETRADIO:LINE1TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "NETRADIO:LINE2TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "NETRADIO:LINE3TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "NETRADIO:LINE4TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "NETRADIO:LINE5TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "NETRADIO:LINE6TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "NETRADIO:LINE7TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "NETRADIO:LINE8TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "NETRADIO:SONG=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "NETRADIO:ARTIST=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "NETRADIO:ALBUM=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_14__, sizeof( "NETRADIO:STATION=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_14__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "NETRADIO:LISTLAYER=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "NETRADIO:LISTLAYERNAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "NETRADIO:LINE1TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "NETRADIO:LINE2TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "NETRADIO:LINE3TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "NETRADIO:LINE4TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "NETRADIO:LINE5TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "NETRADIO:LINE6TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "NETRADIO:LINE7TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "NETRADIO:LINE8TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "NETRADIO:SONG=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "NETRADIO:ARTIST=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "NETRADIO:ALBUM=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_14__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__, "NETRADIO:STATION=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 950 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 952 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 953 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 954 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOLISTLAYER_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 957 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 959 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 960 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 961 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOLISTNAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 964 );
            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 966 );
                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 967 );
                __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 968 );
                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOLINE1TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                
                ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 971 );
                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 973 );
                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 974 );
                    __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 975 );
                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOLINE2TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                    
                    ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 978 );
                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 980 );
                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 981 );
                        __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 982 );
                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOLINE3TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                        
                        ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 985 );
                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 987 );
                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 988 );
                            __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 989 );
                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOLINE4TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                            
                            ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 992 );
                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 994 );
                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 995 );
                                __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 996 );
                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOLINE5TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                
                                ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 999 );
                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1001 );
                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1002 );
                                    __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1003 );
                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOLINE6TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                    
                                    ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1006 );
                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1008 );
                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1009 );
                                        __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1010 );
                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOLINE7TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                        
                                        ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1013 );
                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1015 );
                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1016 );
                                            __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1017 );
                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOLINE8TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                            
                                            ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1020 );
                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1022 );
                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1023 );
                                                __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1024 );
                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOCURRSONGTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                
                                                ; 
                                                } 
                                            
                                            else 
                                                {
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1027 );
                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1029 );
                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1030 );
                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1031 );
                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOCURRARTISTTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                    
                                                    ; 
                                                    } 
                                                
                                                else 
                                                    {
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1034 );
                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                                                        { 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1036 );
                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1037 );
                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1038 );
                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOCURRALBUMTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                        
                                                        ; 
                                                        } 
                                                    
                                                    else 
                                                        {
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1041 );
                                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 )) 
                                                            { 
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1043 );
                                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , 1 , 1 ); 
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1044 );
                                                            __EPOS = Len( LOCAL_STRING_STRUCT( __NETRADIODATA  )  ); 
                                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1045 );
                                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __NETRADIODATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_NETRADIOCURRCHANNELTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                            
                                                            ; 
                                                            } 
                                                        
                                                        }
                                                    
                                                    }
                                                
                                                }
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSENETRADIO:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEUSB ( struct StringHdr_s* __USBDATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "USB:LISTLAYER=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "USB:LISTLAYERNAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "USB:LINE1TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "USB:LINE2TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "USB:LINE3TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "USB:LINE4TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "USB:LINE5TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "USB:LINE6TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "USB:LINE7TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "USB:LINE8TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "USB:SONG=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "USB:ARTIST=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "USB:ALBUM=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "USB:LISTLAYER=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "USB:LISTLAYERNAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "USB:LINE1TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "USB:LINE2TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "USB:LINE3TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "USB:LINE4TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "USB:LINE5TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "USB:LINE6TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "USB:LINE7TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "USB:LINE8TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "USB:SONG=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "USB:ARTIST=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "USB:ALBUM=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1056 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1058 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1059 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1060 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBLISTLAYER_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1063 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1065 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1066 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1067 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBLISTNAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1070 );
            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1072 );
                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1073 );
                __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1074 );
                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBLINE1TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                
                ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1077 );
                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1079 );
                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1080 );
                    __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1081 );
                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBLINE2TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                    
                    ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1084 );
                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1086 );
                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1087 );
                        __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1088 );
                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBLINE3TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                        
                        ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1091 );
                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1093 );
                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1094 );
                            __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1095 );
                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBLINE4TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                            
                            ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1098 );
                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1100 );
                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1101 );
                                __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1102 );
                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBLINE5TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                
                                ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1105 );
                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1107 );
                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1108 );
                                    __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1109 );
                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBLINE6TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                    
                                    ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1112 );
                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1114 );
                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1115 );
                                        __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1116 );
                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBLINE7TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                        
                                        ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1119 );
                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1121 );
                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1122 );
                                            __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1123 );
                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBLINE8TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                            
                                            ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1126 );
                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1128 );
                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1129 );
                                                __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1130 );
                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBCURRSONGTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                
                                                ; 
                                                } 
                                            
                                            else 
                                                {
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1133 );
                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1135 );
                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1136 );
                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1137 );
                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBCURRARTISTTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                    
                                                    ; 
                                                    } 
                                                
                                                else 
                                                    {
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1140 );
                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 )) 
                                                        { 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1142 );
                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __USBDATA  )  , 1 , 1 ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1143 );
                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __USBDATA  )  ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1144 );
                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __USBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_USBCURRALBUMTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                        
                                                        ; 
                                                        } 
                                                    
                                                    }
                                                
                                                }
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSEUSB:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEIPODUSB ( struct StringHdr_s* __IPODUSBDATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "IPODUSB:LISTLAYER=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "IPODUSBB:LISTLAYERNAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "IPODUSB:LINE1TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "IPODUSB:LINE2TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "IPODUSB:LINE3TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "IPODUSB:LINE4TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "IPODUSB:LINE5TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "IPODUSB:LINE6TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "IPODUSB:LINE7TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "IPODUSB:LINE8TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "IPODUSB:SONG=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "IPODUSB:ARTIST=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "IPODUSB:ALBUM=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "IPODUSB:LISTLAYER=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "IPODUSBB:LISTLAYERNAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "IPODUSB:LINE1TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "IPODUSB:LINE2TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "IPODUSB:LINE3TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "IPODUSB:LINE4TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "IPODUSB:LINE5TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "IPODUSB:LINE6TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "IPODUSB:LINE7TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "IPODUSB:LINE8TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "IPODUSB:SONG=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "IPODUSB:ARTIST=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "IPODUSB:ALBUM=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1155 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1157 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1158 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1159 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBLISTLAYER_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1162 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1164 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1165 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1166 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBLISTNAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1169 );
            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1171 );
                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1172 );
                __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1173 );
                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBLINE1TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                
                ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1176 );
                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1178 );
                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1179 );
                    __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1180 );
                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBLINE2TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                    
                    ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1183 );
                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1185 );
                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1186 );
                        __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1187 );
                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBLINE3TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                        
                        ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1190 );
                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1192 );
                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1193 );
                            __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1194 );
                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBLINE4TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                            
                            ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1197 );
                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1199 );
                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1200 );
                                __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1201 );
                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBLINE5TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                
                                ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1204 );
                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1206 );
                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1207 );
                                    __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1208 );
                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBLINE6TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                    
                                    ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1211 );
                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1213 );
                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1214 );
                                        __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1215 );
                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBLINE7TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                        
                                        ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1218 );
                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1220 );
                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1221 );
                                            __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1222 );
                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBLINE8TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                            
                                            ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1225 );
                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1227 );
                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1228 );
                                                __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1229 );
                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBCURRSONGTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                
                                                ; 
                                                } 
                                            
                                            else 
                                                {
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1232 );
                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1234 );
                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1235 );
                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1236 );
                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBCURRARTISTTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                    
                                                    ; 
                                                    } 
                                                
                                                else 
                                                    {
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1239 );
                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 )) 
                                                        { 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1241 );
                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , 1 , 1 ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1242 );
                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __IPODUSBDATA  )  ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1243 );
                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __IPODUSBDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_IPODUSBCURRALBUMTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                        
                                                        ; 
                                                        } 
                                                    
                                                    }
                                                
                                                }
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSEIPODUSB:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSESERVER ( struct StringHdr_s* __SERVERDATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "SERVER:LISTLAYER=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "SERVER:LISTLAYERNAME=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "SERVER:LINE1TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "SERVER:LINE2TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "SERVER:LINE3TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "SERVER:LINE4TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "SERVER:LINE5TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "SERVER:LINE6TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "SERVER:LINE7TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "SERVER:LINE8TXT=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "SERVER:SONG=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "SERVER:ARTIST=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "SERVER:ALBUM=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "SERVER:LISTLAYER=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "SERVER:LISTLAYERNAME=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "SERVER:LINE1TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "SERVER:LINE2TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "SERVER:LINE3TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "SERVER:LINE4TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "SERVER:LINE5TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "SERVER:LINE6TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "SERVER:LINE7TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "SERVER:LINE8TXT=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "SERVER:SONG=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "SERVER:ARTIST=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "SERVER:ALBUM=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1253 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1255 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1256 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1257 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERLISTLAYER_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1260 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1262 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1263 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1264 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERLISTNAME_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1267 );
            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1269 );
                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1270 );
                __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1271 );
                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERLINE1TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                
                ; 
                } 
            
            else 
                {
                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1274 );
                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1276 );
                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1277 );
                    __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1278 );
                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERLINE2TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                    
                    ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1281 );
                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1283 );
                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1284 );
                        __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1285 );
                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERLINE3TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                        
                        ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1288 );
                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1290 );
                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1291 );
                            __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1292 );
                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERLINE4TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                            
                            ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1295 );
                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1297 );
                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1298 );
                                __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1299 );
                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERLINE5TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                
                                ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1302 );
                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1304 );
                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1305 );
                                    __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1306 );
                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERLINE6TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                    
                                    ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1309 );
                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1311 );
                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1312 );
                                        __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1313 );
                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERLINE7TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                        
                                        ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1316 );
                                        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1318 );
                                            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1319 );
                                            __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1320 );
                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERLINE8TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                            
                                            ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1323 );
                                            if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1325 );
                                                __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1326 );
                                                __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1327 );
                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERCURRSONGTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                
                                                ; 
                                                } 
                                            
                                            else 
                                                {
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1330 );
                                                if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1332 );
                                                    __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1333 );
                                                    __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1334 );
                                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERCURRARTISTTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                    
                                                    ; 
                                                    } 
                                                
                                                else 
                                                    {
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1337 );
                                                    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 )) 
                                                        { 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1339 );
                                                        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __SERVERDATA  )  , 1 , 1 ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1340 );
                                                        __EPOS = Len( LOCAL_STRING_STRUCT( __SERVERDATA  )  ); 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1341 );
                                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
                                                        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __SERVERDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
                                                        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_SERVERCURRALBUMTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
                                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
                                                        
                                                        ; 
                                                        } 
                                                    
                                                    }
                                                
                                                }
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            }
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSESERVER:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEAIRPLAY ( struct StringHdr_s* __AIRPLAYDATA ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __SPOS; 
    unsigned short  __EPOS; 
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "AIRPLAY:ARTIST=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "AIRPLAY:SONG=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "AIRPLAY:ALBUM=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "AIRPLAY:PLAYBACKINFO=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "AIRPLAY:VOLINTERLOCK=" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "AIRPLAY:ARTIST=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "AIRPLAY:SONG=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "AIRPLAY:ALBUM=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "AIRPLAY:PLAYBACKINFO=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "AIRPLAY:VOLINTERLOCK=" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1351 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1353 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1354 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1355 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_AIRPLAYCURRARTISTTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1357 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1359 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1360 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1361 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_AIRPLAYCURRSONGTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1363 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1365 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1366 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1367 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_AIRPLAYCURRCOMPTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1369 );
    if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1371 );
        __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , 1 , 1 ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1372 );
        __EPOS = Len( LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  ); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1373 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_AIRPLAYCURRCOMPTEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        {
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1375 );
        if ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1377 );
            __SPOS = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )  , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1378 );
            __EPOS = Len( LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1379 );
            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
            FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , Mid ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __AIRPLAYDATA  )  , (__SPOS + 1), __EPOS)  )  ; 
            SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_AIRPLAY_VOL_TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
            
            ; 
            } 
        
        }
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FN_PARSEAIRPLAY:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    /* End Free local function variables */
    
    }
    
static void S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FNPROCESSDATA ( struct StringHdr_s* __SDATA ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __STEMP, 600 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __STEMP );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __STRASH, 100 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __STRASH );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x0D""\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "@" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "MAIN" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "Zone2" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "TUN" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "IPODUSB" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "USB" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "PANDORA" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "SIRIUSXM" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "RHAP" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "NETRADIO" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "SERVER" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "AIRPLAY" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__1, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__1 );
    
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __STEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __STEMP, 600 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __STRASH );
    INITIALIZE_LOCAL_STRING_STRUCT( __STRASH, 100 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x0D""\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "@" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "MAIN" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "Zone2" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "TUN" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "IPODUSB" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "USB" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "PANDORA" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "SIRIUSXM" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "RHAP" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "NETRADIO" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "SERVER" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "AIRPLAY" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1390 );
    while ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , LOCAL_STRING_STRUCT( __SDATA  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1392 );
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEDELIMITEDTEXT (  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __SDATA  )  ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   , 0)  )  ; 
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , LOCAL_STRING_STRUCT( __STEMP  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1393 );
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   , LOCAL_STRING_STRUCT( __SDATA  )    , 1  )  )  ; 
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , LOCAL_STRING_STRUCT( __STRASH  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1395 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , LOCAL_STRING_STRUCT( __STEMP  )   )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RXPROCESSED_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1397 );
        
            {
            int __SPLS_TMPVAR__SWTCH_1__ = ( 1) ;
            
                { 
                if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1401 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEMAIN (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                else if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1406 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEZONE2 (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                else if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1411 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSETUNER (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                else if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1416 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEIPODUSB (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                else if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1421 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEUSB (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                else if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1426 );
                    Delay ( 1) ; 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1427 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEPANDORA (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                else if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1432 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSESIRIUSXM (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                else if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1437 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSERHAP (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                else if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1442 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSENETRADIO (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                else if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1446 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSESERVER (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                else if ( __SPLS_TMPVAR__SWTCH_1__ == ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )  , LOCAL_STRING_STRUCT( __STEMP  )  , 1 , 1 ) > 0)) )
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1450 );
                    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FN_PARSEAIRPLAY (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __STEMP  )  ) ; 
                    } 
                
                } 
                
            }
            
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1390 );
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1454 );
    /*Print( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , 16, "\xFA\xE0""Parsing OFF\r\n""\xFB") */; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1455 );
    Nvram->S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0.__G_BPARSING = 0; 
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__FNPROCESSDATA:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __STEMP );
    FREE_LOCAL_STRING_STRUCT( __STRASH );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    /* End Free local function variables */
    
    }
    
DEFINE_INDEPENDENT_EVENTHANDLER( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, 00000 /*CmdIn*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 200 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 200 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1469 );
    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __CMDIN  )   )  ; 
    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , NVRAM_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __CMDTOSEND  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1471 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , NVRAM_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __CMDTOSEND  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RS232_TO_DEV_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
    
    ; 
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__Event_0:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, 00001 /*TunerDirVal*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 200 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 200 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1476 );
    if ( (GetDigitalInput( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_TUNERISFM_DIG_INPUT ) == 1)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1478 );
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,16 , "@TUN:FMFREQ=%d\r\n"  , (short)( GetAnalogInput( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_TUNERDIRVAL_ANALOG_INPUT ) ) )  ; 
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , NVRAM_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __CMDTOSEND  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1480 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , NVRAM_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __CMDTOSEND  )   )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RS232_TO_DEV_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    else 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1486 );
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,16 , "@TUN:AMFREQ=%d\r\n"  , (short)( GetAnalogInput( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_TUNERDIRVAL_ANALOG_INPUT ) ) )  ; 
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , NVRAM_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __CMDTOSEND  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1488 );
        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ) == 0 ) {
        FormatString ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) , GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )  ,2 , "%s"  , NVRAM_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __CMDTOSEND  )   )  ; 
        SetSerial( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RS232_TO_DEV_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); }
        
        ; 
        } 
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__Event_1:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, 00002 /*Process*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x0D""\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__, 65534 );
    DECLARE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x0D""\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65534 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1494 );
    while ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , GLOBAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __RS232FROMDEV  )  , 1 , 1 )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1496 );
        S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0__FNPROCESSDATA (  (struct StringHdr_s* )  Remove ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   , GLOBAL_STRING_STRUCT( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __RS232FROMDEV  )    , 1  ) ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ), 1494 );
        } 
    
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__Event_2:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}


/********************************************************************************
  Constructor
********************************************************************************/

/********************************************************************************
  Destructor
********************************************************************************/

/********************************************************************************
  static void ProcessDigitalEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessDigitalEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        case __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_PROCESS_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, 00002 /*Process*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); 
                
            }
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessAnalogEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessAnalogEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        case __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_TUNERDIRVAL_ANALOG_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, 00001 /*TunerDirVal*/, 0 );
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessStringEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessStringEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        case __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_CMDIN_STRING_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, 00000 /*CmdIn*/, 0 );
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketConnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketConnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketStatusEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketStatusEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 ) ); 
            break ;
        
    }
}

/********************************************************************************
  EVENT_HANDLER( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )
********************************************************************************/
EVENT_HANDLER( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )
    {
    SAVE_GLOBAL_POINTERS ;
    switch ( Signal->Type )
        {
        case e_SIGNAL_TYPE_DIGITAL :
            ProcessDigitalEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_ANALOG :
            ProcessAnalogEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STRING :
            ProcessStringEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_CONNECT :
            ProcessSocketConnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_DISCONNECT :
            ProcessSocketDisconnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_RECEIVE :
            ProcessSocketReceiveEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STATUS :
            ProcessSocketStatusEvent( Signal );
            break ;
        }
        
    RESTORE_GLOBAL_POINTERS ;
    
    }
    
/********************************************************************************
  FUNCTION_MAIN( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )
********************************************************************************/
FUNCTION_MAIN( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 )
{
    SAVE_GLOBAL_POINTERS ;
    
    SET_INSTANCE_POINTER ( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0 );
    
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __CMDIN, e_INPUT_TYPE_STRING, __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_CMDIN_STRING_MAX_LEN );
    REGISTER_GLOBAL_INPUT_STRING ( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __CMDIN, __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_CMDIN_STRING_INPUT );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __RS232FROMDEV, e_INPUT_TYPE_BUFFER, __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RS232FROMDEV_BUFFER_MAX_LEN );
    REGISTER_GLOBAL_INPUT_STRING ( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __RS232FROMDEV, __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RS232FROMDEV_BUFFER_INPUT );
    
    INITIALIZE_NVRAM_STRING_STRUCT ( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __CMDTOSEND, e_INPUT_TYPE_NONE, __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_CMDTOSEND_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, sGenericOutStr, e_INPUT_TYPE_NONE, GENERIC_STRING_OUTPUT_LEN );
    
    
    REGISTER_GLOBAL_INPUT_STRING ( S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0, __RS232FROMDEV, __S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_RS232FROMDEV_BUFFER_INPUT );
    
    S2_Yamaha_RX_A820_RS232_Command___FB_Processor_v1_0_Exit__MAIN:
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }

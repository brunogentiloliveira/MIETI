/*
 * Note: this file originally auto-generated by mib2c
 * using mfd-top.m2c
 */
/** \page MFD helper for hmAllMusicTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "hmAllMusicTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "hmAllMusicTable_interface.h"

const oid hmAllMusicTable_oid[] = { HMALLMUSICTABLE_OID };
const int hmAllMusicTable_oid_size = OID_LENGTH(hmAllMusicTable_oid);

    hmAllMusicTable_registration  hmAllMusicTable_user_context;

void initialize_table_hmAllMusicTable(void);
void shutdown_table_hmAllMusicTable(void);


/**
 * Initializes the hmAllMusicTable module
 */
void
init_hmAllMusicTable(void)
{
    DEBUGMSGTL(("verbose:hmAllMusicTable:init_hmAllMusicTable","called\n"));

    /*
     * TODO:300:o: Perform hmAllMusicTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("hmAllMusicTable"))
        initialize_table_hmAllMusicTable();

} /* init_hmAllMusicTable */

/**
 * Shut-down the hmAllMusicTable module (agent is exiting)
 */
void
shutdown_hmAllMusicTable(void)
{
    if (should_init("hmAllMusicTable"))
        shutdown_table_hmAllMusicTable();

}

/**
 * Initialize the table hmAllMusicTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_hmAllMusicTable(void)
{
    hmAllMusicTable_registration * user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:hmAllMusicTable:initialize_table_hmAllMusicTable","called\n"));

    /*
     * TODO:301:o: Perform hmAllMusicTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize hmAllMusicTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("hmAllMusicTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    _hmAllMusicTable_initialize_interface(user_context, flags);
} /* initialize_table_hmAllMusicTable */

/**
 * Shutdown the table hmAllMusicTable 
 */
void
shutdown_table_hmAllMusicTable(void)
{
    /*
     * call interface shutdown code
     */
    _hmAllMusicTable_shutdown_interface(&hmAllMusicTable_user_context);
}

/**
 * extra context initialization (eg default values)
 *
 * @param rowreq_ctx    : row request context
 * @param user_init_ctx : void pointer for user (parameter to rowreq_ctx_allocate)
 *
 * @retval MFD_SUCCESS  : no errors
 * @retval MFD_ERROR    : error (context allocate will fail)
 */
int
hmAllMusicTable_rowreq_ctx_init(hmAllMusicTable_rowreq_ctx *rowreq_ctx,
                           void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:hmAllMusicTable:hmAllMusicTable_rowreq_ctx_init","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:210:o: |-> Perform extra hmAllMusicTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
} /* hmAllMusicTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void hmAllMusicTable_rowreq_ctx_cleanup(hmAllMusicTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:hmAllMusicTable:hmAllMusicTable_rowreq_ctx_cleanup","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:211:o: |-> Perform extra hmAllMusicTable rowreq cleanup.
     */
} /* hmAllMusicTable_rowreq_ctx_cleanup */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
hmAllMusicTable_pre_request(hmAllMusicTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:hmAllMusicTable:hmAllMusicTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform hmAllMusicTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* hmAllMusicTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
hmAllMusicTable_post_request(hmAllMusicTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:hmAllMusicTable:hmAllMusicTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform hmAllMusicTable post-request actions.
     */

    return MFD_SUCCESS;
} /* hmAllMusicTable_post_request */


/** @{ */

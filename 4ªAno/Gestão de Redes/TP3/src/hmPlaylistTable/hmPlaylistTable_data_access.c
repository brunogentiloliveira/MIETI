/*
 * Note: this file originally auto-generated by mib2c
 * using mfd-data-access.m2c
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "hmPlaylistTable.h"


#include "hmPlaylistTable_data_access.h"

/** @ingroup interface
 * @addtogroup data_access data_access: Routines to access data
 *
 * These routines are used to locate the data used to satisfy
 * requests.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table hmPlaylistTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * HOST-MUSIC-MIB::hmPlaylistTable is subid 1 of hmPlay.
 * Its status is Current.
 * OID: .1.3.6.1.3.2020.6.1, length: 8
*/

/**
 * initialization for hmPlaylistTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param hmPlaylistTable_reg
 *        Pointer to hmPlaylistTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
hmPlaylistTable_init_data(hmPlaylistTable_registration * hmPlaylistTable_reg)
{
    DEBUGMSGTL(("verbose:hmPlaylistTable:hmPlaylistTable_init_data","called\n"));

    /*
     * TODO:303:o: Initialize hmPlaylistTable data.
     */
    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    static unsigned int my_columns[] = {
            COLUMN_HMPLAYLISTINDEX
    };
    static netsnmp_column_info valid_columns;
    valid_columns.isRange = 0;
    valid_columns.details.list = my_columns;
    valid_columns.list_count = sizeof(my_columns)/sizeof(unsigned int);
    hmPlaylistTable_valid_columns_set(&valid_columns);
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

    return MFD_SUCCESS;
} /* hmPlaylistTable_init_data */

/**
 * container overview
 *
 */

/**
 * container initialization
 *
 * @param container_ptr_ptr A pointer to a container pointer. If you
 *        create a custom container, use this parameter to return it
 *        to the MFD helper. If set to NULL, the MFD helper will
 *        allocate a container for you.
 * @param  cache A pointer to a cache structure. You can set the timeout
 *         and other cache flags using this pointer.
 *
 *  This function is called at startup to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases. If no custom
 *  container is allocated, the MFD code will create one for your.
 *
 *  This is also the place to set up cache behavior. The default, to
 *  simply set the cache timeout, will work well with the default
 *  container. If you are using a custom container, you may want to
 *  look at the cache helper documentation to see if there are any
 *  flags you want to set.
 *
 * @remark
 *  This would also be a good place to do any initialization needed
 *  for you data source. For example, opening a connection to another
 *  process that will supply the data, opening a database, etc.
 */
void
hmPlaylistTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache)
{
    DEBUGMSGTL(("verbose:hmPlaylistTable:hmPlaylistTable_container_init","called\n"));
    
    if (NULL == container_ptr_ptr) {
        snmp_log(LOG_ERR,"bad container param to hmPlaylistTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    if (NULL == cache) {
        snmp_log(LOG_ERR,"bad cache param to hmPlaylistTable_container_init\n");
        return;
    }

    /*
     * TODO:345:A: Set up hmPlaylistTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = HMPLAYLISTTABLE_CACHE_TIMEOUT; /* seconds */
} /* hmPlaylistTable_container_init */

/**
 * container shutdown
 *
 * @param container_ptr A pointer to the container.
 *
 *  This function is called at shutdown to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases.
 *
 *  This function is called before hmPlaylistTable_container_free().
 *
 * @remark
 *  This would also be a good place to do any cleanup needed
 *  for you data source. For example, closing a connection to another
 *  process that supplied the data, closing a database, etc.
 */
void
hmPlaylistTable_container_shutdown(netsnmp_container *container_ptr)
{
    DEBUGMSGTL(("verbose:hmPlaylistTable:hmPlaylistTable_container_shutdown","called\n"));
    
    if (NULL == container_ptr) {
        snmp_log(LOG_ERR,"bad params to hmPlaylistTable_container_shutdown\n");
        return;
    }

} /* hmPlaylistTable_container_shutdown */

/**
 * load initial data
 *
 * TODO:350:M: Implement hmPlaylistTable data load
 * This function will also be called by the cache helper to load
 * the container again (after the container free function has been
 * called to free the previous contents).
 *
 * @param container container to which items should be inserted
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_RESOURCE_UNAVAILABLE : Can't access data source
 * @retval MFD_ERROR                : other error.
 *
 *  This function is called to load the index(es) (and data, optionally)
 *  for the every row in the data set.
 *
 * @remark
 *  While loading the data, the only important thing is the indexes.
 *  If access to your data is cheap/fast (e.g. you have a pointer to a
 *  structure in memory), it would make sense to update the data here.
 *  If, however, the accessing the data invovles more work (e.g. parsing
 *  some other existing data, or peforming calculations to derive the data),
 *  then you can limit yourself to setting the indexes and saving any
 *  information you will need later. Then use the saved information in
 *  hmPlaylistTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
hmPlaylistTable_container_load(netsnmp_container *container)
{
    hmPlaylistTable_rowreq_ctx *rowreq_ctx;
    size_t                 count = 0;

    int   hmPlaylistIndex;
    
    FILE *filep;
    char line[MAX_LINE_SIZE];

    DEBUGMSGTL(("verbose:hmPlaylistTable:hmPlaylistTable_container_load","called\n"));

    
    filep = fopen("/etc/hostmusicmib.conf/playlistTable.conf", "r");
    if(NULL ==  filep) {
        return MFD_RESOURCE_UNAVAILABLE;
    }

    
    while( 1 ) {
    
        do {
            if (!fgets(line, sizeof(line), filep)) {
                /* we're done */
                fclose(filep);
                filep = NULL;
            }
        } while (filep && (line[0] == '\n'));


        if(NULL == filep)    break;

        line[strlen(line)-1]='\0';

        hmPlaylistIndex = atoi(line);
        
  
        rowreq_ctx = hmPlaylistTable_allocate_rowreq_ctx(NULL);
        if (NULL == rowreq_ctx) {
            snmp_log(LOG_ERR, "memory allocation failed\n");
            return MFD_RESOURCE_UNAVAILABLE;
        }
        if(MFD_SUCCESS != hmPlaylistTable_indexes_set(rowreq_ctx
                               , hmPlaylistIndex
               )) {
            snmp_log(LOG_ERR,"error setting index while loading "
                     "hmPlaylistTable data.\n");
            hmPlaylistTable_release_rowreq_ctx(rowreq_ctx);
            continue;
        }

        CONTAINER_INSERT(container, rowreq_ctx);
        ++count;
    }

    if(NULL != filep)    fclose(filep);

    DEBUGMSGT(("verbose:hmPlaylistTable:hmPlaylistTable_container_load",
               "inserted %ld records\n", count));

    return MFD_SUCCESS;
} /* hmPlaylistTable_container_load */

/**
 * container clean up
 *
 * @param container container with all current items
 *
 *  This optional callback is called prior to all
 *  item's being removed from the container. If you
 *  need to do any processing before that, do it here.
 *
 * @note
 *  The MFD helper will take care of releasing all the row contexts.
 *
 */
void
hmPlaylistTable_container_free(netsnmp_container *container)
{
    DEBUGMSGTL(("verbose:hmPlaylistTable:hmPlaylistTable_container_free","called\n"));

    /*
     * TODO:380:M: Free hmPlaylistTable container data.
     */
} /* hmPlaylistTable_container_free */

/**
 * prepare row for processing.
 *
 *  When the agent has located the row for a request, this function is
 *  called to prepare the row for processing. If you fully populated
 *  the data context during the index setup phase, you may not need to
 *  do anything.
 *
 * @param rowreq_ctx pointer to a context.
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 */
int
hmPlaylistTable_row_prep( hmPlaylistTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:hmPlaylistTable:hmPlaylistTable_row_prep","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
} /* hmPlaylistTable_row_prep */

/** @} */

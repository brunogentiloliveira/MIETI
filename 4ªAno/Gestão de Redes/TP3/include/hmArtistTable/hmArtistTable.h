/*
 * Note: this file originally auto-generated by mib2c
 * using mfd-top.m2c
 */
#ifndef HMARTISTTABLE_H
#define HMARTISTTABLE_H

#ifdef __cplusplus
extern "C" {
#endif


/** @addtogroup misc misc: Miscellaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

/* other required module components */
    /* *INDENT-OFF*  */
config_add_mib(HOST-MUSIC-MIB)
config_require(HOST-MUSIC-MIB/hmArtistTable/hmArtistTable_interface)
config_require(HOST-MUSIC-MIB/hmArtistTable/hmArtistTable_data_access)
config_require(HOST-MUSIC-MIB/hmArtistTable/hmArtistTable_data_get)
config_require(HOST-MUSIC-MIB/hmArtistTable/hmArtistTable_data_set)
    /* *INDENT-ON*  */

/* OID and column number definitions for hmArtistTable */
#include "hmArtistTable_oids.h"

/* enum definions */
#include "hmArtistTable_enums.h"

/* *********************************************************************
 * function declarations
 */
void init_hmArtistTable(void);
void shutdown_hmArtistTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table hmArtistTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * HOST-MUSIC-MIB::hmArtistTable is subid 1 of hmArtist.
 * Its status is Current.
 * OID: .1.3.6.1.3.2020.3.1, length: 8
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review hmArtistTable registration context.
     */
typedef netsnmp_data_list hmArtistTable_registration;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review hmArtistTable data context structure.
 * This structure is used to represent the data for hmArtistTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * hmArtistTable.
 */
typedef struct hmArtistTable_data_s {
    
        /*
         * hmArtistDescr(2)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   hmArtistDescr[255];
size_t      hmArtistDescr_len; /* # of char elements, not bytes */
    
} hmArtistTable_data;


/*
 * TODO:120:r: |-> Review hmArtistTable mib index.
 * This structure is used to represent the index for hmArtistTable.
 */
typedef struct hmArtistTable_mib_index_s {

        /*
         * hmArtistIndex(1)/INTEGER32/ASN_INTEGER/long(long)//l/A/w/e/R/d/h
         */
   long   hmArtistIndex;


} hmArtistTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review hmArtistTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
*/
#define MAX_hmArtistTable_IDX_LEN     1


/* *********************************************************************
 * TODO:130:o: |-> Review hmArtistTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * hmArtistTable_rowreq_ctx pointer.
 */
typedef struct hmArtistTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_hmArtistTable_IDX_LEN];
    
    hmArtistTable_mib_index        tbl_idx;
    
    hmArtistTable_data              data;

    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * TODO:131:o: |   |-> Add useful data to hmArtistTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *hmArtistTable_data_list;

} hmArtistTable_rowreq_ctx;

typedef struct hmArtistTable_ref_rowreq_ctx_s {
    hmArtistTable_rowreq_ctx *rowreq_ctx;
} hmArtistTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int hmArtistTable_pre_request(hmArtistTable_registration * user_context);
    int hmArtistTable_post_request(hmArtistTable_registration * user_context,
        int rc);

    int hmArtistTable_rowreq_ctx_init(hmArtistTable_rowreq_ctx *rowreq_ctx,
                                   void *user_init_ctx);
    void hmArtistTable_rowreq_ctx_cleanup(hmArtistTable_rowreq_ctx *rowreq_ctx);


    hmArtistTable_rowreq_ctx *
                  hmArtistTable_row_find_by_mib_index(hmArtistTable_mib_index *mib_idx);

extern const oid hmArtistTable_oid[];
extern const int hmArtistTable_oid_size;


#include "hmArtistTable_interface.h"
#include "hmArtistTable_data_access.h"
#include "hmArtistTable_data_get.h"
#include "hmArtistTable_data_set.h"

/*
 * DUMMY markers, ignore
 *
 * TODO:099:x: *************************************************************
 * TODO:199:x: *************************************************************
 * TODO:299:x: *************************************************************
 * TODO:399:x: *************************************************************
 * TODO:499:x: *************************************************************
 */

#ifdef __cplusplus
}
#endif

#endif /* HMARTISTTABLE_H */
/** @} */

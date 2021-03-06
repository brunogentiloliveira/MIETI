/*
 * Note: this file originally auto-generated by mib2c
 * using mfd-top.m2c
 */
#ifndef HMALBUMTABLE_H
#define HMALBUMTABLE_H

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
config_require(HOST-MUSIC-MIB/hmAlbumTable/hmAlbumTable_interface)
config_require(HOST-MUSIC-MIB/hmAlbumTable/hmAlbumTable_data_access)
config_require(HOST-MUSIC-MIB/hmAlbumTable/hmAlbumTable_data_get)
config_require(HOST-MUSIC-MIB/hmAlbumTable/hmAlbumTable_data_set)
    /* *INDENT-ON*  */

/* OID and column number definitions for hmAlbumTable */
#include "hmAlbumTable_oids.h"

/* enum definions */
#include "hmAlbumTable_enums.h"

/* *********************************************************************
 * function declarations
 */
void init_hmAlbumTable(void);
void shutdown_hmAlbumTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table hmAlbumTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * HOST-MUSIC-MIB::hmAlbumTable is subid 1 of hmAlbum.
 * Its status is Current.
 * OID: .1.3.6.1.3.2020.4.1, length: 8
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review hmAlbumTable registration context.
     */
typedef netsnmp_data_list hmAlbumTable_registration;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review hmAlbumTable data context structure.
 * This structure is used to represent the data for hmAlbumTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * hmAlbumTable.
 */
typedef struct hmAlbumTable_data_s {
    
        /*
         * hmAlbumDescr(2)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   hmAlbumDescr[255];
size_t      hmAlbumDescr_len; /* # of char elements, not bytes */
    
} hmAlbumTable_data;


/*
 * TODO:120:r: |-> Review hmAlbumTable mib index.
 * This structure is used to represent the index for hmAlbumTable.
 */
typedef struct hmAlbumTable_mib_index_s {

        /*
         * hmAlbumIndex(1)/INTEGER32/ASN_INTEGER/long(long)//l/A/w/e/R/d/h
         */
   long   hmAlbumIndex;


} hmAlbumTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review hmAlbumTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
*/
#define MAX_hmAlbumTable_IDX_LEN     1


/* *********************************************************************
 * TODO:130:o: |-> Review hmAlbumTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * hmAlbumTable_rowreq_ctx pointer.
 */
typedef struct hmAlbumTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_hmAlbumTable_IDX_LEN];
    
    hmAlbumTable_mib_index        tbl_idx;
    
    hmAlbumTable_data              data;

    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * TODO:131:o: |   |-> Add useful data to hmAlbumTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *hmAlbumTable_data_list;

} hmAlbumTable_rowreq_ctx;

typedef struct hmAlbumTable_ref_rowreq_ctx_s {
    hmAlbumTable_rowreq_ctx *rowreq_ctx;
} hmAlbumTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int hmAlbumTable_pre_request(hmAlbumTable_registration * user_context);
    int hmAlbumTable_post_request(hmAlbumTable_registration * user_context,
        int rc);

    int hmAlbumTable_rowreq_ctx_init(hmAlbumTable_rowreq_ctx *rowreq_ctx,
                                   void *user_init_ctx);
    void hmAlbumTable_rowreq_ctx_cleanup(hmAlbumTable_rowreq_ctx *rowreq_ctx);


    hmAlbumTable_rowreq_ctx *
                  hmAlbumTable_row_find_by_mib_index(hmAlbumTable_mib_index *mib_idx);

extern const oid hmAlbumTable_oid[];
extern const int hmAlbumTable_oid_size;


#include "hmAlbumTable_interface.h"
#include "hmAlbumTable_data_access.h"
#include "hmAlbumTable_data_get.h"
#include "hmAlbumTable_data_set.h"

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

#endif /* HMALBUMTABLE_H */
/** @} */

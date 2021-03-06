/*
 * Note: this file originally auto-generated by mib2c
 * using mfd-data-access.m2c
 */
#ifndef HMSTYLETABLE_DATA_ACCESS_H
#define HMSTYLETABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern "C" {
#endif


/* *********************************************************************
 * function declarations
 */

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table hmStyleTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * HOST-MUSIC-MIB::hmStyleTable is subid 1 of hmStyle.
 * Its status is Current.
 * OID: .1.3.6.1.3.2020.2.1, length: 8
*/


    int hmStyleTable_init_data(hmStyleTable_registration * hmStyleTable_reg);


    /*
     * TODO:180:o: Review hmStyleTable cache timeout.
     * The number of seconds before the cache times out
     */
#define HMSTYLETABLE_CACHE_TIMEOUT   60

void hmStyleTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void hmStyleTable_container_shutdown(netsnmp_container *container_ptr);

int hmStyleTable_container_load(netsnmp_container *container);
void hmStyleTable_container_free(netsnmp_container *container);

int hmStyleTable_cache_load(netsnmp_container *container);
void hmStyleTable_cache_free(netsnmp_container *container);

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
/* *********************************************************************
 * Since we have no idea how you really access your data, we'll go with
 * a worst case example: a flat text file.
 */
#define MAX_LINE_SIZE 256
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    int hmStyleTable_row_prep( hmStyleTable_rowreq_ctx *rowreq_ctx);



#ifdef __cplusplus
}
#endif

#endif /* HMSTYLETABLE_DATA_ACCESS_H */

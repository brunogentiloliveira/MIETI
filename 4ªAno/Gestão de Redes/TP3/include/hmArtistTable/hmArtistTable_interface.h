/*
 * Note: this file originally auto-generated by mib2c
 * using mfd-interface.m2c
 */
/** @ingroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef HMARTISTTABLE_INTERFACE_H
#define HMARTISTTABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "hmArtistTable.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _hmArtistTable_initialize_interface(hmArtistTable_registration * user_ctx,
                                    u_long flags);
void _hmArtistTable_shutdown_interface(hmArtistTable_registration * user_ctx);

hmArtistTable_registration *
hmArtistTable_registration_get( void );

hmArtistTable_registration *
hmArtistTable_registration_set( hmArtistTable_registration * newreg );

netsnmp_container *hmArtistTable_container_get( void );
int hmArtistTable_container_size( void );

    hmArtistTable_rowreq_ctx * hmArtistTable_allocate_rowreq_ctx(void *);
void hmArtistTable_release_rowreq_ctx(hmArtistTable_rowreq_ctx *rowreq_ctx);

int hmArtistTable_index_to_oid(netsnmp_index *oid_idx,
                            hmArtistTable_mib_index *mib_idx);
int hmArtistTable_index_from_oid(netsnmp_index *oid_idx,
                              hmArtistTable_mib_index *mib_idx);

/*
 * access to certain internals. use with caution!
 */
void hmArtistTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* HMARTISTTABLE_INTERFACE_H */
/** @} */

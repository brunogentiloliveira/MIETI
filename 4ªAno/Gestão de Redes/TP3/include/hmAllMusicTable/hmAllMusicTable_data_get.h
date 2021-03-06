/*
 * Note: this file originally auto-generated by mib2c
 * using mfd-data-get.m2c
 *
 * @file hmAllMusicTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef HMALLMUSICTABLE_DATA_GET_H
#define HMALLMUSICTABLE_DATA_GET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * GET function declarations
 */

/* *********************************************************************
 * GET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table hmAllMusicTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * HOST-MUSIC-MIB::hmAllMusicTable is subid 1 of hmAllMusic.
 * Its status is Current.
 * OID: .1.3.6.1.3.2020.1.1, length: 8
*/
    /*
     * indexes
     */

    int hmAllMusicStyle_get( hmAllMusicTable_rowreq_ctx *rowreq_ctx, long * hmAllMusicStyle_val_ptr );
    int hmAllMusicArtist_get( hmAllMusicTable_rowreq_ctx *rowreq_ctx, long * hmAllMusicArtist_val_ptr );
    int hmAllMusicAlbum_get( hmAllMusicTable_rowreq_ctx *rowreq_ctx, long * hmAllMusicAlbum_val_ptr );
    int hmAllMusicName_get( hmAllMusicTable_rowreq_ctx *rowreq_ctx, char **hmAllMusicName_val_ptr_ptr, size_t *hmAllMusicName_val_ptr_len_ptr );
    int hmAllMusicDuration_get( hmAllMusicTable_rowreq_ctx *rowreq_ctx, long * hmAllMusicDuration_val_ptr );
    int hmAllMusicSize_get( hmAllMusicTable_rowreq_ctx *rowreq_ctx, long * hmAllMusicSize_val_ptr );
    int hmAllMusicFormat_get( hmAllMusicTable_rowreq_ctx *rowreq_ctx, long * hmAllMusicFormat_val_ptr );


int hmAllMusicTable_indexes_set_tbl_idx(hmAllMusicTable_mib_index *tbl_idx, long hmAllMusicIndex_val);
int hmAllMusicTable_indexes_set(hmAllMusicTable_rowreq_ctx *rowreq_ctx, long hmAllMusicIndex_val);




#ifdef __cplusplus
}
#endif

#endif /* HMALLMUSICTABLE_DATA_GET_H */
/** @} */

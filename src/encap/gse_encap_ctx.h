/****************************************************************************/
/**
 *   @file          gse_encap_ctx.h
 *
 *          Project:     GSE LIBRARY
 *
 *          Company:     VIVERIS TECHNOLOGIES
 *
 *          Module name: ENCAPSULATION CONTEXT
 *
 *   @brief         Encapsulation context definition
 *
 *   @author        Julien BERNARD / Viveris Technologies
 *
 */
/****************************************************************************/


#ifndef GSE_ENCAP_CTX_H
#define GSE_ENCAP_CTX_H

#include "gse_common.h"
#include "gse_virtual_buffer.h"

/****************************************************************************
 *
 *   STRUCTURES AND TYPES
 *
 ****************************************************************************/

/** Encapsulation context */
typedef struct
{
  vfrag_t *vfrag;         /**< Virtual fragment containing the PDU */
  gse_label_t label;      /**< Label field value */
  uint16_t total_length;  /**< Total length field value */
  uint16_t protocol_type; /**< Protocol type field value */
  uint8_t qos;            /**< QoS value of the context : used as FragID value */
  uint8_t label_type;     /**< Label type field value */
  unsigned int frag_nbr;  /**< Number of fragment */
} gse_encap_ctx_t;

/****************************************************************************
 *
 *   PUBLIC FUNCTIONS
 *
 ****************************************************************************/

/**
 *  @brief   Get the number of created fragments
 *
 *  This function is used mainly to know if a fragment is the first one or not
 *
 *  @param   encap_ctx    The encapsulation context
 *  @return  fragment number on success, -1 on failure
 */
int gse_get_frag_number(gse_encap_ctx_t *const encap_ctx);

#endif

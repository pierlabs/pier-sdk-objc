#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierDetalheAjusteLoteResponse
@end

@interface PierDetalheAjusteLoteResponse : PierObject

/* {{{detalhe_ajuste_lote_response_id_value}}} [optional]
 */
@property(nonatomic) NSNumber* _id;
/* {{{detalhe_ajuste_lote_response_arquivoId_value}}} [optional]
 */
@property(nonatomic) NSNumber* arquivoId;
/* {{{detalhe_ajuste_lote_response_idTipoAjuste_value}}} [optional]
 */
@property(nonatomic) NSString* tipoAjusteDescricao;
/* {{{detalhe_ajuste_lote_response_idConta_value}}} [optional]
 */
@property(nonatomic) NSNumber* idConta;
/* {{{detalhe_ajuste_lote_response_Status_value}}} [optional]
 */
@property(nonatomic) NSString* status;
/* {{{detalhe_ajuste_lote_response_dataTransacao_value}}} [optional]
 */
@property(nonatomic) NSDate* dataTransacao;
/* {{{detalhe_ajuste_lote_response_valorTransacao_value}}} [optional]
 */
@property(nonatomic) NSString* valorTotalTransacao;
/* {{{detalhe_ajuste_lote_response_tipoRegistro_value}}} [optional]
 */
@property(nonatomic) NSString* tipoOperacao;
/* {{{detalhe_ajuste_lote_response_dataProcessamento_value}}} [optional]
 */
@property(nonatomic) NSDate* dataProcessamento;
/* {{{detalhe_ajuste_lote_response_numeroLinha_value}}} [optional]
 */
@property(nonatomic) NSNumber* numeroLinha;
/* {{{detalhe_ajuste_lote_response_descricaoStatus_value}}} [optional]
 */
@property(nonatomic) NSString* descricaoStatus;

@end
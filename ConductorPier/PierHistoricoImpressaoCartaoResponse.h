#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierHistoricoImpressaoCartaoResponse
@end

@interface PierHistoricoImpressaoCartaoResponse : PierObject

/* {{{historico_impressao_cartao_response_id_value}}} 
 */
@property(nonatomic) NSNumber* _id;
/* {{{historico_impressao_cartao_response_id_cartao_value}}} 
 */
@property(nonatomic) NSNumber* idCartao;
/* {{{historico_impressao_cartao_response_id_status_impressao_cartao_value}}} 
 */
@property(nonatomic) NSNumber* idStatusImpressaoCartao;
/* {{{historico_impressao_cartao_response_mensagem_historico_value}}} [optional]
 */
@property(nonatomic) NSString* mensagemHistorico;
/* {{{historico_impressao_cartao_response_data_historico_value}}} [optional]
 */
@property(nonatomic) NSString* dataHistorico;

@end

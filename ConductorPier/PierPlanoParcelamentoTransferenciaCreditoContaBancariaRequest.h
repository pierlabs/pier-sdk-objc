#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierPlanoParcelamentoTransferenciaCreditoContaBancariaRequest
@end

@interface PierPlanoParcelamentoTransferenciaCreditoContaBancariaRequest : PierObject

/* {{{plano_parcelamento_transferencia_credito_conta_bancaria_request_id_cartao_value}}} 
 */
@property(nonatomic) NSNumber* idCartao;
/* {{{plano_parcelamento_transferencia_credito_conta_bancaria_request_valor_transacao_value}}} 
 */
@property(nonatomic) NSNumber* valorTransacao;
/* {{{plano_parcelamento_transferencia_credito_conta_bancaria_request_numero_meses_carencia_value}}} 
 */
@property(nonatomic) NSNumber* numeroMesesCarencia;

@end

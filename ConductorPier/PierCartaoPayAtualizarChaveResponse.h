#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierCartaoPayAtualizarChaveResponse
@end

@interface PierCartaoPayAtualizarChaveResponse : PierObject

/* {{{cartao_pay_base_response_id_value}}} [optional]
 */
@property(nonatomic) NSNumber* _id;
/* {{{cartao_pay_base_response_numero_cartao_value}}} [optional]
 */
@property(nonatomic) NSString* numeroCartao;
/* {{{cartao_pay_base_response_data_validade_cartao_value}}} [optional]
 */
@property(nonatomic) NSString* dataValidadeCartao;
/* {{{cartao_pay_base_response_nome_impresso_value}}} [optional]
 */
@property(nonatomic) NSString* nomeImpresso;
/* {{{cartao_pay_base_response_id_entidade_value}}} [optional]
 */
@property(nonatomic) NSNumber* idEntidade;
/* {{{cartao_pay_base_response_nome_entidade_value}}} [optional]
 */
@property(nonatomic) NSString* nomeEntidade;
/* {{{cartao_pay_base_response_status_value}}} [optional]
 */
@property(nonatomic) NSString* status;
/* {{{cartao_pay_atualizar_chave_response_chave_criptograma_value}}} [optional]
 */
@property(nonatomic) NSString* chaveCriptograma;

@end

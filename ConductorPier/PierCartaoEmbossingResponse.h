#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierCartaoEmbossingResponse
@end

@interface PierCartaoEmbossingResponse : PierObject

/* {{{cartao_embossing_response_flag_virtual_value}}} [optional]
 */
@property(nonatomic) NSNumber* flagVirtual;
/* {{{cartao_embossing_response_id_conta_value}}} [optional]
 */
@property(nonatomic) NSNumber* idConta;
/* {{{cartao_embossing_response_id_pessoa_value}}} [optional]
 */
@property(nonatomic) NSNumber* idPessoa;
/* {{{cartao_embossing_response_id_cartao_value}}} [optional]
 */
@property(nonatomic) NSNumber* idCartao;
/* {{{cartao_embossing_response_id_bandeira_value}}} [optional]
 */
@property(nonatomic) NSNumber* idBandeira;
/* {{{cartao_embossing_response_id_tipo_cartao_value}}} [optional]
 */
@property(nonatomic) NSNumber* idTipoCartao;
/* {{{cartao_embossing_response_data_geracao_value}}} [optional]
 */
@property(nonatomic) NSString* dataGeracao;
/* {{{cartao_embossing_response_data_validade_value}}} [optional]
 */
@property(nonatomic) NSString* dataValidade;
/* {{{cartao_embossing_response_nome_origem_comercial_value}}} [optional]
 */
@property(nonatomic) NSString* nomeOrigemComercial;
/* {{{cartao_embossing_response_cpf_value}}} [optional]
 */
@property(nonatomic) NSString* cpf;

@end

#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierGrupoEconomicoResponse
@end

@interface PierGrupoEconomicoResponse : PierObject

/* {{{grupo_economico_response_id_value}}} [optional]
 */
@property(nonatomic) NSNumber* _id;
/* {{{grupo_economico_response_razao_social_value}}} [optional]
 */
@property(nonatomic) NSString* razaoSocial;
/* {{{grupo_economico_response_nome_credor_value}}} [optional]
 */
@property(nonatomic) NSString* nomeCredor;
/* {{{grupo_economico_response_numero_receita_federal_value}}} [optional]
 */
@property(nonatomic) NSString* numeroReceitaFederal;
/* {{{grupo_economico_response_inscricao_estadual_value}}} [optional]
 */
@property(nonatomic) NSString* inscricaoEstadual;
/* {{{grupo_economico_response_contato_value}}} [optional]
 */
@property(nonatomic) NSString* contato;
/* {{{grupo_economico_response_banco_value}}} [optional]
 */
@property(nonatomic) NSNumber* banco;
/* {{{grupo_economico_response_agencia_value}}} [optional]
 */
@property(nonatomic) NSNumber* agencia;
/* {{{grupo_economico_response_digito_agencia_value}}} [optional]
 */
@property(nonatomic) NSString* digitoAgencia;
/* {{{grupo_economico_response_conta_corrente_value}}} [optional]
 */
@property(nonatomic) NSString* contaCorrente;
/* {{{grupo_economico_response_digito_conta_corrente_value}}} [optional]
 */
@property(nonatomic) NSString* digitoContaCorrente;
/* {{{grupo_economico_response_usuario_value}}} [optional]
 */
@property(nonatomic) NSString* usuario;
/* {{{grupo_economico_response_periodicidade_value}}} [optional]
 */
@property(nonatomic) NSString* periodicidade;
/* {{{grupo_economico_response_pagamento_semanal_value}}} [optional]
 */
@property(nonatomic) NSString* pagamentoSemanal;
/* {{{grupo_economico_response_pagamento_mensal_value}}} [optional]
 */
@property(nonatomic) NSNumber* pagamentoMensal;
/* {{{grupo_economico_response_pagamento_decendial_primeiro_value}}} [optional]
 */
@property(nonatomic) NSNumber* pagamentoDecendialPrimeiro;
/* {{{grupo_economico_response_pagamento_decendial_segundo_value}}} [optional]
 */
@property(nonatomic) NSNumber* pagamentoDecendialSegundo;
/* {{{grupo_economico_response_pagamento_decendial_terceiro_value}}} [optional]
 */
@property(nonatomic) NSNumber* pagamentoDecendialTerceiro;
/* {{{grupo_economico_response_pagamento_quinzenal_primeiro_value}}} [optional]
 */
@property(nonatomic) NSNumber* pagamentoQuinzenalPrimeiro;
/* {{{grupo_economico_response_pagamento_quinzenal_segundo_value}}} [optional]
 */
@property(nonatomic) NSNumber* pagamentoQuinzenalSegundo;
/* {{{grupo_economico_response_id_credor_r_a_v_value}}} [optional]
 */
@property(nonatomic) NSNumber* idCredorRAV;
/* {{{grupo_economico_response_percentual_r_a_v_value}}} [optional]
 */
@property(nonatomic) NSNumber* percentualRAV;
/* {{{grupo_economico_response_recebe_r_a_v_value}}} [optional]
 */
@property(nonatomic) NSString* recebeRAV;
/* {{{grupo_economico_response_percentual_multiplica_value}}} [optional]
 */
@property(nonatomic) NSNumber* percentualMultiplica;
/* {{{grupo_economico_response_taxa_adm_value}}} [optional]
 */
@property(nonatomic) NSNumber* taxaAdm;
/* {{{grupo_economico_response_taxa_banco_value}}} [optional]
 */
@property(nonatomic) NSNumber* taxaBanco;
/* {{{grupo_economico_response_limite_r_a_v_value}}} [optional]
 */
@property(nonatomic) NSNumber* limiteRAV;

@end

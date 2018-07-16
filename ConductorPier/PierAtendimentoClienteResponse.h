#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierAtendimentoClienteResponse
@end

@interface PierAtendimentoClienteResponse : PierObject

/* {{{atendimento_cliente_response_id_atendimento_value}}} [optional]
 */
@property(nonatomic) NSNumber* idAtendimento;
/* {{{atendimento_cliente_response_id_conta_value}}} [optional]
 */
@property(nonatomic) NSNumber* idConta;
/* {{{atendimento_cliente_response_id_tipo_atendimento_value}}} [optional]
 */
@property(nonatomic) NSNumber* idTipoAtendimento;
/* {{{atendimento_cliente_response_descricao_tipo_atendimento_value}}} [optional]
 */
@property(nonatomic) NSString* descricaoTipoAtendimento;
/* {{{atendimento_cliente_response_conteudo_atendimento_value}}} [optional]
 */
@property(nonatomic) NSString* conteudoAtendimento;
/* {{{atendimento_cliente_response_detalhes_atendimento_value}}} [optional]
 */
@property(nonatomic) NSString* detalhesAtendimento;
/* {{{atendimento_cliente_response_nome_atendente_value}}} [optional]
 */
@property(nonatomic) NSString* nomeAtendente;
/* {{{atendimento_cliente_response_nome_sistema_value}}} [optional]
 */
@property(nonatomic) NSString* nomeSistema;
/* {{{atendimento_cliente_response_data_hora_inicio_atendimento_value}}} [optional]
 */
@property(nonatomic) NSString* dataHoraInicioAtendimento;
/* {{{atendimento_cliente_response_data_hora_fim_atendimento_value}}} [optional]
 */
@property(nonatomic) NSString* dataHoraFimAtendimento;
/* {{{atendimento_cliente_response_data_atendimento_value}}} [optional]
 */
@property(nonatomic) NSString* dataAtendimento;
/* {{{atendimento_cliente_response_data_agendamento_value}}} [optional]
 */
@property(nonatomic) NSString* dataAgendamento;
/* {{{atendimento_cliente_response_data_processamento_value}}} [optional]
 */
@property(nonatomic) NSString* dataProcessamento;
/* {{{atendimento_cliente_response_flag_processamento_value}}} [optional]
 */
@property(nonatomic) NSNumber* flagProcessamento;

@end

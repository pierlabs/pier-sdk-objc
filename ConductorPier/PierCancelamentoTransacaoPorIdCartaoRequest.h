#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierCancelamentoTransacaoPorIdCartaoRequest
@end

@interface PierCancelamentoTransacaoPorIdCartaoRequest : PierObject

/* {{{transacao_on_us_por_id_cartao_request_nsu_origem_value}}} 
 */
@property(nonatomic) NSString* nsuOrigem;
/* {{{cancelamento_transacao_por_id_cartao_request_nsu_origem_transacao_cancelada_value}}} 
 */
@property(nonatomic) NSString* nsuOrigemTransacaoCancelada;
/* {{{transacao_on_us_por_id_cartao_request_codigo_processamento_value}}} 
 */
@property(nonatomic) NSString* codigoProcessamento;
/* {{{cancelamento_transacao_por_id_cartao_request_data_hora_transacao_cancelada_value}}} 
 */
@property(nonatomic) NSString* dataHoraTransacaoCancelada;
/* {{{cancelamento_transacao_por_id_cartao_request_nsu_autorizacao_transacao_cancelada_value}}} 
 */
@property(nonatomic) NSString* nsuAutorizacaoTransacaoCancelada;
/* {{{transacao_on_us_por_id_cartao_request_valor_transacao_value}}} 
 */
@property(nonatomic) NSNumber* valorTransacao;
/* {{{transacao_on_us_por_id_cartao_request_numero_estabelecimento_value}}} 
 */
@property(nonatomic) NSNumber* numeroEstabelecimento;
/* {{{transacao_on_us_por_id_cartao_request_data_hora_terminal_value}}} 
 */
@property(nonatomic) NSString* dataHoraTerminal;
/* {{{transacao_on_us_por_id_cartao_request_terminal_requisitante_value}}} 
 */
@property(nonatomic) NSString* terminalRequisitante;
/* {{{transacao_on_us_por_id_cartao_request_numero_parcelas_value}}} 
 */
@property(nonatomic) NSNumber* numeroParcelas;

@end

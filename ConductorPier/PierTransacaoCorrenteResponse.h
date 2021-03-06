#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierTransacaoCorrenteResponse
@end

@interface PierTransacaoCorrenteResponse : PierObject


@property(nonatomic) NSNumber* ultimaParcelaLancada;
/* {{{transacao_corrente_response_id_conta_value}}} [optional]
 */
@property(nonatomic) NSNumber* idConta;
/* {{{transacao_corrente_response_id_tipo_registro_value}}} [optional]
 */
@property(nonatomic) NSNumber* idTipoRegistro;
/* {{{transacao_corrente_response_ordem_value}}} [optional]
 */
@property(nonatomic) NSNumber* ordem;
/* {{{transacao_corrente_response_id_transacao_value}}} [optional]
 */
@property(nonatomic) NSNumber* idTransacao;
/* {{{transacao_corrente_response_descricao_value}}} [optional]
 */
@property(nonatomic) NSString* descricao;
/* {{{transacao_corrente_response_status_value}}} [optional]
 */
@property(nonatomic) NSNumber* status;
/* {{{transacao_corrente_response_descricao_status_value}}} [optional]
 */
@property(nonatomic) NSString* descricaoStatus;
/* {{{transacao_corrente_response_valor_value}}} [optional]
 */
@property(nonatomic) NSNumber* valor;
/* {{{transacao_corrente_response_valor_dolar_value}}} [optional]
 */
@property(nonatomic) NSNumber* valorDolar;
/* {{{transacao_corrente_response_quantidade_parcelas_value}}} [optional]
 */
@property(nonatomic) NSNumber* quantidadeParcelas;
/* {{{transacao_corrente_response_valor_parcela_value}}} [optional]
 */
@property(nonatomic) NSNumber* valorParcela;
/* {{{transacao_corrente_response_data_evento_value}}} [optional]
 */
@property(nonatomic) NSString* dataEvento;
/* {{{transacao_corrente_response_estabelecimento_value}}} [optional]
 */
@property(nonatomic) NSString* estabelecimento;
/* {{{transacao_corrente_response_flag_credito_value}}} [optional]
 */
@property(nonatomic) NSNumber* flagCredito;
/* {{{transacao_corrente_response_tipo_estabelecimento_value}}} [optional]
 */
@property(nonatomic) NSString* tipoEstabelecimento;
/* {{{transacao_corrente_response_id_grupo_m_c_c_value}}} [optional]
 */
@property(nonatomic) NSNumber* idGrupoMCC;
/* {{{transacao_corrente_response_flag_solicitou_contestacao_value}}} [optional]
 */
@property(nonatomic) NSNumber* flagSolicitouContestacao;
/* {{{transacao_corrente_response_tipo_transacao_value}}} [optional]
 */
@property(nonatomic) NSNumber* tipoTransacao;

@end

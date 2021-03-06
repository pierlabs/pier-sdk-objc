#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierAntecipacaoResponse
@end

@interface PierAntecipacaoResponse : PierObject


@property(nonatomic) NSNumber* mcc;

@property(nonatomic) NSString* uf;
/* {{{antecipacao_response_id_value}}} [optional]
 */
@property(nonatomic) NSNumber* _id;
/* {{{antecipacao_response_id_conta_value}}} [optional]
 */
@property(nonatomic) NSNumber* idConta;
/* {{{antecipacao_response_id_compra_value}}} [optional]
 */
@property(nonatomic) NSNumber* idCompra;
/* {{{antecipacao_response_quantidade_parcelas_total_value}}} [optional]
 */
@property(nonatomic) NSNumber* quantidadeParcelasTotal;
/* {{{antecipacao_response_quantidade_parcelas_antecipadas_value}}} [optional]
 */
@property(nonatomic) NSNumber* quantidadeParcelasAntecipadas;
/* {{{antecipacao_response_valor_parcela_value}}} [optional]
 */
@property(nonatomic) NSNumber* valorParcela;
/* {{{antecipacao_response_valor_desconto_total_value}}} [optional]
 */
@property(nonatomic) NSNumber* valorDescontoTotal;
/* {{{antecipacao_response_valor_total_com_desconto_value}}} [optional]
 */
@property(nonatomic) NSNumber* valorTotalComDesconto;
/* {{{antecipacao_response_taxa_desconto_value}}} [optional]
 */
@property(nonatomic) NSNumber* taxaDesconto;
/* {{{antecipacao_response_data_compra_value}}} [optional]
 */
@property(nonatomic) NSString* dataCompra;
/* {{{antecipacao_response_status_value}}} [optional]
 */
@property(nonatomic) NSString* status;
/* {{{antecipacao_response_nome_estabelecimento_value}}} [optional]
 */
@property(nonatomic) NSString* nomeEstabelecimento;
/* {{{antecipacao_response_tipo_origem_transacao_value}}} [optional]
 */
@property(nonatomic) NSString* tipoOrigemTransacao;
/* {{{antecipacao_response_cidade_value}}} [optional]
 */
@property(nonatomic) NSString* cidade;
/* {{{antecipacao_response_pais_value}}} [optional]
 */
@property(nonatomic) NSString* pais;
/* {{{antecipacao_response_latitude_value}}} [optional]
 */
@property(nonatomic) NSString* latitude;
/* {{{antecipacao_response_longitude_value}}} [optional]
 */
@property(nonatomic) NSString* longitude;
/* {{{antecipacao_response_id_grupo_m_c_c_value}}} [optional]
 */
@property(nonatomic) NSNumber* idGrupoMCC;
/* {{{antecipacao_response_descricao_grupo_m_c_c_value}}} [optional]
 */
@property(nonatomic) NSString* descricaoGrupoMCC;
/* {{{antecipacao_response_id_produto_value}}} [optional]
 */
@property(nonatomic) NSNumber* idProduto;
/* {{{antecipacao_response_descricao_produto_value}}} [optional]
 */
@property(nonatomic) NSString* descricaoProduto;
/* {{{antecipacao_response_descricao_estabelecimento_value}}} [optional]
 */
@property(nonatomic) NSString* descricaoEstabelecimento;
/* {{{antecipacao_response_nome_fantasia_estabelecimento_value}}} [optional]
 */
@property(nonatomic) NSString* nomeFantasiaEstabelecimento;

@end

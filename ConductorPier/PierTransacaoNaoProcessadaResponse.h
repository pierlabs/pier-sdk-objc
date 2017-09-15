#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierTransacaoNaoProcessadaResponse
@end

@interface PierTransacaoNaoProcessadaResponse : PierObject

/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Tipo da Transa\u00C3\u00A7\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSNumber* idTipoTransacaoNaoProcessada;
/* Descri\u00C3\u00A7\u00C3\u00A3o do Tipo da Transa\u00C3\u00A7\u00C3\u00A3o n\u00C3\u00A3o Processada. [optional]
 */
@property(nonatomic) NSString* descricaoTipoTransacaoNaoProcessada;
/* Descri\u00C3\u00A7\u00C3\u00A3o Abreviada da Transa\u00C3\u00A7\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* descricaoAbreviada;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Conta (id). [optional]
 */
@property(nonatomic) NSNumber* idConta;
/* N\u00C3\u00BAmero do Cart\u00C3\u00A3o em Formato 0000XXXXXXXX0000. [optional]
 */
@property(nonatomic) NSString* cartaoMascarado;
/* Nome completo do Portador do Cart\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* nomePortador;
/* Data em que a Transa\u00C3\u00A7\u00C3\u00A3o foi realizada. [optional]
 */
@property(nonatomic) NSString* dataOrigem;
/* Data de Faturamento da Transa\u00C3\u00A7\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* dataFaturamento;
/* Data de Vencimento da Fatura. [optional]
 */
@property(nonatomic) NSString* dataVencimento;
/* Descreve o modo utilizado para realizar a leitura dos dados do cart\u00C3\u00A3o para realizar a Transa\u00C3\u00A7\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* modoEntradaTransacao;
/* Valor da Taxa de Embarque em Real (BRL) quando a transa\u00C3\u00A7\u00C3\u00A3o for relacionada a Compra de Passagens A\u00C3\u00A9reas. [optional]
 */
@property(nonatomic) NSNumber* valorTaxaEmbarque;
/* Valor da Entrada em Real (BRL) quando a transa\u00C3\u00A7\u00C3\u00A3o for do tipo Parcelada com o pagamento de um valor de Entrada. [optional]
 */
@property(nonatomic) NSNumber* valorEntrada;
/* Valor da Transa\u00C3\u00A7\u00C3\u00A3o em Real (BRL). [optional]
 */
@property(nonatomic) NSNumber* valorBRL;
/* Valor da Transa\u00C3\u00A7\u00C3\u00A3o em D\u00C3\u00B3lar Americano (USD). [optional]
 */
@property(nonatomic) NSNumber* valorUSD;
/* Valor do D\u00C3\u00B3lar Americano (USD) convertido em Real (BRL). [optional]
 */
@property(nonatomic) NSNumber* cotacaoUSD;
/* Data de Fechamento da Cota\u00C3\u00A7\u00C3\u00A3o do D\u00C3\u00B3lar Americano (USD). [optional]
 */
@property(nonatomic) NSString* dataCotacaoUSD;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Moeda utilizada na Transa\u00C3\u00A7\u00C3\u00A3o, seguindo padr\u00C3\u00A3o ISO 4217. [optional]
 */
@property(nonatomic) NSString* codigoMoedaOrigem;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Moeda da Transa\u00C3\u00A7\u00C3\u00A3o ap\u00C3\u00B3s a convers\u00C3\u00A3o, seguindo padr\u00C3\u00A3o ISO 4217. [optional]
 */
@property(nonatomic) NSString* codigoMoedaDestino;
/* C\u00C3\u00B3digo de Autoriza\u00C3\u00A7\u00C3\u00A3o da Transa\u00C3\u00A7\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* codigoAutorizacao;
/* C\u00C3\u00B3digo de Refer\u00C3\u00AAncia da Transa\u00C3\u00A7\u00C3\u00A3o quando utilizado Cart\u00C3\u00A3o Bandeirado. [optional]
 */
@property(nonatomic) NSString* codigoReferencia;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da origem da captura da Transa\u00C3\u00A7\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* codigoTerminal;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da categoria do Estabelecimento. [optional]
 */
@property(nonatomic) NSNumber* codigoMCC;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do grupo do Estabelecimento. [optional]
 */
@property(nonatomic) NSNumber* grupoMCC;
/* Descri\u00C3\u00A7\u00C3\u00A3o do grupo do Estabelecimento. [optional]
 */
@property(nonatomic) NSString* grupoDescricaoMCC;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Estabelecimento (id). [optional]
 */
@property(nonatomic) NSNumber* idEstabelecimento;
/* Nome do Estabelecimento. [optional]
 */
@property(nonatomic) NSString* nomeEstabelecimento;
/* Localidade do Estabelecimento. [optional]
 */
@property(nonatomic) NSString* localidadeEstabelecimento;
/* Quando a Transa\u00C3\u00A7\u00C3\u00A3o for do tipo Parcelada, apresenta o n\u00C3\u00BAmero total de Parcelas. [optional]
 */
@property(nonatomic) NSNumber* planoParcelamento;
/* Quando a Transa\u00C3\u00A7\u00C3\u00A3o for do tipo Parcelada, apresenta o n\u00C3\u00BAmero da Parcela. [optional]
 */
@property(nonatomic) NSNumber* numeroParcela;
/* Detalhes complementares a respeito da Transa\u00C3\u00A7\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* detalhesTransacao;
/* Quando ativa, indica que a Transa\u00C3\u00A7\u00C3\u00A3o \u00C3\u00A9 do Tipo 'Cr\u00C3\u00A9dito'. [optional]
 */
@property(nonatomic) NSNumber* flagCredito;
/* Quando ativa, indica que a Transa\u00C3\u00A7\u00C3\u00A3o foi consolidada em uma Fatura. [optional]
 */
@property(nonatomic) NSNumber* flagFaturado;
/* Quando ativa, indica que a Transa\u00C3\u00A7\u00C3\u00A3o foi estornada. [optional]
 */
@property(nonatomic) NSNumber* flagEstorno;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Transa\u00C3\u00A7\u00C3\u00A3o (id) que gerou o estorno. [optional]
 */
@property(nonatomic) NSNumber* idTransacaoEstorno;
/* Atributo que representa o c\u00C3\u00B3digo identificador do status da transa\u00C3\u00A7\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSNumber* status;

@end

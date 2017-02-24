#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierTransacaoResponse
@end

@interface PierTransacaoResponse : PierObject


@property(nonatomic) NSNumber* ultimaParcelaLancada;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da transacao (id). [optional]
 */
@property(nonatomic) NSNumber* _id;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id). [optional]
 */
@property(nonatomic) NSNumber* idConta;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do tipo de transacao (id). [optional]
 */
@property(nonatomic) NSNumber* idTipoRegistro;
/* Representa\u00C3\u00A7\u00C3\u00A3o da ordena\u00C3\u00A7\u00C3\u00A3o da transacao (id). [optional]
 */
@property(nonatomic) NSNumber* ordem;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da transacao (id). [optional]
 */
@property(nonatomic) NSNumber* idTransacao;

@property(nonatomic) NSString* descricao;

@property(nonatomic) NSNumber* status;

@property(nonatomic) NSString* descricaoStatus;

@property(nonatomic) NSNumber* valor;

@property(nonatomic) NSNumber* valorDolar;

@property(nonatomic) NSNumber* quantidadeParcelas;

@property(nonatomic) NSNumber* valorParcela;

@property(nonatomic) NSDate* dataEvento;

@property(nonatomic) NSString* estabelecimento;

@property(nonatomic) NSNumber* flagCredito;

@property(nonatomic) NSString* tipoEstabelecimento;

@property(nonatomic) NSNumber* idGrupoMCC;

@property(nonatomic) NSNumber* flagSolicitouContestacao;

@end

#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierTransferenciaCreditoContaBancariaPersist
@end

@interface PierTransferenciaCreditoContaBancariaPersist : PierObject

/* Representa o N\u00C3\u00BAmero Sequencial \u00C3\u009Anico que identifica a transa\u00C3\u00A7\u00C3\u00A3o no sistema que a originou. 
 */
@property(nonatomic) NSNumber* nsuOrigem;
/* Representa o Identificador do Cartao. 
 */
@property(nonatomic) NSNumber* idCartao;
/* Representa o Identificador da conta banc\u00C3\u00A1ria. 
 */
@property(nonatomic) NSNumber* idContaBancaria;
/* Representa o Valor da transfer\u00C3\u00AAncia. 
 */
@property(nonatomic) NSNumber* valor;
/* Representa o N\u00C3\u00BAmero de Parcelas pelo qual o valor da transfer\u00C3\u00AAncia ser\u00C3\u00A1 dividido. 
 */
@property(nonatomic) NSNumber* numeroParcelas;
/* Representa o N\u00C3\u00BAmero de Meses concedido como car\u00C3\u00AAncia. 
 */
@property(nonatomic) NSNumber* numeroMesesCarencia;
/* Representa a Data e hora do terminal requisitante. 
 */
@property(nonatomic) NSString* dataHoraTerminal;
/* Representa a identifica\u00C3\u00A7\u00C3\u00A3o do terminal requisitante. 
 */
@property(nonatomic) NSString* terminalRequisitante;
/* Representa a identifica\u00C3\u00A7\u00C3\u00A3o do n\u00C3\u00BAmero do estabelecimento. 
 */
@property(nonatomic) NSNumber* numeroEstabelecimento;

@end
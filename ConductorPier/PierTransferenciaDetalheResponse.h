#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierTransferenciaDetalheResponse
@end

@interface PierTransferenciaDetalheResponse : PierObject

/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da transfer\u00C3\u00AAncia (id). [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Data estabelecida para ocorrer a transfer\u00C3\u00AAncia. [optional]
 */
@property(nonatomic) NSString* dataTransferencia;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta em que o valor ser\u00C3\u00A1 debitado para a transfer\u00C3\u00AAncia. (id). [optional]
 */
@property(nonatomic) NSNumber* idContaOrigem;
/* Apresenta o nome completo da pessoa que realizou a Transfer\u00C3\u00AAncia. [optional]
 */
@property(nonatomic) NSString* nomePessoaOrigem;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta em que o valor ser\u00C3\u00A1 creditado para a transfer\u00C3\u00AAncia. (id). [optional]
 */
@property(nonatomic) NSNumber* idContaDestino;
/* Apresenta o nome completo da pessoa que recebeu a Transfer\u00C3\u00AAncia. [optional]
 */
@property(nonatomic) NSString* nomePessoaDestino;
/* Valor estabelecido para ser transferido. [optional]
 */
@property(nonatomic) NSNumber* valorTransferencia;
/* Valor estabelecido da tarifa para a transfer\u00C3\u00AAncia. [optional]
 */
@property(nonatomic) NSNumber* valorTarifa;

@end

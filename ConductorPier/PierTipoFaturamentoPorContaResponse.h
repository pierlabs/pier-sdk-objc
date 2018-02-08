#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierTipoFaturamentoPorContaResponse
@end

@interface PierTipoFaturamentoPorContaResponse : PierObject

/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do tipo de faturamento por conta (id). [optional]
 */
@property(nonatomic) NSNumber* _id;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta relacionada ao tipo de faturamento. [optional]
 */
@property(nonatomic) NSNumber* idConta;
/* Status da configura\u00C3\u00A7\u00C3\u00A3o que representa que se o tipo de faturamento por conta est\u00C3\u00A1 ativo ou cancelado. [optional]
 */
@property(nonatomic) NSNumber* status;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da tipo de faturamento referenciado. [optional]
 */
@property(nonatomic) NSNumber* idTipoFaturamento;
/* Data de inclus\u00C3\u00A3o da configura\u00C3\u00A7\u00C3\u00A3o de tipo de faturamento por conta. [optional]
 */
@property(nonatomic) NSString* dataHoraInclusao;
/* Data de cancelamento da configura\u00C3\u00A7\u00C3\u00A3o de tipo de faturamento por conta. [optional]
 */
@property(nonatomic) NSString* dataHoraCancelamento;
/* Descri\u00C3\u00A7\u00C3\u00A3o do respons\u00C3\u00A1vel pela \u00C3\u00BAltima modifica\u00C3\u00A7\u00C3\u00A3o da configura\u00C3\u00A7\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* modificadoPor;

@end
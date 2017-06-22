#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierStatusOportunidade
@end

@interface PierStatusOportunidade : PierObject

/* Nome do status oportunidade [optional]
 */
@property(nonatomic) NSString* nome;
/* Descri\u00C3\u00A7\u00C3\u00A3o do status oportunidade 
 */
@property(nonatomic) NSString* descricao;
/* Flag de verifica\u00C3\u00A7\u00C3\u00A3o se o status oportunidade est\u00C3\u00A1 ativo 
 */
@property(nonatomic) NSNumber* flagAtivo;

@end
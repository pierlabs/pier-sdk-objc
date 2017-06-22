#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierStatusOportunidadeResponse
@end

@interface PierStatusOportunidadeResponse : PierObject

/* C\u00C3\u00B3digo identificador do StatusOportunidade [optional]
 */
@property(nonatomic) NSNumber* _id;
/* C\u00C3\u00B3digo identificador do TipoOportunidade [optional]
 */
@property(nonatomic) NSNumber* idTipoOportunidade;
/* Nome do status oportunidade [optional]
 */
@property(nonatomic) NSString* nome;
/* Descricao do StatusOportunidade [optional]
 */
@property(nonatomic) NSString* descricao;
/* Flag que representa se o tipo oportunidade est\u00C3\u00A1 ativo [optional]
 */
@property(nonatomic) NSNumber* flagAtivo;

@end
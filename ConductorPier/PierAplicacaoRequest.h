#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierAplicacaoRequest
@end

@interface PierAplicacaoRequest : PierObject

/* {{{aplicacao_dto_nome_value}}} [optional]
 */
@property(nonatomic) NSString* nome;
/* {{{aplicacao_dto_token_value}}} [optional]
 */
@property(nonatomic) NSNumber* tokenId;
/* {{{global_menssagem_sort_sort}}} [optional]
 */
@property(nonatomic) NSArray* /* NSString */ sort;

@end
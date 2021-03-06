#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierProdutoDetalhesResponse
@end

@interface PierProdutoDetalhesResponse : PierObject

/* {{{produto_response_id_value}}} 
 */
@property(nonatomic) NSNumber* _id;
/* {{{produto_response_nome_value}}} 
 */
@property(nonatomic) NSString* nome;
/* {{{produto_response_status_value}}} 
 */
@property(nonatomic) NSNumber* status;
/* {{{produto_response_id_fantasia_basica_value}}} [optional]
 */
@property(nonatomic) NSNumber* idFantasiaBasica;
/* {{{produto_detalhes_response_fantasia_basica_value}}} [optional]
 */
@property(nonatomic) NSString* fantasiaBasica;
/* {{{produto_detalhes_response_uso_exterior_value}}} [optional]
 */
@property(nonatomic) NSNumber* usoExterior;

@end

#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierTelefoneAdicionalPersist
@end

@interface PierTelefoneAdicionalPersist : PierObject

/* {{{telefone_adicional_persist_id_tipo_telefone_value}}} [optional]
 */
@property(nonatomic) NSNumber* idTipoTelefone;
/* {{{telefone_adicional_persist_ddd_value}}} [optional]
 */
@property(nonatomic) NSString* ddd;
/* {{{telefone_adicional_persist_telefone_value}}} [optional]
 */
@property(nonatomic) NSString* telefone;
/* {{{telefone_adicional_persist_ramal_value}}} [optional]
 */
@property(nonatomic) NSString* ramal;

@end

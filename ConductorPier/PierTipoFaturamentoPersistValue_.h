#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierTipoFaturamentoPersistValue_
@end

@interface PierTipoFaturamentoPersistValue_ : PierObject

/* {{{tipo_faturamento_persist_descricao_value}}} 
 */
@property(nonatomic) NSString* descricao;
/* {{{tipo_faturamento_persist_flag_apenas_demonstrativo_value}}} 
 */
@property(nonatomic) NSNumber* flagApenasDemonstrativo;
/* {{{tipo_faturamento_persist_id_convenio_value}}} [optional]
 */
@property(nonatomic) NSNumber* idConvenio;

@end

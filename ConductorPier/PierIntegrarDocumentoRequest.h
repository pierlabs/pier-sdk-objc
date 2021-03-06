#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierPropriedadeDocumentoRequest.h"


@protocol PierIntegrarDocumentoRequest
@end

@interface PierIntegrarDocumentoRequest : PierObject

/* {{{integrar_documento_request_id_template_value}}} [optional]
 */
@property(nonatomic) NSNumber* idTemplate;
/* {{{integrar_documento_request_arquivo_value}}} [optional]
 */
@property(nonatomic) NSString* arquivo;
/* {{{integrar_documento_request_nome_value}}} [optional]
 */
@property(nonatomic) NSString* nome;
/* {{{integrar_documento_request_propriedades_value}}} [optional]
 */
@property(nonatomic) NSArray<PierPropriedadeDocumentoRequest>* propriedades;

@end

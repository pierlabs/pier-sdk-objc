#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierNotificacaoResponse
@end

@interface PierNotificacaoResponse : PierObject

/* {{{notificacao_response_protocolo_value}}} [optional]
 */
@property(nonatomic) NSString* protocolo;
/* {{{notificacao_response_mensagem_value}}} [optional]
 */
@property(nonatomic) NSString* mensagem;

@end

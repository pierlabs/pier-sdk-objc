#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierWebHookResponse
@end

@interface PierWebHookResponse : PierObject

/* Id do WebHook 
 */
@property(nonatomic) NSNumber* _id;
/* TipoEvento a ser chamado pelo WebHook 
 */
@property(nonatomic) NSString* tipoEvento;
/* M\u00C3\u00A9todo que a ser chamado pelo WebHook 
 */
@property(nonatomic) NSString* metodo;
/* URL que a ser consumida pelo WebHook 
 */
@property(nonatomic) NSString* url;

@end
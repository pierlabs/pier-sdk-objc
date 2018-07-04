#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierReferenciaIdPersist.h"


@protocol PierUsuarioldapUpdateObjectDescription_
@end

@interface PierUsuarioldapUpdateObjectDescription_ : PierObject

/* {{{usuario_update_nome_value}}} [optional]
 */
@property(nonatomic) NSString* nome;
/* {{{usuario_update_login_value}}} [optional]
 */
@property(nonatomic) NSString* login;
/* {{{usuario_update_cpf_value}}} [optional]
 */
@property(nonatomic) NSString* cpf;
/* {{{usuario_update_email_value}}} [optional]
 */
@property(nonatomic) NSString* email;
/* {{{usuario_persist_email_value}}} [optional]
 */
@property(nonatomic) NSArray<PierReferenciaIdPersist>* perfis;
/* {{{usuario_update_status_value}}} [optional]
 */
@property(nonatomic) NSString* status;

@end
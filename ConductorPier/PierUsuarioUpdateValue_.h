#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierUsuarioUpdateValue_
@end

@interface PierUsuarioUpdateValue_ : PierObject

/* {{{usuario_update_nome_value}}} [optional]
 */
@property(nonatomic) NSString* nome;
/* {{{usuario_update_login_value}}} 
 */
@property(nonatomic) NSString* login;
/* {{{usuario_update_cpf_value}}} [optional]
 */
@property(nonatomic) NSString* cpf;
/* {{{usuario_update_email_value}}} 
 */
@property(nonatomic) NSString* email;
/* {{{usuario_update_status_value}}} [optional]
 */
@property(nonatomic) NSString* status;
/* {{{usuario_update_bloquear_acesso_descricao}}} [optional]
 */
@property(nonatomic) NSNumber* bloquearAcesso;

@end

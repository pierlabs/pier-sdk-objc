#import <Foundation/Foundation.h>
#import "PierUsuarioUpdate.h"
#import "PierUsuarioResponse.h"
#import "PierPageUsuarios.h"
#import "PierUsuarioPersist.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierUsuariosApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierUsuariosApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierUsuariosApi*) sharedAPI;
///
///
/// Alterar senha do usu\u00C3\u00A1rio
/// Este m\u00C3\u00A9todo realiza a altera\u00C3\u00A7\u00C3\u00A3o da senha do usu\u00C3\u00A1rio.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Usu\u00C3\u00A1rio (id).
/// @param senhaAtual Senha Atual
/// @param senhaNova Senha Nova
/// 
///
/// @return NSString*
-(NSNumber*) alterarSenhaUsingPUTWithId: (NSNumber*) _id
    senhaAtual: (NSString*) senhaAtual
    senhaNova: (NSString*) senhaNova
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// Altera os usu\u00C3\u00A1rios cadastrados
/// Este m\u00C3\u00A9todo realiza a altera\u00C3\u00A7\u00C3\u00A3o dos usu\u00C3\u00A1rios.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Usu\u00C3\u00A1rio (id).
/// @param update update
/// 
///
/// @return PierUsuarioResponse*
-(NSNumber*) alterarUsingPUT9WithId: (NSNumber*) _id
    update: (PierUsuarioUpdate*) update
    completionHandler: (void (^)(PierUsuarioResponse* output, NSError* error)) handler;


///
///
/// Apresenta os dados de um determinado Usu\u00C3\u00A1rio
/// Este m\u00C3\u00A9todo permite consultar as informa\u00C3\u00A7\u00C3\u00B5es de um determinado Usu\u00C3\u00A1rio a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Usu\u00C3\u00A1rio (id).
/// 
///
/// @return PierUsuarioResponse*
-(NSNumber*) consultarUsingGET22WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierUsuarioResponse* output, NSError* error)) handler;


///
///
/// Lista os Usu\u00C3\u00A1rios cadastrados
/// Este m\u00C3\u00A9todo permite que sejam listados os usu\u00C3\u00A1rios existentes na base do PIER.
///
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// @param nome Nome do Usuario
/// @param cpf CPF do Usuario
/// @param email Email do Usuario
/// @param status Status do Usuario
/// 
///
/// @return PierPageUsuarios*
-(NSNumber*) listarUsingGET21WithPage: (NSNumber*) page
    limit: (NSNumber*) limit
    nome: (NSString*) nome
    cpf: (NSString*) cpf
    email: (NSString*) email
    status: (NSString*) status
    completionHandler: (void (^)(PierPageUsuarios* output, NSError* error)) handler;


///
///
/// Recuperar senha do usu\u00C3\u00A1rio
/// Esse recurso permite recuperar a senha do usu\u00C3\u00A1rio.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Usu\u00C3\u00A1rio (id).
/// 
///
/// @return NSString*
-(NSNumber*) recuperarSenhaUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// Cadastra Usu\u00C3\u00A1rio
/// Esse recurso permite cadastrar usu\u00C3\u00A1rios.
///
/// @param persist persist
/// 
///
/// @return PierUsuarioResponse*
-(NSNumber*) salvarUsingPOST8WithPersist: (PierUsuarioPersist*) persist
    completionHandler: (void (^)(PierUsuarioResponse* output, NSError* error)) handler;


///
///
/// Validar a senha do usu\u00C3\u00A1rio
/// Este m\u00C3\u00A9todo permite validar a senha do usu\u00C3\u00A1rio).
///
/// @param senha Senha do usu\u00C3\u00A1rio
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Usu\u00C3\u00A1rio (id).
/// 
///
/// @return NSString*
-(NSNumber*) validarSenhaUsingGET1WithSenha: (NSString*) senha
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;



@end

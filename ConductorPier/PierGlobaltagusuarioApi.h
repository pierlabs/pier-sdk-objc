#import <Foundation/Foundation.h>
#import "PierUsuarioResponse.h"
#import "PierUsuarioUpdateValue_.h"
#import "PierControleSegurancaDispositivoResponse.h"
#import "PierControleSegurancaDispositivoUpdateValor_.h"
#import "PierPageUsuarioContasResponse.h"
#import "PierPageControleSegurancaDispositivoResponse.h"
#import "PierPageUsuarioResponse.h"
#import "PierControleSegurancaDispositivoPersistencia_.h"
#import "PierUsuarioPersistencia_.h"
#import "PierUsuarioSenhaFortePersistencia_.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierGlobaltagusuarioApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierGlobaltagusuarioApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierGlobaltagusuarioApi*) sharedAPI;
///
///
/// {{{usuario_resource_alterar_senha_login}}}
/// {{{usuario_resource_alterar_senha_login_notes}}}
///
/// @param login {{{usuario_resource_alterar_senha_login_param_login}}}
/// @param senhaNova {{{usuario_resource_alterar_senha_login_param_senha_nova}}}
/// 
///
/// @return NSString*
-(NSNumber*) alterarSenhaLoginUsingPOSTWithLogin: (NSString*) login
    senhaNova: (NSString*) senhaNova
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_alterar_senha}}}
/// {{{usuario_resource_alterar_senha_notes}}}
///
/// @param _id {{{usuario_resource_alterar_senha_param_id}}}
/// @param senhaAtual {{{usuario_resource_alterar_senha_param_senha_atual}}}
/// @param senhaNova {{{usuario_resource_alterar_senha_param_senha_nova}}}
/// 
///
/// @return NSString*
-(NSNumber*) alterarSenhaUsingPUTWithId: (NSNumber*) _id
    senhaAtual: (NSString*) senhaAtual
    senhaNova: (NSString*) senhaNova
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_alterar}}}
/// {{{usuario_resource_alterar_notes}}}
///
/// @param _id {{{usuario_resource_alterar_param_id}}}
/// @param update update
/// 
///
/// @return PierUsuarioResponse*
-(NSNumber*) alterarUsingPUT23WithId: (NSNumber*) _id
    update: (PierUsuarioUpdateValue_*) update
    completionHandler: (void (^)(PierUsuarioResponse* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_ativar_usuario}}}
/// {{{usuario_resource_ativar_usuario_notes}}}
///
/// @param _id {{{usuario_resource_ativar_usuario_param_id}}}
/// 
///
/// @return PierUsuarioResponse*
-(NSNumber*) ativarUsuarioUsingPOST1WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierUsuarioResponse* output, NSError* error)) handler;


///
///
/// {{{controle_seguranca_dispositivo_atualizar}}}
/// {{{controle_seguranca_dispositivo_atualizar_notas}}}
///
/// @param update update
/// 
///
/// @return PierControleSegurancaDispositivoResponse*
-(NSNumber*) atualizarUsingPUT3WithUpdate: (PierControleSegurancaDispositivoUpdateValor_*) update
    completionHandler: (void (^)(PierControleSegurancaDispositivoResponse* output, NSError* error)) handler;


///
///
/// {{{usuario_recurso_listar_por_id_usuario}}}
/// {{{usuario_recurso_listar_por_id_usuario_notas}}}
///
/// @param _id {{{usuario_recurso_listar_por_id_param_id_usuario}}}
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// 
///
/// @return PierPageUsuarioContasResponse*
-(NSNumber*) consultarContasVinculadasUsingGETWithId: (NSNumber*) _id
    sort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageUsuarioContasResponse* output, NSError* error)) handler;


///
///
/// {{{controle_seguranca_dispositivo_consultar}}}
/// {{{controle_seguranca_dispositivo_consultar_notas}}}
///
/// @param idUsuario {{{usuario_resource_consultar_param_idUsuario}}}
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// 
///
/// @return PierPageControleSegurancaDispositivoResponse*
-(NSNumber*) consultarUsingGET17WithIdUsuario: (NSNumber*) idUsuario
    sort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageControleSegurancaDispositivoResponse* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_consultar}}}
/// {{{usuario_resource_consultar_notes}}}
///
/// @param _id {{{usuario_resource_consultar_param_id}}}
/// 
///
/// @return PierUsuarioResponse*
-(NSNumber*) consultarUsingGET53WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierUsuarioResponse* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_desativar_usuario}}}
/// {{{usuario_resource_desativar_usuario_notes}}}
///
/// @param _id {{{usuario_resource_desativar_usuario_param_id}}}
/// 
///
/// @return PierUsuarioResponse*
-(NSNumber*) desativarUsuarioUsingPOST1WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierUsuarioResponse* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_listar}}}
/// {{{usuario_resource_listar_notes}}}
///
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// @param nome {{{usuario_request_nome_value}}}
/// @param cpf {{{usuario_request_cpf_value}}}
/// @param email {{{usuario_request_email_value}}}
/// @param status {{{usuario_request_status_value}}}
/// 
///
/// @return PierPageUsuarioResponse*
-(NSNumber*) listarUsingGET65WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    nome: (NSString*) nome
    cpf: (NSString*) cpf
    email: (NSString*) email
    status: (NSString*) status
    completionHandler: (void (^)(PierPageUsuarioResponse* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_recuperar_senha}}}
/// {{{usuario_resource_recuperar_senha_notes}}}
///
/// @param _id {{{usuario_resource_recuperar_senha_param_id}}}
/// 
///
/// @return NSString*
-(NSNumber*) recuperarSenhaUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// {{{controle_seguranca_dispositivo_salvar}}}
/// {{{controle_seguranca_dispositivo_salvar_notas}}}
///
/// @param persist persist
/// 
///
/// @return PierControleSegurancaDispositivoResponse*
-(NSNumber*) salvarUsingPOST10WithPersist: (PierControleSegurancaDispositivoPersistencia_*) persist
    completionHandler: (void (^)(PierControleSegurancaDispositivoResponse* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_salvar}}}
/// {{{usuario_resource_salvar_notes}}}
///
/// @param persist persist
/// 
///
/// @return PierUsuarioResponse*
-(NSNumber*) salvarUsingPOST34WithPersist: (PierUsuarioPersistencia_*) persist
    completionHandler: (void (^)(PierUsuarioResponse* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_validar_senha_forte}}}
/// {{{usuario_resource_validar_senha_forte_notes}}}
///
/// @param senha {{{usuario_resource_validar_senha_forte_param_senha}}}
/// @param usuarioSenhaFortePersist {{{usuario_resource_validar_senha_forte_param_id_plataforma}}}
/// 
///
/// @return NSString*
-(NSNumber*) validarSenhaForteUsingPOSTWithSenha: (NSString*) senha
    usuarioSenhaFortePersist: (PierUsuarioSenhaFortePersistencia_*) usuarioSenhaFortePersist
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_validar_senha_login}}}
/// {{{usuario_resource_validar_senha_login_notes}}}
///
/// @param login {{{usuario_resource_validar_senha_login_param_login}}}
/// @param senha {{{usuario_resource_validar_senha_login_param_senha}}}
/// 
///
/// @return NSObject*
-(NSNumber*) validarSenhaLoginUsingPOSTWithLogin: (NSString*) login
    senha: (NSString*) senha
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// {{{usuario_resource_validar_senha}}}
/// {{{usuario_resource_validar_senha_notes}}}
///
/// @param senha {{{usuario_resource_validar_senha_param_senha}}}
/// @param _id {{{usuario_resource_validar_senha_param_id}}}
/// 
///
/// @return NSString*
-(NSNumber*) validarSenhaUsingGET1WithSenha: (NSString*) senha
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// {{{usuario_recurso_vincular_usuarios}}}
/// {{{usuario_recurso_vincular_usuarios_notas}}}
///
/// @param _id {{{usuario_recurso_vincular_usuarios_param_id}}}
/// 
///
/// @return NSString*
-(NSNumber*) vincularContasUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;



@end

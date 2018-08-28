#import <Foundation/Foundation.h>
#import "PierLogAcessoUsuarioPersistencia_.h"
#import "PierLogAcessoUsuarioResposta_.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierGlobaltaglogApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierGlobaltaglogApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierGlobaltaglogApi*) sharedAPI;
///
///
/// {{{log_acesso_usuario_recurso_salvar}}}
/// {{{log_acesso_usuario_recurso_salvar_notas}}}
///
/// @param logAcessoUsuarioPersist logAcessoUsuarioPersist
/// 
///
/// @return PierLogAcessoUsuarioResposta_*
-(NSNumber*) salvarUsingPOST19WithLogAcessoUsuarioPersist: (PierLogAcessoUsuarioPersistencia_*) logAcessoUsuarioPersist
    completionHandler: (void (^)(PierLogAcessoUsuarioResposta_* output, NSError* error)) handler;



@end

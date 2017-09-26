#import <Foundation/Foundation.h>
#import "PierPlataformaMobileResponse.h"
#import "PierPlataformaMobileUpdate.h"
#import "PierPagePlataformaMobileResponse.h"
#import "PierPlataformaMobilePersist.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierPlataformaMobileApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierPlataformaMobileApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierPlataformaMobileApi*) sharedAPI;
///
///
/// Atualiza Plataforma Mobile
/// Esse recurso permite atualizar plataforma mobile.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Plataforma (id).
/// @param update update
/// 
///
/// @return PierPlataformaMobileResponse*
-(NSNumber*) atualizarUsingPUT1WithId: (NSNumber*) _id
    update: (PierPlataformaMobileUpdate*) update
    completionHandler: (void (^)(PierPlataformaMobileResponse* output, NSError* error)) handler;


///
///
/// Lista as plataformas mobile cadastradas
/// Este m\u00C3\u00A9todo permite que sejam listadas as plataformas mobile existentes na base do PIER.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param nome Nome da Plataforma Mobile
/// 
///
/// @return PierPagePlataformaMobileResponse*
-(NSNumber*) listarUsingGET17WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    nome: (NSString*) nome
    completionHandler: (void (^)(PierPagePlataformaMobileResponse* output, NSError* error)) handler;


///
///
/// Cadastra Plataforma Mobile
/// Esse recurso permite cadastrar plataformas mobile.
///
/// @param persist persist
/// 
///
/// @return PierPlataformaMobileResponse*
-(NSNumber*) salvarUsingPOST15WithPersist: (PierPlataformaMobilePersist*) persist
    completionHandler: (void (^)(PierPlataformaMobileResponse* output, NSError* error)) handler;



@end

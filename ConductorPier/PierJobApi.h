#import <Foundation/Foundation.h>
#import "PierJobResponse.h"
#import "PierPageJobResponse.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierJobApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierJobApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierJobApi*) sharedAPI;
///
///
/// Ativar Job
/// Este recurso adiciona o job ao agendador de tarefas.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Job (id).
/// 
///
/// @return PierJobResponse*
-(NSNumber*) ativarJobUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierJobResponse* output, NSError* error)) handler;


///
///
/// Atualizar Job
/// Este recurso permite atualizar os dados de um job cadastrado.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Job (id).
/// @param descricao descricao.
/// @param cron Cron do Job.
/// @param groovy groovy
/// 
///
/// @return PierJobResponse*
-(NSNumber*) atualizarUsingPUT2WithId: (NSNumber*) _id
    descricao: (NSString*) descricao
    cron: (NSString*) cron
    groovy: (NSString*) groovy
    completionHandler: (void (^)(PierJobResponse* output, NSError* error)) handler;


///
///
/// Desativar Job
/// Este recurso retira o job do agendador de tarefas.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Job (id).
/// 
///
/// @return PierJobResponse*
-(NSNumber*) desativarJobUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierJobResponse* output, NSError* error)) handler;


///
///
/// Listar Jobs
/// Este recurso permite que sejam listados os jobs existentes na base do PIER.
///
/// @param groovy Script Groovy do Job
/// @param descricao Descri\u00C3\u00A7\u00C3\u00A3o do Job
/// @param cron Cron do Job
/// @param status Status do Job
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPageJobResponse*
-(NSNumber*) listarUsingGET16WithGroovy: (NSString*) groovy
    descricao: (NSString*) descricao
    cron: (NSString*) cron
    status: (NSString*) status
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageJobResponse* output, NSError* error)) handler;


///
///
/// Cadastrar Job
/// Esse recurso permite cadastrar jobs.
///
/// @param descricao descricao.
/// @param cron Cron do Job.
/// @param groovy groovy
/// 
///
/// @return PierJobResponse*
-(NSNumber*) salvarUsingPOST11WithDescricao: (NSString*) descricao
    cron: (NSString*) cron
    groovy: (NSString*) groovy
    completionHandler: (void (^)(PierJobResponse* output, NSError* error)) handler;



@end

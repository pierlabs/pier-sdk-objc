#import <Foundation/Foundation.h>
#import "PierWebHookResponse.h"
#import "PierPageWebHookResponse.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierWebhooksApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierWebhooksApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierWebhooksApi*) sharedAPI;
///
///
/// Alterar Webhook
/// Este m\u00C3\u00A9todo permite que seja modificado um webhooks j\u00C3\u00A1 cadastrado
///
/// @param _id C\u00C3\u00B3digo identificador do Webhook
/// @param tipoEvento TipoEvento a ser chamado pelo WebHook
/// @param url URL que a ser consumida pelo WebHook
/// @param status Status
/// 
///
/// @return PierWebHookResponse*
-(NSNumber*) alterarUsingPUT11WithId: (NSNumber*) _id
    tipoEvento: (NSString*) tipoEvento
    url: (NSString*) url
    status: (NSString*) status
    completionHandler: (void (^)(PierWebHookResponse* output, NSError* error)) handler;


///
///
/// Consultar Webhook
/// Este m\u00C3\u00A9todo permite que sejam consultado um webhook do emissor atrav\u00C3\u00A9s de um id especifico
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Webhook (id).
/// 
///
/// @return PierWebHookResponse*
-(NSNumber*) consultarUsingGET27WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierWebHookResponse* output, NSError* error)) handler;


///
///
/// Lista os Webhooks
/// Este m\u00C3\u00A9todo permite que sejam listados os webhooks existentes
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param _id Id do WebHook
/// @param tipoEvento TipoEvento a ser chamado pelo WebHook
/// @param metodo M\u00C3\u00A9todo que a ser chamado pelo WebHook
/// @param url URL que a ser consumida pelo WebHook
/// 
///
/// @return PierPageWebHookResponse*
-(NSNumber*) listarUsingGET34WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    _id: (NSNumber*) _id
    tipoEvento: (NSString*) tipoEvento
    metodo: (NSString*) metodo
    url: (NSString*) url
    completionHandler: (void (^)(PierPageWebHookResponse* output, NSError* error)) handler;


///
///
/// Salvar Webhook
/// Este m\u00C3\u00A9todo permite que seja adicionado um novo webhook
///
/// @param tipoEvento TipoEvento a ser chamado pelo WebHook
/// @param url URL que a ser consumida pelo WebHook
/// 
///
/// @return PierWebHookResponse*
-(NSNumber*) salvarUsingPOST17WithTipoEvento: (NSString*) tipoEvento
    url: (NSString*) url
    completionHandler: (void (^)(PierWebHookResponse* output, NSError* error)) handler;



@end

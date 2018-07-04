#import <Foundation/Foundation.h>
#import "PierRiscoFraudeDetalhadoResponse.h"
#import "PierTipoResolucaoResponse.h"
#import "PierDadosPortadorRequest.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierGlobaltagriscofraudeApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierGlobaltagriscofraudeApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierGlobaltagriscofraudeApi*) sharedAPI;
///
///
/// {{{risco_fraude_resource_consultar}}}
/// {{{risco_fraude_resource_consultar_notes}}}
///
/// @param _id {{{risco_fraude_resource_consultar_param_id_risco_fraude}}}
/// 
///
/// @return PierRiscoFraudeDetalhadoResponse*
-(NSNumber*) consultarUsingGET34WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierRiscoFraudeDetalhadoResponse* output, NSError* error)) handler;


///
///
/// {{{risco_fraude_resource_listar_tipos_resolucao}}}
/// {{{risco_fraude_resource_listar_tipos_resolucao_notes}}}
///
/// @param page P\u00E1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00E7\u00E3o (Default = 50, Max = 50)
/// 
///
/// @return PierTipoResolucaoResponse*
-(NSNumber*) listarTiposResolucaoUsingGETWithPage: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierTipoResolucaoResponse* output, NSError* error)) handler;


///
///
/// {{{risco_fraude_resource_negar}}}
/// {{{risco_fraude_resource_negar_notes}}}
///
/// @param _id {{{risco_fraude_resource_negar_param_id_risco_fraude}}}
/// 
///
/// @return NSObject*
-(NSNumber*) negarUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// {{{risco_fraude_resource_reconhecer}}}
/// {{{risco_fraude_resource_reconhecer_notes}}}
///
/// @param _id {{{risco_fraude_resource_reconhecer_param_id_risco_fraude}}}
/// 
///
/// @return NSObject*
-(NSNumber*) reconhecerUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// {{{risco_fraude_resource_validar_dados_portador}}}
/// {{{risco_fraude_resource_validar_dados_portador_notes}}}
///
/// @param request request
/// 
///
/// @return NSObject*
-(NSNumber*) validarDadosPortadorUsingPOSTWithRequest: (PierDadosPortadorRequest*) request
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;



@end
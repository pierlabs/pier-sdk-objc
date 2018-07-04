#import <Foundation/Foundation.h>
#import "PierPageAnuidadeResponse.h"
#import "PierPageOperadoraResponse.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierGlobaltagservicocontaApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierGlobaltagservicocontaApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierGlobaltagservicocontaApi*) sharedAPI;
///
///
/// {{{conta_resource_ativar_anuidade}}}
/// {{{conta_resource_ativar_anuidade_notes}}}
///
/// @param _id {{{conta_resource_ativar_anuidade_param_id}}}
/// @param idAnuidade {{{anuidade_request_id_anuidade_value}}}
/// @param authorization Authorization
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// @param dDD {{{anuidade_request_d_d_d_value}}}
/// @param celular {{{anuidade_request_celular_value}}}
/// @param idOperadora {{{anuidade_request_id_operadora_value}}}
/// @param idOrigemComercial {{{anuidade_request_id_origem_comercial_value}}}
/// 
///
/// @return NSObject*
-(NSNumber*) ativarAnuidadeUsingPOSTWithId: (NSNumber*) _id
    idAnuidade: (NSNumber*) idAnuidade
    authorization: (NSString*) authorization
    sort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    dDD: (NSString*) dDD
    celular: (NSString*) celular
    idOperadora: (NSNumber*) idOperadora
    idOrigemComercial: (NSNumber*) idOrigemComercial
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// {{{conta_resource_ativar_envio_fatura_email}}}
/// {{{conta_resource_ativar_envio_fatura_email_notes}}}
///
/// @param _id {{{conta_resource_ativar_envio_fatura_email_param_id}}}
/// @param authorization Authorization
/// 
///
/// @return NSObject*
-(NSNumber*) ativarEnvioFaturaEmailUsingPOSTWithId: (NSNumber*) _id
    authorization: (NSString*) authorization
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// {{{conta_resource_desativar_envio_fatura_email}}}
/// {{{conta_resource_desativar_envio_fatura_email_notes}}}
///
/// @param _id {{{conta_resource_desativar_envio_fatura_email_param_id}}}
/// @param authorization Authorization
/// 
///
/// @return NSObject*
-(NSNumber*) desativarEnvioFaturaEmailUsingPOSTWithId: (NSNumber*) _id
    authorization: (NSString*) authorization
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// {{{anuidade_resource_listar_anuidades}}}
/// {{{anuidade_resource_listar_anuidades_notes}}}
///
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// 
///
/// @return PierPageAnuidadeResponse*
-(NSNumber*) listarAnuidadesUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageAnuidadeResponse* output, NSError* error)) handler;


///
///
/// {{{operadora_resource_listar_operadoras_telefonicas}}}
/// {{{operadora_resource_listar_operadoras_telefonicas_notes}}}
///
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// 
///
/// @return PierPageOperadoraResponse*
-(NSNumber*) listarOperadorasTelefonicasUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageOperadoraResponse* output, NSError* error)) handler;



@end
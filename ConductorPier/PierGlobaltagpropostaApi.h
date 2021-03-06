#import <Foundation/Foundation.h>
#import "PierPropostaResponse.h"
#import "PierStatusPropostaUpdate.h"
#import "PierPageStatusPropostaResponse.h"
#import "PierPagePropostaResponse.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierGlobaltagpropostaApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierGlobaltagpropostaApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierGlobaltagpropostaApi*) sharedAPI;
///
///
/// {{{proposta_resource_alterar_status}}}
/// {{{proposta_resource_alterar_status_notes}}}
///
/// @param _id {{{proposta_resource_alterar_status_param_id}}}
/// @param update update
/// 
///
/// @return PierPropostaResponse*
-(NSNumber*) alterarUsingPOSTWithId: (NSNumber*) _id
    update: (PierStatusPropostaUpdate*) update
    completionHandler: (void (^)(PierPropostaResponse* output, NSError* error)) handler;


///
///
/// {{{proposta_resource_consultar}}}
/// {{{proposta_resource_consultar_notes}}}
///
/// @param _id {{{proposta_resource_consultar_param_id}}}
/// 
///
/// @return PierPropostaResponse*
-(NSNumber*) consultarUsingGET35WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierPropostaResponse* output, NSError* error)) handler;


///
///
/// {{{proposta_resource_listar_status}}}
/// {{{proposta_resource_listar_status_notes}}}
///
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// @param status {{{status_proposta_request_status_value}}}
/// @param flagPermiteAlteracao {{{status_proposta_request_flag_permite_alteracao_value}}}
/// 
///
/// @return PierPageStatusPropostaResponse*
-(NSNumber*) listarStatusPropostaUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    status: (NSNumber*) status
    flagPermiteAlteracao: (NSNumber*) flagPermiteAlteracao
    completionHandler: (void (^)(PierPageStatusPropostaResponse* output, NSError* error)) handler;


///
///
/// {{{proposta_resource_listar}}}
/// {{{proposta_resource_listar_notes}}}
///
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// @param status {{{proposta_request_status_value}}}
/// 
///
/// @return PierPagePropostaResponse*
-(NSNumber*) listarUsingGET46WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    status: (NSNumber*) status
    completionHandler: (void (^)(PierPagePropostaResponse* output, NSError* error)) handler;



@end

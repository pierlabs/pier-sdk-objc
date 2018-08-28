#import <Foundation/Foundation.h>
#import "PierCartaoPayAtualizarChaveResponse.h"
#import "PierCartaoPayResponse.h"
#import "PierCartaoPayUpdate.h"
#import "PierCartaoPayConfirmarChaveResponse.h"
#import "PierCartaoPayKeyUpdate.h"
#import "PierCartaoPayDetalheResponse.h"
#import "PierPageCartaoPayResponse.h"
#import "PierCartaoPayCadastroResponse.h"
#import "PierCartaoPayPersist.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierGlobaltagpayApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierGlobaltagpayApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierGlobaltagpayApi*) sharedAPI;
///
///
/// {{{cartao_pay_resource_atualizar_chave}}}
/// {{{cartao_pay_resource_atualizar_chave_notes}}}
///
/// @param deviceId {{{cartao_pay_resource_atualizar_chave_param_device_id}}}
/// @param _id {{{cartao_pay_resource_atualizar_chave_param_id}}}
/// 
///
/// @return PierCartaoPayAtualizarChaveResponse*
-(NSNumber*) atualizarChaveUsingPOSTWithDeviceId: (NSString*) deviceId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(PierCartaoPayAtualizarChaveResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_pay_resource_atualizar}}}
/// {{{cartao_pay_resource_atualizar_notes}}}
///
/// @param deviceId {{{cartao_pay_resource_atualizar_param_device_id}}}
/// @param _id {{{cartao_pay_resource_atualizar_param_id}}}
/// @param update update
/// 
///
/// @return PierCartaoPayResponse*
-(NSNumber*) atualizarUsingPUT1WithDeviceId: (NSString*) deviceId
    _id: (NSNumber*) _id
    update: (PierCartaoPayUpdate*) update
    completionHandler: (void (^)(PierCartaoPayResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_pay_resource_confirma_atualizacao_chave}}}
/// {{{cartao_pay_resource_confirma_atualizacao_chave_notes}}}
///
/// @param deviceId {{{cartao_pay_resource_confirma_atualizacao_chave_param_device_id}}}
/// @param _id {{{cartao_pay_resource_confirma_atualizacao_chave_param_id}}}
/// @param update update
/// 
///
/// @return PierCartaoPayConfirmarChaveResponse*
-(NSNumber*) confirmaAtualizacaoChaveUsingPOSTWithDeviceId: (NSString*) deviceId
    _id: (NSNumber*) _id
    update: (PierCartaoPayKeyUpdate*) update
    completionHandler: (void (^)(PierCartaoPayConfirmarChaveResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_pay_resource_consultar}}}
/// {{{cartao_pay_resource_consultar_notes}}}
///
/// @param deviceId {{{cartao_pay_resource_consultar_param_device_id}}}
/// @param _id {{{cartao_pay_resource_consultar_param_id}}}
/// 
///
/// @return PierCartaoPayDetalheResponse*
-(NSNumber*) consultarUsingGET11WithDeviceId: (NSString*) deviceId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(PierCartaoPayDetalheResponse* output, NSError* error)) handler;


///
///
/// {{{enum_pay_resource_listar_codigos_resposta}}}
/// {{{enum_pay_resource_listar_codigos_resposta_notes}}}
///
/// 
///
/// @return NSArray* /* NSObject */
-(NSNumber*) listarCodigosRespostaUsingGETWithCompletionHandler: 
    (void (^)(NSArray* /* NSObject */ output, NSError* error)) handler;


///
///
/// {{{enum_pay_resource_listar_modos_entrada}}}
/// {{{enum_pay_resource_listar_modos_entrada_notes}}}
///
/// 
///
/// @return NSArray* /* NSObject */
-(NSNumber*) listarModosEntradaUsingGETWithCompletionHandler: 
    (void (^)(NSArray* /* NSObject */ output, NSError* error)) handler;


///
///
/// {{{enum_pay_resource_listar_operacoes}}}
/// {{{enum_pay_resource_listar_operacoes_notes}}}
///
/// 
///
/// @return NSArray* /* NSObject */
-(NSNumber*) listarOperacoesUsingGETWithCompletionHandler: 
    (void (^)(NSArray* /* NSObject */ output, NSError* error)) handler;


///
///
/// {{{enum_pay_resource_listar_tipos_terminais}}}
/// {{{enum_pay_resource_listar_tipos_terminais_notes}}}
///
/// 
///
/// @return NSArray* /* NSObject */
-(NSNumber*) listarTiposTerminaisUsingGETWithCompletionHandler: 
    (void (^)(NSArray* /* NSObject */ output, NSError* error)) handler;


///
///
/// {{{enum_pay_resource_listar_tipos_transacoes}}}
/// {{{enum_pay_resource_listar_tipos_transacoes_notes}}}
///
/// 
///
/// @return NSArray* /* NSObject */
-(NSNumber*) listarTiposTransacoesUsingGETWithCompletionHandler: 
    (void (^)(NSArray* /* NSObject */ output, NSError* error)) handler;


///
///
/// {{{cartao_pay_resource_listar}}}
/// {{{cartao_pay_resource_listar_notes}}}
///
/// @param deviceId {{{cartao_pay_resource_listar_param_device_id}}}
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// @param status {{{cartao_pay_request_status_value}}}
/// @param numeroCartao {{{cartao_pay_request_numero_cartao_value}}}
/// 
///
/// @return PierPageCartaoPayResponse*
-(NSNumber*) listarUsingGET11WithDeviceId: (NSString*) deviceId
    sort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    status: (NSString*) status
    numeroCartao: (NSString*) numeroCartao
    completionHandler: (void (^)(PierPageCartaoPayResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_pay_resource_salvar}}}
/// {{{cartao_pay_resource_salvar_notes}}}
///
/// @param deviceId {{{cartao_pay_resource_salvar_param_device_id}}}
/// @param persist persist
/// 
///
/// @return PierCartaoPayCadastroResponse*
-(NSNumber*) salvarUsingPOST6WithDeviceId: (NSString*) deviceId
    persist: (PierCartaoPayPersist*) persist
    completionHandler: (void (^)(PierCartaoPayCadastroResponse* output, NSError* error)) handler;



@end

#import <Foundation/Foundation.h>
#import "PierAutorizacaoOnUsRequest.h"
#import "PierTransacaoOnUsResponse.h"
#import "PierCancelamentoTransacaoOnUsRequest.h"
#import "PierTransacaoOnUsRequest.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierAutorizacoesApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierAutorizacoesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierAutorizacoesApi*) sharedAPI;
///
///
/// Autoriza transa\u00C3\u00A7\u00C3\u00A3o financeira
/// Este m\u00C3\u00A9todo faz uma autoriza\u00C3\u00A7\u00C3\u00A3o de transa\u00C3\u00A7\u00C3\u00A3o financeira.
///
/// @param autorizacaoOnUsRequest autorizacaoOnUsRequest
/// 
///
/// @return PierTransacaoOnUsResponse*
-(NSNumber*) autorizarUsingPOSTWithAutorizacaoOnUsRequest: (PierAutorizacaoOnUsRequest*) autorizacaoOnUsRequest
    completionHandler: (void (^)(PierTransacaoOnUsResponse* output, NSError* error)) handler;


///
///
/// Cancela transa\u00C3\u00A7\u00C3\u00A3o financeira
/// Este m\u00C3\u00A9todo permite que seja cancelada uma transa\u00C3\u00A7\u00C3\u00A3o.
///
/// @param cancelamentoRequest cancelamentoRequest
/// 
///
/// @return PierTransacaoOnUsResponse*
-(NSNumber*) cancelarUsingPOSTWithCancelamentoRequest: (PierCancelamentoTransacaoOnUsRequest*) cancelamentoRequest
    completionHandler: (void (^)(PierTransacaoOnUsResponse* output, NSError* error)) handler;


///
///
/// Retorna c\u00C3\u00B3digos de processamento de autoriza\u00C3\u00A7\u00C3\u00A3o
/// Este m\u00C3\u00A9todo retorna a lista dos c\u00C3\u00B3digos de processamento para autoriza\u00C3\u00A7\u00C3\u00A3o de transa\u00C3\u00A7\u00C3\u00B5es financeiras.
///
/// 
///
/// @return NSArray* /* NSObject */
-(NSNumber*) listarCodigosProcessamentoAutorizacaoUsingGETWithCompletionHandler: 
    (void (^)(NSArray* /* NSObject */ output, NSError* error)) handler;


///
///
/// Simula planos de pagamento
/// Este m\u00C3\u00A9todo permite que seja simulada um plano de pagamento.
///
/// @param transacoesRequest transacoesRequest
/// 
///
/// @return PierTransacaoOnUsResponse*
-(NSNumber*) simularUsingPOSTWithTransacoesRequest: (PierTransacaoOnUsRequest*) transacoesRequest
    completionHandler: (void (^)(PierTransacaoOnUsResponse* output, NSError* error)) handler;



@end
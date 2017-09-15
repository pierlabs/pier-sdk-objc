#import <Foundation/Foundation.h>
#import "PierPagePlanoParcelamentoResponse.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierFaturaApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierFaturaApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierFaturaApi*) sharedAPI;
///
///
/// Listar planos de parcelamento
/// Lista os planos de parcelamento da fatura de uma conta.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param dataVencimentoPadrao Indica a data de vencimento padr\u00C3\u00A3o das faturas
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPagePlanoParcelamentoResponse*
-(NSNumber*) consultarLancamentosFuturosFaturaUsingGET1WithId: (NSNumber*) _id
    dataVencimentoPadrao: (NSString*) dataVencimentoPadrao
    sort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPagePlanoParcelamentoResponse* output, NSError* error)) handler;



@end

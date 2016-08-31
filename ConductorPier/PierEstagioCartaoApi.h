#import <Foundation/Foundation.h>
#import "PierEstagioCartao.h"
#import "PierPageEstagiosCartoes.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierEstagioCartaoApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierEstagioCartaoApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierEstagioCartaoApi*) sharedAPI;
///
///
/// Apresenta os dados de um determinado Estagio Cart\u00C3\u00A3o 
/// Este m\u00C3\u00A9todo permite consultar os par\u00C3\u00A2metros de um determinado Est\u00C3\u00A1gio de Entrega do Cart\u00C3\u00A3o a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).  
///
/// @param idEstagioCartao C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Est\u00C3\u00A1gio de Entrega do Cart\u00C3\u00A3o (id).
/// 
///
/// @return PierEstagioCartao*
-(NSNumber*) consultarEstagioCartaoUsingGETWithIdEstagioCartao: (NSNumber*) idEstagioCartao
    completionHandler: (void (^)(PierEstagioCartao* output, NSError* error)) handler;


///
///
/// Lista as op\u00C3\u00A7\u00C3\u00B5es de Est\u00C3\u00A1gios do Cart\u00C3\u00A3o 
/// Este m\u00C3\u00A9todo permite que sejam listadas as op\u00C3\u00A7\u00C3\u00B5es de Est\u00C3\u00A1gio de Entrega que podem ser atribu\u00C3\u00ADdas aos Cart\u00C3\u00B5es.
///
/// @param _id Id do est\u00C3\u00A1gio cart\u00C3\u00A3o
/// @param nome Nome do est\u00C3\u00A1gio cart\u00C3\u00A3o
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierPageEstagiosCartoes*
-(NSNumber*) listarEstagiosCartoesUsingGETWithId: (NSNumber*) _id
    nome: (NSString*) nome
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageEstagiosCartoes* output, NSError* error)) handler;



@end

#import <Foundation/Foundation.h>
#import "PierEstGioCartO.h"
#import "PierListaDeStatusCartEs.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierStatusCartoApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierStatusCartoApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierStatusCartoApi*) sharedAPI;
///
///
/// Apresenta os dados de um determinado Status Cart\u00C3\u00A3o 
/// Este m\u00C3\u00A9todo permite consultar os par\u00C3\u00A2metros de um determinado Status de Cart\u00C3\u00A3o a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).  
///
/// @param idStatusCartao C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Est\u00C3\u00A1gio de Entrega do Cart\u00C3\u00A3o (id).
/// 
///
/// @return PierEstGioCartO*
-(NSNumber*) consultarStatusCartaoUsingGETWithIdStatusCartao: (NSNumber*) idStatusCartao
    completionHandler: (void (^)(PierEstGioCartO* output, NSError* error)) handler;


///
///
/// Lista as op\u00C3\u00A7\u00C3\u00B5es de Status do Cart\u00C3\u00A3o 
/// Este m\u00C3\u00A9todo permite que sejam listadas as possibilidades de Status que podem ser atribu\u00C3\u00ADdas aos Cart\u00C3\u00B5es.
///
/// @param idStatusCartao C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Status do Cart\u00C3\u00A3o (id).
/// @param nome Nome atribu\u00C3\u00ADdo ao Status de Entrega do Cart\u00C3\u00A3o.
/// @param idStatusDestinoDesbloqueio Indica qual o idStatusCartao que deve ser atribu\u00C3\u00ADdo a um idCartao quando ele for desbloqueado.
/// @param cancelaConta Indica que Cart\u00C3\u00B5es com este idStatusCartao podem ter a sua conta Cancelada.
/// @param permiteDesbloqueio Indica que Cart\u00C3\u00B5es com este idStatusCartao podem ser Desbloqueados.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierListaDeStatusCartEs*
-(NSNumber*) listarStatusCartoesUsingGETWithIdStatusCartao: (NSNumber*) idStatusCartao
    nome: (NSString*) nome
    idStatusDestinoDesbloqueio: (NSNumber*) idStatusDestinoDesbloqueio
    cancelaConta: (NSString*) cancelaConta
    permiteDesbloqueio: (NSString*) permiteDesbloqueio
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierListaDeStatusCartEs* output, NSError* error)) handler;



@end

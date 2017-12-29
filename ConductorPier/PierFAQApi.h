#import <Foundation/Foundation.h>
#import "PierFaqResponse.h"
#import "PierPageFaqResponse.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierFAQApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierFAQApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierFAQApi*) sharedAPI;
///
///
/// Adiciona uma nova FAQ
/// Adiciona uma nova FAQ
///
/// @param pergunta Conte\u00C3\u00BAdo da pergunta.
/// @param resposta Conte\u00C3\u00BAdo da resposta.
/// @param relevancia N\u00C3\u00ADvel de relev\u00C3\u00A2ncia da pergunta.
/// @param plataforma Plataforma em que a FAQ se encaixa.
/// @param categoria Categoria de assunto do qual a FAQ se trata.
/// @param status Status descrevendo a situa\u00C3\u00A7\u00C3\u00A3o atual da FAQ.
/// 
///
/// @return PierFaqResponse*
-(NSNumber*) adicionarUsingPOSTWithPergunta: (NSString*) pergunta
    resposta: (NSString*) resposta
    relevancia: (NSNumber*) relevancia
    plataforma: (NSString*) plataforma
    categoria: (NSString*) categoria
    status: (NSString*) status
    completionHandler: (void (^)(PierFaqResponse* output, NSError* error)) handler;


///
///
/// Alterar FAQ
/// Alterar FAQ
///
/// @param _id Id
/// @param pergunta Conte\u00C3\u00BAdo da pergunta.
/// @param resposta Conte\u00C3\u00BAdo da resposta.
/// @param relevancia N\u00C3\u00ADvel de relev\u00C3\u00A2ncia da pergunta.
/// @param plataforma Plataforma em que a FAQ se encaixa.
/// @param categoria Categoria de assunto do qual a FAQ se trata.
/// @param status Status descrevendo a situa\u00C3\u00A7\u00C3\u00A3o atual da FAQ.
/// 
///
/// @return PierFaqResponse*
-(NSNumber*) alterarUsingPUT7WithId: (NSNumber*) _id
    pergunta: (NSString*) pergunta
    resposta: (NSString*) resposta
    relevancia: (NSNumber*) relevancia
    plataforma: (NSString*) plataforma
    categoria: (NSString*) categoria
    status: (NSString*) status
    completionHandler: (void (^)(PierFaqResponse* output, NSError* error)) handler;


///
///
/// Consultar FAQ por id
/// Consulta os detalhes de uma determinada FAQ
///
/// @param _id Id
/// 
///
/// @return PierFaqResponse*
-(NSNumber*) consultarUsingGET17WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierFaqResponse* output, NSError* error)) handler;


///
///
/// Lista FAQs
/// Lista todas as FAQs
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param idFaq C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da FAQ (id).
/// @param pergunta Conte\u00C3\u00BAdo da pergunta.
/// @param resposta Conte\u00C3\u00BAdo da resposta.
/// @param relevancia N\u00C3\u00ADvel de relev\u00C3\u00A2ncia da pergunta.
/// @param plataforma Plataforma em que a FAQ se encaixa.
/// @param categoria Categoria de assunto do qual a FAQ se trata.
/// @param status Status descrevendo a situa\u00C3\u00A7\u00C3\u00A3o atual da FAQ.
/// 
///
/// @return PierPageFaqResponse*
-(NSNumber*) listarUsingGET20WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    idFaq: (NSNumber*) idFaq
    pergunta: (NSString*) pergunta
    resposta: (NSString*) resposta
    relevancia: (NSNumber*) relevancia
    plataforma: (NSString*) plataforma
    categoria: (NSString*) categoria
    status: (NSString*) status
    completionHandler: (void (^)(PierPageFaqResponse* output, NSError* error)) handler;



@end

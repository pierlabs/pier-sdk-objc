#import <Foundation/Foundation.h>
#import "PierOrigemComercial.h"
#import "PierListaOrigensComerciais.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierPessoaApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierPessoaApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierPessoaApi*) sharedAPI;
///
///
/// Opera\u00C3\u00A7\u00C3\u00A3o utilizada para consultar uma determinada Origem Comercial 
/// Este m\u00C3\u00A9todo permite que sejam listados os registros de uma determinada Origem Comercial existente na base do emissor. Para isso, \u00C3\u00A9 preciso informar o seu respectivo c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id). 
///
/// @param idOrigemComercial ID da Origem Comercial
/// 
///
/// @return PierOrigemComercial*
-(NSNumber*) consultarUsingGET1WithIdOrigemComercial: (NSNumber*) idOrigemComercial
    completionHandler: (void (^)(PierOrigemComercial* output, NSError* error)) handler;


///
///
/// Lista as Pessoas cadastradas no Emissor
/// Este m\u00C3\u00A9todo permite que sejam listadas as Pessoas existentes na base de dados do Emissor.
///
/// @param idPessoa C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Pessoa (id).
/// @param nome Apresenta o &#39;Nome Completo da PF&#39; ou o &#39;Nome Completo da Raz\u00C3\u00A3o Social (Nome Empresarial)&#39;.
/// @param tipo C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do tipo da Pessoa, sendo: (\&quot;PF\&quot;: Pessoa F\u00C3\u00ADsica), (\&quot;PJ\&quot;: Pessoa Jur\u00C3\u00ADdica).
/// @param cpf N\u00C3\u00BAmero do CPF, quando PF.
/// @param cnpj N\u00C3\u00BAmero do CNPJ, quando PJ.
/// @param dataNascimento Data de Nascimento da Pessoa, quando PF, ou a Data de Abertura da Empresa, quando PJ.
/// @param cnpj2 N\u00C3\u00BAmero do CNPJ, quando PJ.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierListaOrigensComerciais*
-(NSNumber*) listarUsingGET1WithIdPessoa: (NSNumber*) idPessoa
    nome: (NSString*) nome
    tipo: (NSString*) tipo
    cpf: (NSString*) cpf
    cnpj: (NSString*) cnpj
    dataNascimento: (NSDate*) dataNascimento
    cnpj2: (NSString*) cnpj2
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierListaOrigensComerciais* output, NSError* error)) handler;



@end

#import <Foundation/Foundation.h>
#import "PierOrigemComercial.h"
#import "PierListaDeCartEs.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierCartoApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierCartoApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierCartoApi*) sharedAPI;
///
///
/// Apresenta os dados de um determinado Cart\u00C3\u00A3o
/// Este m\u00C3\u00A9todo permite consultar as informa\u00C3\u00A7\u00C3\u00B5es b\u00C3\u00A1sicas de um determinado Cart\u00C3\u00A3o a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param idCartao C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Cart\u00C3\u00A3o (id).
/// 
///
/// @return PierOrigemComercial*
-(NSNumber*) consultarUsingGETWithIdCartao: (NSNumber*) idCartao
    completionHandler: (void (^)(PierOrigemComercial* output, NSError* error)) handler;


///
///
/// Lista os Cart\u00C3\u00B5es gerados pelo Emissor
/// Este m\u00C3\u00A9todo permite que sejam listados os cart\u00C3\u00B5es existentes na base do emissor.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Cart\u00C3\u00A3o (id).
/// @param idStatusCartao C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Status do Cart\u00C3\u00A3o (id).
/// @param idEstagioCartao C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Est\u00C3\u00A1gio de Impress\u00C3\u00A3o do Cart\u00C3\u00A3o (id).
/// @param idConta C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Conta a qual o cart\u00C3\u00A3o pertence (id).
/// @param idPessoa C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Pessoa a qual o cart\u00C3\u00A3o pertence (id)
/// @param idProduto C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Produto a qual o cart\u00C3\u00A3o pertence (id).
/// @param portador Indica qual \u00C3\u00A9 a rela\u00C3\u00A7\u00C3\u00A3o do portador do cart\u00C3\u00A3o com a conta. Quando &#39;1&#39;, corresponde ao seu titular. Quando diferente disso, corresponde a um cart\u00C3\u00A3o adicional.
/// @param numeroCartao Apresenta o n\u00C3\u00BAmero do cart\u00C3\u00A3o.
/// @param nomeImpresso Apresenta o nome impresso no cart\u00C3\u00A3o.
/// @param dataGeracao Apresenta a data em que o cart\u00C3\u00A3o foi gerado.
/// @param dataStatusCartao Apresenta a data em que o idStatusCartao atual do cart\u00C3\u00A3o fora aplicado, quando houver.
/// @param dataEstagioCartao Apresenta a data em que o idEstagioCartao atual do cart\u00C3\u00A3o fora aplicado, quando houver.
/// @param dataValidade Apresenta a data de validade do cart\u00C3\u00A3o em formato MMAAAA, quando houver.
/// @param dataImpressao Apresenta a data em que o cart\u00C3\u00A3o fora impresso, caso impress\u00C3\u00A3o em loja, ou a data em que ele fora inclu\u00C3\u00ADdo no arquivo para impress\u00C3\u00A3o via gr\u00C3\u00A1fica.
/// @param arquivoImpressao Apresenta o nome do arquivo onde o cart\u00C3\u00A3o fora inclu\u00C3\u00ADdo para impress\u00C3\u00A3o por uma gr\u00C3\u00A1fica, quando houver.
/// @param flagImpressaoOrigemComercial Quando ativa, indica que o cart\u00C3\u00A3o fora impresso na Origem Comercial.
/// @param flagProvisorio Quando ativa, indica que o cart\u00C3\u00A3o \u00C3\u00A9 provis\u00C3\u00B3rio. Ou seja, \u00C3\u00A9 um cart\u00C3\u00A3o para uso tempor\u00C3\u00A1rio quando se deseja permitir que o cliente transacione sem que ele tenha recebido um cart\u00C3\u00A3o definitivo.
/// @param codigoDesbloqueio Apresenta um c\u00C3\u00B3digo espec\u00C3\u00ADfico para ser utilizado como vari\u00C3\u00A1vel no processo de desbloqueio do cart\u00C3\u00A3o para emissores que querem usar esta funcionalidade.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierListaDeCartEs*
-(NSNumber*) listarUsingGETWithId: (NSNumber*) _id
    idStatusCartao: (NSNumber*) idStatusCartao
    idEstagioCartao: (NSNumber*) idEstagioCartao
    idConta: (NSNumber*) idConta
    idPessoa: (NSNumber*) idPessoa
    idProduto: (NSNumber*) idProduto
    portador: (NSNumber*) portador
    numeroCartao: (NSString*) numeroCartao
    nomeImpresso: (NSString*) nomeImpresso
    dataGeracao: (NSDate*) dataGeracao
    dataStatusCartao: (NSDate*) dataStatusCartao
    dataEstagioCartao: (NSDate*) dataEstagioCartao
    dataValidade: (NSString*) dataValidade
    dataImpressao: (NSDate*) dataImpressao
    arquivoImpressao: (NSString*) arquivoImpressao
    flagImpressaoOrigemComercial: (NSNumber*) flagImpressaoOrigemComercial
    flagProvisorio: (NSNumber*) flagProvisorio
    codigoDesbloqueio: (NSString*) codigoDesbloqueio
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierListaDeCartEs* output, NSError* error)) handler;



@end

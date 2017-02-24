#import <Foundation/Foundation.h>
#import "PierConta.h"
#import "PierDividaClienteResponse.h"
#import "PierFaturaResponse.h"
#import "PierLimiteDisponibilidade.h"
#import "PierPageTransferencias.h"
#import "PierCartaoImpressao.h"
#import "PierPageFaturas.h"
#import "PierPageTransacaoResponse.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierContaApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierContaApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierContaApi*) sharedAPI;
///
///
/// Alterar limite
/// Esse recurso permite realizar a altera\u00C3\u00A7\u00C3\u00A3o dos Limites de uma determinada Conta.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param limiteGlobal Apresenta o valor do limite de cr\u00C3\u00A9dito que o portador do cart\u00C3\u00A3o possui.
/// @param limiteCompra Quando utilizado pelo emissor, este campo apresenta o valor do limite de cr\u00C3\u00A9dito que o portador possui para uso exclusivo em Compras Nacionais.
/// @param limiteParcelado Quando utilizado pelo emissor, este campo apresenta o valor do limite de cr\u00C3\u00A9dito que o portador possui para realizar transa\u00C3\u00A7\u00C3\u00B5es de compras parceladas.
/// @param limiteParcelas Quando utilizado pelo emissor, este campo apresenta o valor do limite de cr\u00C3\u00A9dito que portador pode acumular a partir da soma das parcelas das compras que forem realizadas nesta modalidade.
/// @param limiteSaqueGlobal Quando utilizado pelo emissor, este campo apresenta o valor do limite de cr\u00C3\u00A9dito que o portador pode utilizar para realizar transa\u00C3\u00A7\u00C3\u00B5es de Saque Nacional.
/// @param limiteSaquePeriodo Quando utilizado pelo emissor, este campo apresenta o valor do limite de cr\u00C3\u00A9dito que o portador pode utilizar para realizar transa\u00C3\u00A7\u00C3\u00B5es de Saque Nacional dentro de cada ciclo de faturamento.
/// @param limiteConsignado Quando utilizado pelo emissor, este campo apresenta o valor da margem de cr\u00C3\u00A9dito que ele poder\u00C3\u00A1 utilizar para ser cobrado de forma consignada (desconto em folha) em seu sal\u00C3\u00A1rio/vencimentos.
/// @param limiteInternacionalCompra Quando utilizado pelo emissor, este campo apresenta o valor do limite de cr\u00C3\u00A9dito que o portador possui para uso exclusivo em Compras Internacionais.
/// @param limiteInternacionalParcelado Quando utilizado pelo emissor, este campo apresenta o valor do limite de cr\u00C3\u00A9dito que o portador possui para realizar transa\u00C3\u00A7\u00C3\u00B5es Internacionais de Compras Parceladas.
/// @param limiteInternacionalParcelas Quando utilizado pelo emissor, este campo apresenta o valor do limite de cr\u00C3\u00A9dito que portador pode acumular a partir da soma das parcelas das compras internacionais que forem realizadas nesta modalidade.
/// @param limiteInternacionalSaqueGlobal Quando utilizado pelo emissor, este campo apresenta o valor do limite de cr\u00C3\u00A9dito que o portador pode utilizar para realizar transa\u00C3\u00A7\u00C3\u00B5es de Saque Internacional.
/// @param limiteInternacionalSaquePeriodo Quando utilizado pelo emissor, este campo apresenta o valor do limite de cr\u00C3\u00A9dito que o portador pode utilizar para realizar transa\u00C3\u00A7\u00C3\u00B5es de Saque Internacional dentro de cada ciclo de faturamento.
/// 
///
/// @return PierConta*
-(NSNumber*) alterarLimiteUsingPUTWithId: (NSNumber*) _id
    limiteGlobal: (NSNumber*) limiteGlobal
    limiteCompra: (NSNumber*) limiteCompra
    limiteParcelado: (NSNumber*) limiteParcelado
    limiteParcelas: (NSNumber*) limiteParcelas
    limiteSaqueGlobal: (NSNumber*) limiteSaqueGlobal
    limiteSaquePeriodo: (NSNumber*) limiteSaquePeriodo
    limiteConsignado: (NSNumber*) limiteConsignado
    limiteInternacionalCompra: (NSNumber*) limiteInternacionalCompra
    limiteInternacionalParcelado: (NSNumber*) limiteInternacionalParcelado
    limiteInternacionalParcelas: (NSNumber*) limiteInternacionalParcelas
    limiteInternacionalSaqueGlobal: (NSNumber*) limiteInternacionalSaqueGlobal
    limiteInternacionalSaquePeriodo: (NSNumber*) limiteInternacionalSaquePeriodo
    completionHandler: (void (^)(PierConta* output, NSError* error)) handler;


///
///
/// Alterar vencimento
/// Esse recurso permite alterar o vencimento de uma conta especifica.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param novoDiaVencimento Novo dia de vencimento.
/// 
///
/// @return PierConta*
-(NSNumber*) alterarVencimentoUsingPUTWithId: (NSNumber*) _id
    novoDiaVencimento: (NSNumber*) novoDiaVencimento
    completionHandler: (void (^)(PierConta* output, NSError* error)) handler;


///
///
/// Consultar a d\u00C3\u00ADvida atualizada do cliente
/// Este recurso consulta a d\u00C3\u00ADvida atualizada do cliente
///
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// @param idConta C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da conta (id)
/// @param dataVencimento Data do vencimento
/// @param idEscritorioCobranca C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do escrit\u00C3\u00B3rio de cobran\u00C3\u00A7a
/// 
///
/// @return PierDividaClienteResponse*
-(NSNumber*) consultarDividaAtualizadaClienteUsingGETWithPage: (NSNumber*) page
    limit: (NSNumber*) limit
    idConta: (NSNumber*) idConta
    dataVencimento: (NSDate*) dataVencimento
    idEscritorioCobranca: (NSNumber*) idEscritorioCobranca
    completionHandler: (void (^)(PierDividaClienteResponse* output, NSError* error)) handler;


///
///
/// Apresenta dados de uma determinada fatura consignada
/// Atrav\u00C3\u00A9s desta opera\u00C3\u00A7\u00C3\u00A3o os Emissores ou Portadores poder\u00C3\u00A3o consultar uma fatura, atrav\u00C3\u00A9s do id da conta e o id da fatura.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param idHistorico C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da fatura (idHistorico).
/// 
///
/// @return PierFaturaResponse*
-(NSNumber*) consultarFaturaConsignadaUsingGETWithId: (NSNumber*) _id
    idHistorico: (NSNumber*) idHistorico
    completionHandler: (void (^)(PierFaturaResponse* output, NSError* error)) handler;


///
///
/// Apresenta os limites da conta
/// Este m\u00C3\u00A9todo permite consultar os Limites configurados para uma determinada Conta, a partir do c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Cart\u00C3\u00A3o (id).
/// 
///
/// @return PierLimiteDisponibilidade*
-(NSNumber*) consultarLimiteDisponibilidadeUsingGET1WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierLimiteDisponibilidade* output, NSError* error)) handler;


///
///
/// Consulta os detalhes de uma determinada transfer\u00C3\u00AAncia
/// Este m\u00C3\u00A9todo permite consultar os detalhes de uma determinada transfer\u00C3\u00AAncia de cr\u00C3\u00A9dito realizada entre contas.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param idTransferencia C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da transfer\u00C3\u00AAncia (id_transferencia).
/// 
///
/// @return PierPageTransferencias*
-(NSNumber*) consultarUsingGET15WithId: (NSNumber*) _id
    idTransferencia: (NSNumber*) idTransferencia
    completionHandler: (void (^)(PierPageTransferencias* output, NSError* error)) handler;


///
///
/// Apresenta dados de uma determinada conta
/// Este m\u00C3\u00A9todo permite consultar dados de uma determinada conta a partir de seu codigo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// 
///
/// @return PierConta*
-(NSNumber*) consultarUsingGET3WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierConta* output, NSError* error)) handler;


///
///
/// Realiza a gera\u00C3\u00A7\u00C3\u00A3o de um novo cart\u00C3\u00A3o para impress\u00C3\u00A3o avulsa
/// Este recurso permite que seja gerado um novo Cart\u00C3\u00A3o para um determinado Portador que esteja vinculado a uma Conta. Para isso, ser\u00C3\u00A1 preciso informar o c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da Conta (id), o idPessoa do Portador e o idTipoPlastico do Cart\u00C3\u00A3o que dever\u00C3\u00A1 ser gerado para impress\u00C3\u00A3o. Esta funcionalidade poder\u00C3\u00A1 ser utilizada para realizar a impress\u00C3\u00A3o de cart\u00C3\u00B5es em Lojas, Quiosques, Escrit\u00C3\u00B3rios, Terminais de Auto Atendimento, ou outro local que o Emissor escolher, desde que se possua uma impressora de Cart\u00C3\u00B5es habilidade para o fazer, no local.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param idPessoa C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da pessoa (id).
/// @param idTipoPlastico C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do TipoPlastico (id).
/// 
///
/// @return PierCartaoImpressao*
-(NSNumber*) gerarCartaoUsingPOSTWithId: (NSNumber*) _id
    idPessoa: (NSNumber*) idPessoa
    idTipoPlastico: (NSNumber*) idTipoPlastico
    completionHandler: (void (^)(PierCartaoImpressao* output, NSError* error)) handler;


///
///
/// Listar Faturas consignadas da Conta
/// Atrav\u00C3\u00A9s desta opera\u00C3\u00A7\u00C3\u00A3o os Emissores ou Portadores poder\u00C3\u00A3o consultar todo o Hist\u00C3\u00B3rico de Faturas vinculados a uma determinada Conta, independentemente do valor delas.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// @param dataVencimeno Apresenta a data de vencimento da fatura.
/// 
///
/// @return PierPageFaturas*
-(NSNumber*) listarFaturasConsignadasUsingGETWithId: (NSNumber*) _id
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    dataVencimeno: (NSDate*) dataVencimeno
    completionHandler: (void (^)(PierPageFaturas* output, NSError* error)) handler;


///
///
/// Listar Faturas da Conta
/// Atrav\u00C3\u00A9s desta opera\u00C3\u00A7\u00C3\u00A3o os Emissores ou Portadores poder\u00C3\u00A3o consultar todo o Hist\u00C3\u00B3rico de Faturas vinculados a uma determinada Conta, independentemente do valor delas.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// @param dataVencimento Data de Vencimento da Fatura.
/// 
///
/// @return PierPageFaturas*
-(NSNumber*) listarFaturasUsingGETWithId: (NSNumber*) _id
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    dataVencimento: (NSDate*) dataVencimento
    completionHandler: (void (^)(PierPageFaturas* output, NSError* error)) handler;


///
///
/// Lista as transfer\u00C3\u00AAncias realizadas pela conta
/// Este m\u00C3\u00A9todo permite que sejam listadas as transfer\u00C3\u00AAncias realizadas pela conta existentes na base do emissor.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// @param idTransferencia C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da transfer\u00C3\u00AAncia (id).
/// @param idContaOrigem C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta em que o valor ser\u00C3\u00A1 debitado para a transfer\u00C3\u00AAncia. (id).
/// @param idContaDestino C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta em que o valor ser\u00C3\u00A1 creditado para a transfer\u00C3\u00AAncia. (id).
/// @param valorTransferencia Valor estabelecido para ser transferido.
/// @param dataTransferencia Data estabelecida para ocorrer a transfer\u00C3\u00AAncia.
/// 
///
/// @return PierPageTransferencias*
-(NSNumber*) listarUsingGET15WithId: (NSNumber*) _id
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    idTransferencia: (NSNumber*) idTransferencia
    idContaOrigem: (NSNumber*) idContaOrigem
    idContaDestino: (NSNumber*) idContaDestino
    valorTransferencia: (NSNumber*) valorTransferencia
    dataTransferencia: (NSDate*) dataTransferencia
    completionHandler: (void (^)(PierPageTransferencias* output, NSError* error)) handler;


///
///
/// Lista contas existentes na base de dados do Emissor
/// Este recurso permite listar contas existentes na base de dados do Emissor.
///
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o de conta (id).
/// @param idProduto C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do produto ao qual a conta faz parte. (id).
/// @param idOrigemComercial C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Origem Comercial (id) que deu origem a Conta.
/// @param idPessoa C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Pessoa Titular da Conta (id).
/// @param idStatusConta C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Produto a qual o cart\u00C3\u00A3o pertence (id).
/// @param diaVencimento Apresenta o dia de vencimento.
/// @param melhorDiaCompra Apresenta o melhor dia de compra.
/// @param dataStatusConta Apresenta a data em que o idStatusConta atual fora atribu\u00C3\u00ADdo para ela.
/// @param dataCadastro Apresenta a data em que o cart\u00C3\u00A3o foi gerado.
/// @param dataUltimaAlteracaoVencimento Apresenta a data da ultima altera\u00C3\u00A7\u00C3\u00A3o de vencimento.
/// 
///
/// @return PierConta*
-(NSNumber*) listarUsingGET3WithPage: (NSNumber*) page
    limit: (NSNumber*) limit
    _id: (NSNumber*) _id
    idProduto: (NSNumber*) idProduto
    idOrigemComercial: (NSNumber*) idOrigemComercial
    idPessoa: (NSNumber*) idPessoa
    idStatusConta: (NSNumber*) idStatusConta
    diaVencimento: (NSNumber*) diaVencimento
    melhorDiaCompra: (NSNumber*) melhorDiaCompra
    dataStatusConta: (NSDate*) dataStatusConta
    dataCadastro: (NSDate*) dataCadastro
    dataUltimaAlteracaoVencimento: (NSDate*) dataUltimaAlteracaoVencimento
    completionHandler: (void (^)(PierConta* output, NSError* error)) handler;


///
///
/// Permite listar uma linha do tempo com os eventos da conta
/// Esta opera\u00C3\u00A7\u00C3\u00A3o tem como objetivo permitir a listagem, em formato de timeline, dos eventos vinculados a uma detemrinada conta. Transa\u00C3\u00A7\u00C3\u00B5es, fechamento da fatura, pagamentos, gera\u00C3\u00A7\u00C3\u00A3o de cart\u00C3\u00B5es e altera\u00C3\u00A7\u00C3\u00A3o de limite s\u00C3\u00A3o exemplos de eventos contemplados por esta funcionalidade. Neste m\u00C3\u00A9todo, as opera\u00C3\u00A7\u00C3\u00B5es s\u00C3\u00A3o ordenadas de forma decrescente.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierPageTransacaoResponse*
-(NSNumber*) transacoesUsingGETWithId: (NSNumber*) _id
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageTransacaoResponse* output, NSError* error)) handler;


///
///
/// Realiza uma transfer\u00C3\u00AAncia de Cr\u00C3\u00A9dito para outro cliente do mesmo Emissor
/// Este m\u00C3\u00A9todo permite que um portador de um cart\u00C3\u00A3o possa realizar auma transfer\u00C3\u00AAncia de cr\u00C3\u00A9dito para outro cliente do mesmo emissor.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do cliente portador do cart\u00C3\u00A3o que ser\u00C3\u00A1 debitado (id).
/// @param idContaDestino C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do cliente portador do cart\u00C3\u00A3o que ser\u00C3\u00A1 creditado (id).
/// @param valorTransferencia Valor da Transfer\u00C3\u00AAncia.
/// 
///
/// @return PierPageTransferencias*
-(NSNumber*) transferirUsingPOSTWithId: (NSNumber*) _id
    idContaDestino: (NSNumber*) idContaDestino
    valorTransferencia: (NSNumber*) valorTransferencia
    completionHandler: (void (^)(PierPageTransferencias* output, NSError* error)) handler;



@end

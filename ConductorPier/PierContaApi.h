#import <Foundation/Foundation.h>
#import "PierAjusteResponse.h"
#import "PierLimiteDisponibilidade.h"
#import "PierConta.h"
#import "PierBoletoDeFatura.h"
#import "PierDividaClienteResponse.h"
#import "PierDetalhesFaturaConsignadaResponse.h"
#import "PierFaturaConsignadaDetalheResponse.h"
#import "PierDetalhesFaturaResponse.h"
#import "PierLinkTransferenciaBancariaResponse_.h"
#import "PierPageTransferencias.h"
#import "PierCartaoImpressao.h"
#import "PierPageFaturasConsignadas.h"
#import "PierPageFaturas.h"
#import "PierPageHistoricoEventos.h"
#import "PierLinkPageHistoricoAssessoriaResponse_.h"
#import "PierPageHistoricoAtraso.h"
#import "PierPageTransacoesCorrentes.h"
#import "PierLinkPageTransferenciaBancariaResponse_.h"
#import "PierPageContas.h"
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
/// Lan\u00C3\u00A7a um ajuste para a conta do id informado
/// Este recurso insere um ajuste para a conta do id informado
///
/// @param _id Id Conta
/// @param idTipoAjuste C\u00C3\u00B3digo identificador do tipo de ajuste.
/// @param dataAjuste Data do ajuste.
/// @param valorAjuste Valor do ajuste
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierAjusteResponse*
-(NSNumber*) ajustarContaUsingPOSTWithId: (NSNumber*) _id
    idTipoAjuste: (NSNumber*) idTipoAjuste
    dataAjuste: (NSDate*) dataAjuste
    valorAjuste: (NSNumber*) valorAjuste
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierAjusteResponse* output, NSError* error)) handler;


///
///
/// Realiza a altera\u00C3\u00A7\u00C3\u00A3o dos limites da conta
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
/// @return PierLimiteDisponibilidade*
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
    completionHandler: (void (^)(PierLimiteDisponibilidade* output, NSError* error)) handler;


///
///
/// Realiza a altera\u00C3\u00A7\u00C3\u00A3o do dia de vencimento das faturas da conta
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
///  Ativa o servi\u00C3\u00A7o de envio de fatura por email
/// Este recurso ativa o servi\u00C3\u00A7o de envio de fatura por email
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// 
///
/// @return NSObject*
-(NSNumber*) ativarEnvioFaturaEmailUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// Consulta os dados de um determinado boleto da fatura
/// Este recurso consulta um boleto da fatura
///
/// @param _id Id Conta
/// 
///
/// @return PierBoletoDeFatura*
-(NSNumber*) consultarBoletoEmitidoUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierBoletoDeFatura* output, NSError* error)) handler;


///
///
/// Consulta a d\u00C3\u00ADvida atualizada do cliente
/// Este recurso consulta a d\u00C3\u00ADvida atualizada do cliente
///
/// @param _id Id Conta
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// @param dataVencimento Data do vencimento
/// @param idEscritorioCobranca C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do escrit\u00C3\u00B3rio de cobran\u00C3\u00A7a
/// 
///
/// @return PierDividaClienteResponse*
-(NSNumber*) consultarDividaAtualizadaClienteUsingGETWithId: (NSNumber*) _id
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    dataVencimento: (NSDate*) dataVencimento
    idEscritorioCobranca: (NSNumber*) idEscritorioCobranca
    completionHandler: (void (^)(PierDividaClienteResponse* output, NSError* error)) handler;


///
///
/// Consultar a fatura consignadas abertas da conta
/// Atrav\u00C3\u00A9s desta opera\u00C3\u00A7\u00C3\u00A3o os Emissores ou Portadores poder\u00C3\u00A3o consultar a fatura consignada em aberto
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param dataVencimento Data Vencimento.
/// 
///
/// @return PierDetalhesFaturaConsignadaResponse*
-(NSNumber*) consultarFaturaConsignadaAbertaUsingGETWithId: (NSNumber*) _id
    dataVencimento: (NSDate*) dataVencimento
    completionHandler: (void (^)(PierDetalhesFaturaConsignadaResponse* output, NSError* error)) handler;


///
///
/// Apresenta dados de uma determinada fatura consignada
/// Atrav\u00C3\u00A9s desta opera\u00C3\u00A7\u00C3\u00A3o os Emissores ou Portadores poder\u00C3\u00A3o consultar uma fatura, atrav\u00C3\u00A9s do id da conta e o id da fatura.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param idFatura C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da fatura (id_fatura).
/// 
///
/// @return PierFaturaConsignadaDetalheResponse*
-(NSNumber*) consultarFaturaConsignadaUsingGETWithId: (NSNumber*) _id
    idFatura: (NSNumber*) idFatura
    completionHandler: (void (^)(PierFaturaConsignadaDetalheResponse* output, NSError* error)) handler;


///
///
/// Consultar Fatura da Conta
/// Atrav\u00C3\u00A9s desta opera\u00C3\u00A7\u00C3\u00A3o os Emissores ou Portadores poder\u00C3\u00A3o consultar os detalhes de uma fatura vinculados a uma determinada conta.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param dataVencimento Data Vencimento.
/// 
///
/// @return PierDetalhesFaturaResponse*
-(NSNumber*) consultarFaturaUsingGETWithId: (NSNumber*) _id
    dataVencimento: (NSDate*) dataVencimento
    completionHandler: (void (^)(PierDetalhesFaturaResponse* output, NSError* error)) handler;


///
///
/// Consultar Lan\u00C3\u00A7amentos Futuros da Fatura de uma Conta
/// Atrav\u00C3\u00A9s desta opera\u00C3\u00A7\u00C3\u00A3o os Emissores ou Portadores poder\u00C3\u00A3o consultar os detalhes dos lan\u00C3\u00A7amentos futuros de uma fatura vinculados a uma determinada conta.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param dataVencimento Data Vencimento.
/// 
///
/// @return PierDetalhesFaturaResponse*
-(NSNumber*) consultarLancamentosFuturosFaturaUsingGETWithId: (NSNumber*) _id
    dataVencimento: (NSDate*) dataVencimento
    completionHandler: (void (^)(PierDetalhesFaturaResponse* output, NSError* error)) handler;


///
///
/// Apresenta os limites da conta
/// Este m\u00C3\u00A9todo permite consultar os Limites configurados para uma determinada Conta, a partir do c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
///
/// @param _id Id Conta
/// 
///
/// @return PierLimiteDisponibilidade*
-(NSNumber*) consultarLimiteDisponibilidadeUsingGET1WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierLimiteDisponibilidade* output, NSError* error)) handler;


///
///
/// Consultar uma transfer\u00C3\u00AAncia banc\u00C3\u00A1ria
/// Este recurso permite consultar os detalhes de uma determinada transfer\u00C3\u00AAncia de cr\u00C3\u00A9dito realizada entre contas. De modo geral, esta opera\u00C3\u00A7\u00C3\u00A3o poder\u00C3\u00A1 ser utilizada para uma consulta simples destes detalhes ou para realizar a montagem de um comprovante de 2\u00C2\u00AA via de transfer\u00C3\u00AAncia entre contas.
///
/// @param _id Id Conta
/// @param idTransferencia Id Transfer\u00C3\u00AAncia
/// @param idContaBancariaDestino C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta banc\u00C3\u00A1ria de destino (id)
/// 
///
/// @return PierLinkTransferenciaBancariaResponse_*
-(NSNumber*) consultarUsingGET20WithId: (NSNumber*) _id
    idTransferencia: (NSNumber*) idTransferencia
    idContaBancariaDestino: (NSNumber*) idContaBancariaDestino
    completionHandler: (void (^)(PierLinkTransferenciaBancariaResponse_* output, NSError* error)) handler;


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
-(NSNumber*) consultarUsingGET21WithId: (NSNumber*) _id
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
/// Desativa o servi\u00C3\u00A7o de envio de fatura por email
/// Este recurso desativa o servi\u00C3\u00A7o de envio de fatura por email
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// 
///
/// @return NSObject*
-(NSNumber*) desativarEnvioFaturaEmailUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// Gera um boleto de recarga
/// Este recurso gera um boleto de recarga
///
/// @param _id Id Conta
/// @param valor 
/// @param dataVencimento 
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierBoletoDeFatura*
-(NSNumber*) gerarBoletoRecargaUsingPOSTWithId: (NSNumber*) _id
    valor: (NSNumber*) valor
    dataVencimento: (NSDate*) dataVencimento
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierBoletoDeFatura* output, NSError* error)) handler;


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
/// Lista as faturas consignadas da conta
/// Atrav\u00C3\u00A9s desta opera\u00C3\u00A7\u00C3\u00A3o os Emissores ou Portadores poder\u00C3\u00A3o consultar todo o Hist\u00C3\u00B3rico de Faturas vinculados a uma determinada Conta, independentemente do valor delas.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// @param dataVencimento Apresenta a data de vencimento da fatura.
/// 
///
/// @return PierPageFaturasConsignadas*
-(NSNumber*) listarFaturasConsignadasUsingGETWithId: (NSNumber*) _id
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    dataVencimento: (NSDate*) dataVencimento
    completionHandler: (void (^)(PierPageFaturasConsignadas* output, NSError* error)) handler;


///
///
/// Lista as faturas da conta
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
/// Lista o hist\u00C3\u00B3rico de altera\u00C3\u00A7\u00C3\u00B5es de limites da conta
/// Este recurso consulta o hist\u00C3\u00B3rico com as altera\u00C3\u00A7\u00C3\u00B5es de limites da conta informada
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierPageHistoricoEventos*
-(NSNumber*) listarHistoricoAlteracoesLimitesUsingGETWithId: (NSNumber*) _id
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageHistoricoEventos* output, NSError* error)) handler;


///
///
/// Lista o hist\u00C3\u00B3rico de entradas/sa\u00C3\u00ADdas de assessorias de cobran\u00C3\u00A7a
/// Permite listar todos os registros de entrada e sa\u00C3\u00ADda da Conta em arquivos de integra\u00C3\u00A7\u00C3\u00A3o com empresas de assessorias de cobran\u00C3\u00A7a a partir do c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta (idConta).
///
/// @param _id Id Conta
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierLinkPageHistoricoAssessoriaResponse_*
-(NSNumber*) listarHistoricoAssessoriaUsingGETWithId: (NSNumber*) _id
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierLinkPageHistoricoAssessoriaResponse_* output, NSError* error)) handler;


///
///
/// Lista o historico de atrasos das faturas
/// Este recurso lista o hist\u00C3\u00B3rico do pagamento de faturas em atraso
///
/// @param _id Id Conta
/// 
///
/// @return PierPageHistoricoAtraso*
-(NSNumber*) listarHistoricoAtrasosFaturasUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierPageHistoricoAtraso* output, NSError* error)) handler;


///
///
/// Lista as transa\u00C3\u00A7\u00C3\u00B5es n\u00C3\u00A3o processadas da conta
/// Este m\u00C3\u00A9todo permite que sejam listadas todas as transa\u00C3\u00A7\u00C3\u00B5es n\u00C3\u00A3o processadas da Conta.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierPageTransacoesCorrentes*
-(NSNumber*) listarNaoProcessadasUsingGETWithId: (NSNumber*) _id
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageTransacoesCorrentes* output, NSError* error)) handler;


///
///
/// Lista as transa\u00C3\u00A7\u00C3\u00B5es processadas da conta
/// Este m\u00C3\u00A9todo permite que sejam listadas todas as transa\u00C3\u00A7\u00C3\u00B5es processadas da Conta.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da conta (id).
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// @param dataVencimento Data de vencimento do extrato no formato yyyy-MM-dd.
/// 
///
/// @return PierPageTransacoesCorrentes*
-(NSNumber*) listarProcessadasUsingGETWithId: (NSNumber*) _id
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    dataVencimento: (NSDate*) dataVencimento
    completionHandler: (void (^)(PierPageTransacoesCorrentes* output, NSError* error)) handler;


///
///
/// Listar as transfer\u00C3\u00AAncias banc\u00C3\u00A1rias realizadas
/// Este recurso tem como objetivo permitir que o portador de um Cart\u00C3\u00A3o possa consultar uma lista das Transfer\u00C3\u00AAncias Banc\u00C3\u00A1rias para os Favorecidos cadastrados.
///
/// @param _id Id Conta
/// @param idContaBancariaDestino C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da conta banc\u00C3\u00A1ria de destino (id)
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// 
///
/// @return PierLinkPageTransferenciaBancariaResponse_*
-(NSNumber*) listarUsingGET19WithId: (NSNumber*) _id
    idContaBancariaDestino: (NSNumber*) idContaBancariaDestino
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierLinkPageTransferenciaBancariaResponse_* output, NSError* error)) handler;


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
-(NSNumber*) listarUsingGET20WithId: (NSNumber*) _id
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
/// @return PierPageContas*
-(NSNumber*) listarUsingGET3WithPage: (NSNumber*) page
    limit: (NSNumber*) limit
    idProduto: (NSNumber*) idProduto
    idOrigemComercial: (NSNumber*) idOrigemComercial
    idPessoa: (NSNumber*) idPessoa
    idStatusConta: (NSNumber*) idStatusConta
    diaVencimento: (NSNumber*) diaVencimento
    melhorDiaCompra: (NSNumber*) melhorDiaCompra
    dataStatusConta: (NSDate*) dataStatusConta
    dataCadastro: (NSDate*) dataCadastro
    dataUltimaAlteracaoVencimento: (NSDate*) dataUltimaAlteracaoVencimento
    completionHandler: (void (^)(PierPageContas* output, NSError* error)) handler;


///
///
/// Realiza a reativa\u00C3\u00A7\u00C3\u00A3o de contas que foram desativadas por inadimpl\u00C3\u00AAncia
/// Este recurso permite reativar contas que foram desativadas por inadimpl\u00C3\u00AAncia. Para isso, ser\u00C3\u00A1 preciso informar o c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da Conta (id).
///
/// @param _id Id Conta
/// 
///
/// @return NSObject*
-(NSNumber*) reativarUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// Permite listar uma linha do tempo com os eventos da conta
/// Esta opera\u00C3\u00A7\u00C3\u00A3o tem como objetivo permitir a listagem, em formato de timeline, dos eventos vinculados a uma detemrinada conta. Transa\u00C3\u00A7\u00C3\u00B5es, fechamento da fatura, pagamentos, gera\u00C3\u00A7\u00C3\u00A3o de cart\u00C3\u00B5es e altera\u00C3\u00A7\u00C3\u00A3o de limite s\u00C3\u00A3o exemplos de eventos contemplados por esta funcionalidade. Neste m\u00C3\u00A9todo, as opera\u00C3\u00A7\u00C3\u00B5es s\u00C3\u00A3o ordenadas de forma decrescente.
///
/// @param _id Id Conta
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
/// Realizar transfer\u00C3\u00AAncia banc\u00C3\u00A1ria entre bancos / contas
/// Este recurso tem como objetivo permitir que o portador de um cart\u00C3\u00A3o possa realizar a transfer\u00C3\u00AAncia de cr\u00C3\u00A9dito para outro cliente do mesmo emissor. Assim, o valor do cr\u00C3\u00A9dito somado a tarifa para transfer\u00C3\u00AAncia, quando praticada pelo emissor, ser\u00C3\u00A1 debitado da conta de origem, se houver saldo suficiente, e ser\u00C3\u00A1 creditado na conta de destino.
///
/// @param _id Id Conta
/// @param dataCompra Data da transfer\u00C3\u00AAncia
/// @param proximoVencimentoPadrao Dia do vencimento padr\u00C3\u00A3o da fatura
/// @param proximoVencimentoReal Data do vencimento real da fatura
/// @param valorCompra Valor da transfer\u00C3\u00AAncia
/// @param nomeFavorecido Apresenta o &#39;Nome Completo da PF&#39; ou o &#39;Nome Completo da Raz\u00C3\u00A3o Social (Nome Empresarial)&#39;.
/// @param documentoFavorecido N\u00C3\u00BAmero do CPF ou CNPJ.
/// @param banco C\u00C3\u00B3digo do banco
/// @param numeroAgencia N\u00C3\u00BAmero da ag\u00C3\u00AAncia
/// @param numeroConta N\u00C3\u00BAmero da conta
/// @param flagContaPoupanca Sinaliza se conta banc\u00C3\u00A1ria \u00C3\u00A9 poupan\u00C3\u00A7a (1: Poupan\u00C3\u00A7a, 0: Conta corrente)
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 100, Max = 100)
/// @param digitoAgencia D\u00C3\u00ADgito da ag\u00C3\u00AAncia
/// @param digitoConta D\u00C3\u00ADgito da conta
/// 
///
/// @return PierLinkTransferenciaBancariaResponse_*
-(NSNumber*) transferirUsingPOSTWithId: (NSNumber*) _id
    dataCompra: (NSDate*) dataCompra
    proximoVencimentoPadrao: (NSDate*) proximoVencimentoPadrao
    proximoVencimentoReal: (NSDate*) proximoVencimentoReal
    valorCompra: (NSNumber*) valorCompra
    nomeFavorecido: (NSString*) nomeFavorecido
    documentoFavorecido: (NSString*) documentoFavorecido
    banco: (NSNumber*) banco
    numeroAgencia: (NSString*) numeroAgencia
    numeroConta: (NSString*) numeroConta
    flagContaPoupanca: (NSNumber*) flagContaPoupanca
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    digitoAgencia: (NSString*) digitoAgencia
    digitoConta: (NSString*) digitoConta
    completionHandler: (void (^)(PierLinkTransferenciaBancariaResponse_* output, NSError* error)) handler;


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
-(NSNumber*) transferirUsingPOST1WithId: (NSNumber*) _id
    idContaDestino: (NSNumber*) idContaDestino
    valorTransferencia: (NSNumber*) valorTransferencia
    completionHandler: (void (^)(PierPageTransferencias* output, NSError* error)) handler;



@end

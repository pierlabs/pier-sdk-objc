#import <Foundation/Foundation.h>
#import "PierCampanhaUpdate.h"
#import "PierCampanhaResponse.h"
#import "PierConfiguracaoRegistroCobrancaResponse.h"
#import "PierConfiguracaoRegistroCobrancaPersist.h"
#import "PierConfiguracaoRotativoDetalheResponse.h"
#import "PierConfiguracaoRotativoPersist.h"
#import "PierProdutoDetalhesResponse.h"
#import "PierParametroProdutoResponse.h"
#import "PierTaxaAntecipacaoRequest.h"
#import "PierOrigemComercialResponse.h"
#import "PierAtendimentoClienteResponse.h"
#import "PierPageTipoAjusteResponse.h"
#import "PierBancoResponse.h"
#import "PierPageTipoBoletoResponse.h"
#import "PierTipoEnderecoResponse.h"
#import "PierTipoOperacaoResponse.h"
#import "PierTipoTelefoneResponse.h"
#import "PierPageCampanhaResponse.h"
#import "PierPageContaDetalheResponse.h"
#import "PierPageCampoCodificadoDescricaoResponse.h"
#import "PierPageFantasiaBasicaResponse.h"
#import "PierHistoricoTelefoneResponse.h"
#import "PierPageOrigemComercialResponse.h"
#import "PierPageTipoCampanhaResponse.h"
#import "PierPageConfiguracaoRotativoResponse.h"
#import "PierPageAtendimentoClienteResponse.h"
#import "PierPagePortadorResponse.h"
#import "PierPageProdutoResponse.h"
#import "PierPagePromotorResponse.h"
#import "PierPageBancoResponse.h"
#import "PierPageTipoEnderecoResponse.h"
#import "PierPageTipoTelefoneResponse.h"
#import "PierPageControleVencimentoResponse.h"
#import "PierCampanhaPersist.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierCadastroGeralApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierCadastroGeralApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierCadastroGeralApi*) sharedAPI;
///
///
/// Alterar campanha
/// Este m\u00C3\u00A9todo permite que sejam alterados os dados de uma campanha.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da campanha (id).
/// @param update update
/// 
///
/// @return PierCampanhaResponse*
-(NSNumber*) alterarUsingPUT2WithId: (NSNumber*) _id
    update: (PierCampanhaUpdate*) update
    completionHandler: (void (^)(PierCampanhaResponse* output, NSError* error)) handler;


///
///
/// Atualizar configura\u00C3\u00A7\u00C3\u00A3o para registro de cobran\u00C3\u00A7a
/// Este m\u00C3\u00A9todo permite atualizar uma configura\u00C3\u00A7\u00C3\u00A3o, para registro de cobran\u00C3\u00A7a.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da configura\u00C3\u00A7\u00C3\u00A3o (id).
/// @param configuracaoPersist configuracaoPersist
/// 
///
/// @return PierConfiguracaoRegistroCobrancaResponse*
-(NSNumber*) alterarUsingPUT3WithId: (NSNumber*) _id
    configuracaoPersist: (PierConfiguracaoRegistroCobrancaPersist*) configuracaoPersist
    completionHandler: (void (^)(PierConfiguracaoRegistroCobrancaResponse* output, NSError* error)) handler;


///
///
/// Alterar os dados de configura\u00C3\u00A7\u00C3\u00A3o do rotativo de um produto
/// Este m\u00C3\u00A9todo permite que seja alterada uma configura\u00C3\u00A7\u00C3\u00A3o do rotativo para um determinado produto.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da configura\u00C3\u00A7\u00C3\u00A3o (id).
/// @param configuracaoRotativoPersist configuracaoRotativoPersist
/// 
///
/// @return PierConfiguracaoRotativoDetalheResponse*
-(NSNumber*) alterarUsingPUT4WithId: (NSNumber*) _id
    configuracaoRotativoPersist: (PierConfiguracaoRotativoPersist*) configuracaoRotativoPersist
    completionHandler: (void (^)(PierConfiguracaoRotativoDetalheResponse* output, NSError* error)) handler;


///
///
/// Ativa o par\u00C3\u00A2metro uso exterior para o produto
/// Este m\u00C3\u00A9todo permite ativar o uso no exterior para o produto atrav\u00C3\u00A9s do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Produto (id)
/// 
///
/// @return PierProdutoDetalhesResponse*
-(NSNumber*) ativarUsoExteriorUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierProdutoDetalhesResponse* output, NSError* error)) handler;


///
///
/// Inserir configura\u00C3\u00A7\u00C3\u00A3o para registro de cobran\u00C3\u00A7a
/// Este m\u00C3\u00A9todo permite que seja cadastrado uma nova configura\u00C3\u00A7\u00C3\u00A3o, para registro de cobran\u00C3\u00A7a.
///
/// @param configuracaoPersist configuracaoPersist
/// 
///
/// @return PierConfiguracaoRegistroCobrancaResponse*
-(NSNumber*) cadastrarUsingPOST1WithConfiguracaoPersist: (PierConfiguracaoRegistroCobrancaPersist*) configuracaoPersist
    completionHandler: (void (^)(PierConfiguracaoRegistroCobrancaResponse* output, NSError* error)) handler;


///
///
/// Configura a Taxa de Antecipa\u00C3\u00A7\u00C3\u00A3o de um Produto
/// Este recurso permite configurar a Taxa de Antecipa\u00C3\u00A7\u00C3\u00A3o de um Produto, a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id Id Produto
/// @param taxaAntecipacaoRequest taxaAntecipacaoRequest
/// 
///
/// @return PierParametroProdutoResponse*
-(NSNumber*) configurarTaxaAntecipacaoUsingPOSTWithId: (NSNumber*) _id
    taxaAntecipacaoRequest: (PierTaxaAntecipacaoRequest*) taxaAntecipacaoRequest
    completionHandler: (void (^)(PierParametroProdutoResponse* output, NSError* error)) handler;


///
///
/// Consultar campanha
/// Este m\u00C3\u00A9todo permite que sejam listados os dados de uma determinada campanha existente na base do emissor. Para isso, \u00C3\u00A9 preciso informar o seu respectivo c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id ID da Campanha
/// 
///
/// @return PierCampanhaResponse*
-(NSNumber*) consultarCampanhaUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierCampanhaResponse* output, NSError* error)) handler;


///
///
/// Opera\u00C3\u00A7\u00C3\u00A3o utilizada para consultar uma determinada Origem Comercial
/// Este m\u00C3\u00A9todo permite que sejam listados os registros de uma determinada Origem Comercial existente na base do emissor. Para isso, \u00C3\u00A9 preciso informar o seu respectivo c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id ID da Origem Comercial
/// 
///
/// @return PierOrigemComercialResponse*
-(NSNumber*) consultarOrigemComercialUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierOrigemComercialResponse* output, NSError* error)) handler;


///
///
/// Consulta a Taxa de Antecipa\u00C3\u00A7\u00C3\u00A3o de um Produto
/// Este recurso permite consultar a Taxa de Antecipa\u00C3\u00A7\u00C3\u00A3o de um Produto, a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id Id Produto
/// @param tipoTransacao Tipo da Transa\u00C3\u00A7\u00C3\u00A3o (ON-US ou OFF-US)
/// 
///
/// @return PierParametroProdutoResponse*
-(NSNumber*) consultarTaxaAntecipacaoUsingGETWithId: (NSNumber*) _id
    tipoTransacao: (NSString*) tipoTransacao
    completionHandler: (void (^)(PierParametroProdutoResponse* output, NSError* error)) handler;


///
///
/// Apresenta os dados de um determinado Atendimento
/// Este m\u00C3\u00A9todo permite consultar os par\u00C3\u00A2metros de um determinado Atendimento a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (idAtendimento).
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do atendimento cliente (id).
/// 
///
/// @return PierAtendimentoClienteResponse*
-(NSNumber*) consultarUsingGET2WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierAtendimentoClienteResponse* output, NSError* error)) handler;


///
///
/// Apresenta os dados de um determinado Produto
/// Este m\u00C3\u00A9todo permite consultar um determinado Produto a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Produto (id)
/// 
///
/// @return PierProdutoDetalhesResponse*
-(NSNumber*) consultarUsingGET22WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierProdutoDetalhesResponse* output, NSError* error)) handler;


///
///
/// Lista os tipos de ajustes do emissor 
/// Este recurso permite que sejam listados os tipos de ajustes existentes na base de dados do emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param _id C\u00C3\u00B3digo identificador do tipo de ajuste.
/// @param descricao Descri\u00C3\u00A7\u00C3\u00A3o do tipo de ajuste.
/// 
///
/// @return PierPageTipoAjusteResponse*
-(NSNumber*) consultarUsingGET29WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    _id: (NSNumber*) _id
    descricao: (NSString*) descricao
    completionHandler: (void (^)(PierPageTipoAjusteResponse* output, NSError* error)) handler;


///
///
/// Apresenta os dados de um determinado Banco
/// Este m\u00C3\u00A9todo permite consultar um determinado Banco a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Banco (id).
/// 
///
/// @return PierBancoResponse*
-(NSNumber*) consultarUsingGET3WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierBancoResponse* output, NSError* error)) handler;


///
///
/// Lista os tipos de boletos do emissor 
/// Este recurso permite que sejam listados os tipos de boletos existentes na base de dados do emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param _id C\u00C3\u00B3digo identificador do tipo de boleto.
/// @param descricao Descri\u00C3\u00A7\u00C3\u00A3o do tipo de boleto.
/// @param banco C\u00C3\u00B3digo identificador do banco.
/// 
///
/// @return PierPageTipoBoletoResponse*
-(NSNumber*) consultarUsingGET30WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    _id: (NSNumber*) _id
    descricao: (NSString*) descricao
    banco: (NSNumber*) banco
    completionHandler: (void (^)(PierPageTipoBoletoResponse* output, NSError* error)) handler;


///
///
/// Apresenta os dados de um determinado Tipo de Endere\u00C3\u00A7o
/// Este m\u00C3\u00A9todo permite consultar um determinado Tipo de Endere\u00C3\u00A7o a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Tipo do Endere\u00C3\u00A7o (id)
/// 
///
/// @return PierTipoEnderecoResponse*
-(NSNumber*) consultarUsingGET31WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierTipoEnderecoResponse* output, NSError* error)) handler;


///
///
/// Apresenta dados de um determinado tipo de opera\u00C3\u00A7\u00C3\u00A3o
/// Este recurso permite consultar dados de um determinado tipo opera\u00C3\u00A7\u00C3\u00A3o a partir do idCartao, idEstabelecimento e codigoProcessamento.
///
/// @param idCartao C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do cartao (idCartao).
/// @param idEstabelecimento C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do estabelecimento (idEstabelecimento).
/// @param codigoProcessamento C\u00C3\u00B3digo de processamento da opera\u00C3\u00A7\u00C3\u00A3o.
/// 
///
/// @return PierTipoOperacaoResponse*
-(NSNumber*) consultarUsingGET32WithIdCartao: (NSNumber*) idCartao
    idEstabelecimento: (NSNumber*) idEstabelecimento
    codigoProcessamento: (NSString*) codigoProcessamento
    completionHandler: (void (^)(PierTipoOperacaoResponse* output, NSError* error)) handler;


///
///
/// Apresenta os dados de um determinado Tipo de Telefone
/// Este m\u00C3\u00A9todo permite consultar um determinado Tipo de Telefone a partir do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Tipo do Telefone (id)
/// 
///
/// @return PierTipoTelefoneResponse*
-(NSNumber*) consultarUsingGET34WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierTipoTelefoneResponse* output, NSError* error)) handler;


///
///
/// Consultar configura\u00C3\u00A7\u00C3\u00A3o para registro de cobran\u00C3\u00A7a
/// Este m\u00C3\u00A9todo permite buscar uma configura\u00C3\u00A7\u00C3\u00A3o, para registro de cobran\u00C3\u00A7a.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da configura\u00C3\u00A7\u00C3\u00A3o (id).
/// 
///
/// @return PierConfiguracaoRegistroCobrancaResponse*
-(NSNumber*) consultarUsingGET7WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierConfiguracaoRegistroCobrancaResponse* output, NSError* error)) handler;


///
///
/// Apresenta dados de configura\u00C3\u00A7\u00C3\u00A3o do rotativo espec\u00C3\u00ADfico.
/// Este recurso permite consultar dados de configura\u00C3\u00A7\u00C3\u00A3o do parcelamento rotativo a partir de seu codigo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o de configura\u00C3\u00A7\u00C3\u00A3o rotativo (id).
/// 
///
/// @return PierConfiguracaoRotativoDetalheResponse*
-(NSNumber*) consultarUsingGET8WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierConfiguracaoRotativoDetalheResponse* output, NSError* error)) handler;


///
///
/// Desativa o par\u00C3\u00A2metro uso exterior para o produto
/// Este m\u00C3\u00A9todo permite desativar o uso no exterior para o produto atrav\u00C3\u00A9s do seu c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Produto (id)
/// 
///
/// @return PierProdutoDetalhesResponse*
-(NSNumber*) desativarUsoExteriorUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierProdutoDetalhesResponse* output, NSError* error)) handler;


///
///
/// Listar Campanhas
/// Lista as campanhas.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param idTipoCampanha C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do tipo de campanha (id).
/// 
///
/// @return PierPageCampanhaResponse*
-(NSNumber*) listarCampanhasUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    idTipoCampanha: (NSNumber*) idTipoCampanha
    completionHandler: (void (^)(PierPageCampanhaResponse* output, NSError* error)) handler;


///
///
/// Lista as contas da pessoa
/// Permite listar as contas de um pessoa a partir do seu numero na receita federal.
///
/// @param numeroReceitaFederal N\u00C3\u00BAmero de identifica\u00C3\u00A7\u00C3\u00A3o do cliente na Receita Federal (CPF ou CNPJ)
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPageContaDetalheResponse*
-(NSNumber*) listarContasPorPessoaUsingGETWithNumeroReceitaFederal: (NSString*) numeroReceitaFederal
    sort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageContaDetalheResponse* output, NSError* error)) handler;


///
///
/// Lista os Estados C\u00C3\u00ADvis
/// Este m\u00C3\u00A9todo permite que sejam listados os Estados C\u00C3\u00ADvis na base de dados do Emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPageCampoCodificadoDescricaoResponse*
-(NSNumber*) listarEstadosCivisUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageCampoCodificadoDescricaoResponse* output, NSError* error)) handler;


///
///
/// Listar Fantasias B\u00C3\u00A1sicas
/// Lista as fantasia b\u00C3\u00A1sicas.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPageFantasiaBasicaResponse*
-(NSNumber*) listarFantasiasBasicasUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageFantasiaBasicaResponse* output, NSError* error)) handler;


///
///
/// Listar altera\u00C3\u00A7\u00C3\u00B5es de telefones realizadas nos \u00C3\u00BAltimos 60 dias
/// Este m\u00C3\u00A9todo permite verificar quais os telefones de um determinado que cliente que sofreram altera\u00C3\u00A7\u00C3\u00A3o nos \u00C3\u00BAltimos 60 dias.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da pessoa (id).
/// 
///
/// @return PierHistoricoTelefoneResponse*
-(NSNumber*) listarHistoricoTelefonesUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierHistoricoTelefoneResponse* output, NSError* error)) handler;


///
///
/// Lista nacionalidades
/// Este m\u00C3\u00A9todo permite que sejam listados as nacionalidades na base de dados do Emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPageCampoCodificadoDescricaoResponse*
-(NSNumber*) listarNacionalidadesUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageCampoCodificadoDescricaoResponse* output, NSError* error)) handler;


///
///
/// Lista as Ocupa\u00C3\u00A7\u00C3\u00B5es
/// Este m\u00C3\u00A9todo permite que sejam listados as naturezas de opera\u00C3\u00A7\u00C3\u00B5es na base de dados do Emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPageCampoCodificadoDescricaoResponse*
-(NSNumber*) listarNaturezasOcupacoesUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageCampoCodificadoDescricaoResponse* output, NSError* error)) handler;


///
///
/// Opera\u00C3\u00A7\u00C3\u00A3o utilizada para listar Origens Comerciais
/// Este m\u00C3\u00A9todo permite que sejam listadas as Origens Comerciais existentes na base do emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param _id Id da origem comercial
/// @param nome Nome da origem comercial
/// @param status Status da origem comercial
/// @param idEstabelecimento C\u00C3\u00B3digo identificador do estabelecimento
/// @param idProduto C\u00C3\u00B3digo identificador do produto
/// 
///
/// @return PierPageOrigemComercialResponse*
-(NSNumber*) listarOrigensComerciaisUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    _id: (NSNumber*) _id
    nome: (NSString*) nome
    status: (NSNumber*) status
    idEstabelecimento: (NSNumber*) idEstabelecimento
    idProduto: (NSNumber*) idProduto
    completionHandler: (void (^)(PierPageOrigemComercialResponse* output, NSError* error)) handler;


///
///
/// Lista os Parentescos
/// Este m\u00C3\u00A9todo permite que sejam listados parentescos na base de dados do Emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPageCampoCodificadoDescricaoResponse*
-(NSNumber*) listarParentescosUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageCampoCodificadoDescricaoResponse* output, NSError* error)) handler;


///
///
/// Lista profiss\u00C3\u00B5es
/// Este m\u00C3\u00A9todo permite que sejam listados as profiss\u00C3\u00B5es na base de dados do Emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPageCampoCodificadoDescricaoResponse*
-(NSNumber*) listarProfissoesUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageCampoCodificadoDescricaoResponse* output, NSError* error)) handler;


///
///
/// Listar Tipos de Campanhas
/// Lista os tipos de campanhas.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPageTipoCampanhaResponse*
-(NSNumber*) listarTiposCampanhasUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageTipoCampanhaResponse* output, NSError* error)) handler;


///
///
/// Listar as configura\u00C3\u00A7\u00C3\u00B5es rotativo.
/// Este recurso permite listar as configura\u00C3\u00A7\u00C3\u00B5es rotativo.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param idProduto C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do Produto.
/// 
///
/// @return PierPageConfiguracaoRotativoResponse*
-(NSNumber*) listarUsingGET10WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    idProduto: (NSNumber*) idProduto
    completionHandler: (void (^)(PierPageConfiguracaoRotativoResponse* output, NSError* error)) handler;


///
///
/// Lista todos os atendimentos
/// Este m\u00C3\u00A9todo permite que sejam listados todos os Registro de Atendimento, independente do Tipo.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param idTipoAtendimento C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Tipo de Atendimento (id)
/// @param idConta C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o de conta (id).
/// @param nomeAtendente Apresenta o nome do Atendente que registrou o Atendimento.
/// @param dataAtendimento Apresenta a data em que o Atendimento foi realizado.
/// 
///
/// @return PierPageAtendimentoClienteResponse*
-(NSNumber*) listarUsingGET2WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    idTipoAtendimento: (NSNumber*) idTipoAtendimento
    idConta: (NSNumber*) idConta
    nomeAtendente: (NSString*) nomeAtendente
    dataAtendimento: (NSString*) dataAtendimento
    completionHandler: (void (^)(PierPageAtendimentoClienteResponse* output, NSError* error)) handler;


///
///
/// Lista os Portadores existentes
/// Este m\u00C3\u00A9todo permite que sejam listados os portadores cadastrados na base do emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param idConta C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Conta (id).
/// @param idProduto C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Produto (id).
/// @param idPessoa C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Pessoa (id).
/// @param idParentesco C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Parentesco (id)
/// @param tipoPortador Apresenta o tipo do Portador do cart\u00C3\u00A3o, sendo: (&#39;T&#39;: Titular, &#39;A&#39;: Adicional).
/// @param nomeImpresso Apresenta o nome a ser impresso no cart\u00C3\u00A3o.
/// @param idTipoCartao Apresenta o c\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do tipo do cart\u00C3\u00A3o (id), que ser\u00C3\u00A1 utilizado para gerar os cart\u00C3\u00B5es deste portador, vinculados a sua respectiva conta atrav\u00C3\u00A9s do campo idConta.
/// @param flagAtivo Quanto ativa, indica que o cadastro do Portador est\u00C3\u00A1 ativo, em emissores que realizam este tipo de gest\u00C3\u00A3o.
/// @param dataCadastroPortador Apresenta a data em que o Portador fora cadastrado, quando possuir esta informa\u00C3\u00A7\u00C3\u00A3o.
/// @param dataCancelamentoPortador Apresenta a data em que o Portador fora cancelado, quando possuir esta informa\u00C3\u00A7\u00C3\u00A3o.
/// 
///
/// @return PierPagePortadorResponse*
-(NSNumber*) listarUsingGET27WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    idConta: (NSNumber*) idConta
    idProduto: (NSNumber*) idProduto
    idPessoa: (NSNumber*) idPessoa
    idParentesco: (NSNumber*) idParentesco
    tipoPortador: (NSString*) tipoPortador
    nomeImpresso: (NSString*) nomeImpresso
    idTipoCartao: (NSNumber*) idTipoCartao
    flagAtivo: (NSNumber*) flagAtivo
    dataCadastroPortador: (NSString*) dataCadastroPortador
    dataCancelamentoPortador: (NSString*) dataCancelamentoPortador
    completionHandler: (void (^)(PierPagePortadorResponse* output, NSError* error)) handler;


///
///
/// Lista os Produtos do Emissor
/// Este m\u00C3\u00A9todo permite que sejam listados os Produtos existentes na base de dados do Emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param nome Descri\u00C3\u00A7\u00C3\u00A3o do Nome do Produto.
/// @param status Representa o Status do Produto, onde: (\&quot;0\&quot;: Inativo), (\&quot;1\&quot;: Ativo).
/// @param idFantasiaBasica C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Fantasia B\u00C3\u00A1sica (id) a qual o produto pertence.
/// 
///
/// @return PierPageProdutoResponse*
-(NSNumber*) listarUsingGET28WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    nome: (NSString*) nome
    status: (NSNumber*) status
    idFantasiaBasica: (NSNumber*) idFantasiaBasica
    completionHandler: (void (^)(PierPageProdutoResponse* output, NSError* error)) handler;


///
///
/// Lista promotores cadastrados na base do emissor
/// Este m\u00C3\u00A9todo permite que sejam listados os cadastros de Promoteres existentes na base de dados do Emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do promotor (id)
/// @param nome Nome do Promotor
/// @param dataCadastro Data da Inclus\u00C3\u00A3o.
/// @param idEstabelecimento C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Estabelecimento
/// @param idUsuario C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do usu\u00C3\u00A1rio
/// 
///
/// @return PierPagePromotorResponse*
-(NSNumber*) listarUsingGET29WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    _id: (NSNumber*) _id
    nome: (NSString*) nome
    dataCadastro: (NSString*) dataCadastro
    idEstabelecimento: (NSNumber*) idEstabelecimento
    idUsuario: (NSNumber*) idUsuario
    completionHandler: (void (^)(PierPagePromotorResponse* output, NSError* error)) handler;


///
///
/// Lista os Bancos cadastrados para o Emissor
/// Este m\u00C3\u00A9todo permite que sejam listados os Bancos existentes na base de dados do Emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierPageBancoResponse*
-(NSNumber*) listarUsingGET3WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierPageBancoResponse* output, NSError* error)) handler;


///
///
/// Lista as op\u00C3\u00B5es de Tipos de Endere\u00C3\u00A7os do Emissor 
/// Este m\u00C3\u00A9todo permite que sejam listados os Tipos de Endere\u00C3\u00A7os existentes na base de dados do Emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Tipo do Endere\u00C3\u00A7o (id)
/// @param nome Nome do Tipo do Endere\u00C3\u00A7o
/// 
///
/// @return PierPageTipoEnderecoResponse*
-(NSNumber*) listarUsingGET37WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    _id: (NSNumber*) _id
    nome: (NSString*) nome
    completionHandler: (void (^)(PierPageTipoEnderecoResponse* output, NSError* error)) handler;


///
///
/// Lista os Tipos de Telefones
/// Este m\u00C3\u00A9todo permite que sejam listados os Tipos de Telefones existentes na base de dados do Emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Tipo do Telefone (id).
/// @param nome Nome do Tipo do Telefone
/// 
///
/// @return PierPageTipoTelefoneResponse*
-(NSNumber*) listarUsingGET39WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    _id: (NSNumber*) _id
    nome: (NSString*) nome
    completionHandler: (void (^)(PierPageTipoTelefoneResponse* output, NSError* error)) handler;


///
///
/// Listar Vencimentos
/// Este recurso permite que sejam listados os Vencimentos do emissor.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param dataVencimento Indica a data de vencimento das faturas
/// 
///
/// @return PierPageControleVencimentoResponse*
-(NSNumber*) listarUsingGET45WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    dataVencimento: (NSString*) dataVencimento
    completionHandler: (void (^)(PierPageControleVencimentoResponse* output, NSError* error)) handler;


///
///
/// Listar configura\u00C3\u00A7\u00C3\u00B5es para registro de cobran\u00C3\u00A7a
/// Este m\u00C3\u00A9todo permite listar as configura\u00C3\u00A7\u00C3\u00B5es de registro de cobran\u00C3\u00A7a.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// 
///
/// @return PierConfiguracaoRegistroCobrancaResponse*
-(NSNumber*) listarUsingGET9WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    completionHandler: (void (^)(PierConfiguracaoRegistroCobrancaResponse* output, NSError* error)) handler;


///
///
/// Cadastro um novo Atendimento do tipo Gen\u00C3\u00A9rico para uma Conta
/// 
///
/// @param idConta C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Conta a qual o Atendimento est\u00C3\u00A1 associado
/// @param conteudoAtendimento Apresenta as informa\u00C3\u00A7\u00C3\u00B5es que foram utilizadas para consultar, cadastrar ou alterar informa\u00C3\u00A7\u00C3\u00B5es relacionadas ao Atendimento.
/// @param detalhesAtendimento Apresenta os detalhes lan\u00C3\u00A7ados pelo sistema ou pelo Atendente durante relacionados ao Atendimento.
/// @param nomeAtendente Apresenta o nome do Atendente que registrou o Atendimento.
/// @param dataAtendimento Apresenta a data e hora em que o Atendimento foi realizado no formato yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39;.
/// @param dataAgendamento Quando utilizado, de acordo com o Tipo de Atendimento, apresenta a data e hora para processamento ou a data e hora para retorno do Atendimento no formato yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39;.
/// @param dataHoraInicioAtendimento Apresenta a data e hora em que o Atendimento foi iniciado. Quando utilizado, serve para medir a performance dos Atendimentos no formato yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39;.
/// @param dataHoraFimAtendimento Apresenta a data e hora em que o Atendimento foi finalizado. Quando utilizado, serve para medir a performance dos Atendimentos no formato yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39;.
/// @param flagFilaFraude Flag fila fraude
/// 
///
/// @return PierAtendimentoClienteResponse*
-(NSNumber*) salvarUsingPOST2WithIdConta: (NSNumber*) idConta
    conteudoAtendimento: (NSString*) conteudoAtendimento
    detalhesAtendimento: (NSString*) detalhesAtendimento
    nomeAtendente: (NSString*) nomeAtendente
    dataAtendimento: (NSString*) dataAtendimento
    dataAgendamento: (NSString*) dataAgendamento
    dataHoraInicioAtendimento: (NSString*) dataHoraInicioAtendimento
    dataHoraFimAtendimento: (NSString*) dataHoraFimAtendimento
    flagFilaFraude: (NSNumber*) flagFilaFraude
    completionHandler: (void (^)(PierAtendimentoClienteResponse* output, NSError* error)) handler;


///
///
/// Inserir campanha
/// Este m\u00C3\u00A9todo permite que seja cadastrado uma nova campanha.
///
/// @param campanhaPersist campanhaPersist
/// 
///
/// @return PierCampanhaResponse*
-(NSNumber*) salvarUsingPOST4WithCampanhaPersist: (PierCampanhaPersist*) campanhaPersist
    completionHandler: (void (^)(PierCampanhaResponse* output, NSError* error)) handler;


///
///
/// Inserir os dados de configura\u00C3\u00A7\u00C3\u00A3o do rotativo de um produto
/// Este m\u00C3\u00A9todo permite que seja cadastrado uma nova configura\u00C3\u00A7\u00C3\u00A3o do rotativo para um determinado produto.
///
/// @param configuracaoRotativoPersist configuracaoRotativoPersist
/// 
///
/// @return PierConfiguracaoRotativoDetalheResponse*
-(NSNumber*) salvarUsingPOST6WithConfiguracaoRotativoPersist: (PierConfiguracaoRotativoPersist*) configuracaoRotativoPersist
    completionHandler: (void (^)(PierConfiguracaoRotativoDetalheResponse* output, NSError* error)) handler;



@end

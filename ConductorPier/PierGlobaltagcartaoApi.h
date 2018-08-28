#import <Foundation/Foundation.h>
#import "PierCartaoResponse.h"
#import "PierEstagioCartaoUpdate_.h"
#import "PierHistoricoImpressaoCartaoResponse.h"
#import "PierDadosCartaoImpressaoResponse.h"
#import "PierDadosCartaoResponse.h"
#import "PierLimiteDisponibilidadeResponse.h"
#import "PierLoteCartoesPrePagosResponse.h"
#import "PierPortadorResponse.h"
#import "PierCartaoDetalheResponse.h"
#import "PierCartaoMultiAppPersistValue_.h"
#import "PierVinculoCartoesResponse.h"
#import "PierCartaoMultiAppImpressaoResponse.h"
#import "PierPageLoteCartoesPrePagosResponse.h"
#import "PierPageCartaoResponse.h"
#import "PierValidaCVVRequest.h"
#import "PierValidaCartaoResponse.h"
#import "PierValidaSenhaCartaoResponse.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierGlobaltagcartaoApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierGlobaltagcartaoApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierGlobaltagcartaoApi*) sharedAPI;
///
///
/// {{{cartao_resource_alterar_alterar_senha}}}
/// {{{cartao_resource_alterar_alterar_senha_notes}}}
///
/// @param _id {{{cartao_resource_alterar_alterar_senha_param_id}}}
/// @param senha {{{cartao_resource_alterar_alterar_senha_param_nova_senha}}}
/// 
///
/// @return NSString*
-(NSNumber*) alterarAlterarSenhaUsingPUTWithId: (NSNumber*) _id
    senha: (NSString*) senha
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_alterar_estagio}}}
/// {{{cartao_resource_alterar_estagio_notes}}}
///
/// @param _id {{{cartao_resource_alterar_estagio_param_id}}}
/// @param update {{{cartao_resource_alterar_estagio_param_id_estagio_cartao}}}
/// 
///
/// @return PierCartaoResponse*
-(NSNumber*) alterarEstagioUsingPOSTWithId: (NSNumber*) _id
    update: (PierEstagioCartaoUpdate_*) update
    completionHandler: (void (^)(PierCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_alterar_status_impressao}}}
/// {{{cartao_resource_alterar_status_impressao_notes}}}
///
/// @param _id {{{cartao_resource_alterar_status_impressao_param_id}}}
/// @param idStatusImpressao {{{cartao_resource_alterar_status_impressao_param_id_status_impressao}}}
/// 
///
/// @return PierHistoricoImpressaoCartaoResponse*
-(NSNumber*) alterarStatusImpressaoUsingPUTWithId: (NSNumber*) _id
    idStatusImpressao: (NSNumber*) idStatusImpressao
    completionHandler: (void (^)(PierHistoricoImpressaoCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_atribuir_pessoa}}}
/// {{{cartao_resource_atribuir_pessoa_notes}}}
///
/// @param _id {{{cartao_resource_atribuir_pessoa_param_id_cartao}}}
/// @param idPessoa {{{cartao_resource_atribuir_pessoa_param_id_pessoa}}}
/// 
///
/// @return PierCartaoResponse*
-(NSNumber*) atribuirPessoaUsingPUTWithId: (NSNumber*) _id
    idPessoa: (NSNumber*) idPessoa
    completionHandler: (void (^)(PierCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_bloquear}}}
/// {{{cartao_resource_bloquear_notes}}}
///
/// @param _id {{{cartao_resource_bloquear_param_id}}}
/// @param idStatus {{{cartao_resource_bloquear_param_id_status}}}
/// @param observacao {{{cartao_resource_bloquear_param_observacao}}}
/// 
///
/// @return PierCartaoResponse*
-(NSNumber*) bloquearUsingPOSTWithId: (NSNumber*) _id
    idStatus: (NSNumber*) idStatus
    observacao: (NSString*) observacao
    completionHandler: (void (^)(PierCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_cadastrar_alterar_senha}}}
/// {{{cartao_resource_cadastrar_alterar_senha_notes}}}
///
/// @param _id {{{cartao_resource_cadastrar_alterar_senha_param_id}}}
/// @param senha {{{cartao_resource_cadastrar_alterar_senha_param_nova_senha}}}
/// 
///
/// @return NSString*
-(NSNumber*) cadastrarAlterarSenhaUsingPOSTWithId: (NSNumber*) _id
    senha: (NSString*) senha
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_cancelar}}}
/// {{{cartao_resource_cancelar_notes}}}
///
/// @param _id {{{cartao_resource_cancelar_param_id}}}
/// @param idStatus {{{cartao_resource_cancelar_param_id_status}}}
/// @param observacao {{{cartao_resource_cancelar_param_observacao}}}
/// 
///
/// @return PierCartaoResponse*
-(NSNumber*) cancelarUsingPOSTWithId: (NSNumber*) _id
    idStatus: (NSNumber*) idStatus
    observacao: (NSString*) observacao
    completionHandler: (void (^)(PierCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_consultar_cartao_impressao}}}
/// {{{cartao_resource_consultar_cartao_impressao_notes}}}
///
/// @param _id {{{cartao_resource_consultar_cartao_impressao_param_id}}}
/// 
///
/// @return PierDadosCartaoImpressaoResponse*
-(NSNumber*) consultarCartaoImpressaoUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierDadosCartaoImpressaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_consultar_dados_reais_cartao}}}
/// {{{cartao_resource_consultar_dados_reais_cartao_notes}}}
///
/// @param _id id
/// 
///
/// @return PierDadosCartaoResponse*
-(NSNumber*) consultarDadosReaisCartaoUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierDadosCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_consultar_limite_disponibilidade}}}
/// {{{cartao_resource_consultar_limite_disponibilidade_notes}}}
///
/// @param _id {{{cartao_resource_consultar_limite_disponibilidade_param_id}}}
/// 
///
/// @return PierLimiteDisponibilidadeResponse*
-(NSNumber*) consultarLimiteDisponibilidadeUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierLimiteDisponibilidadeResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_consultar_lotes_cartoes_pre_pagos}}}
/// {{{cartao_resource_consultar_lotes_cartoes_pre_pagos_notes}}}
///
/// @param _id {{{cartao_resource_consultar_lotes_cartoes_pre_pagos_param_id_lote}}}
/// 
///
/// @return PierLoteCartoesPrePagosResponse*
-(NSNumber*) consultarLotesCartoesPrePagosUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierLoteCartoesPrePagosResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_consultar_portador}}}
/// {{{cartao_resource_consultar_portador_notes}}}
///
/// @param _id {{{cartao_resource_consultar_portador_param_id}}}
/// 
///
/// @return PierPortadorResponse*
-(NSNumber*) consultarPortadorUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierPortadorResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_consultar}}}
/// {{{cartao_resource_consultar_notes}}}
///
/// @param _id {{{cartao_resource_consultar_param_id}}}
/// 
///
/// @return PierCartaoDetalheResponse*
-(NSNumber*) consultarUsingGET12WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierCartaoDetalheResponse* output, NSError* error)) handler;


///
///
/// {{{conta_resource_cadastrar_cartao_multiapp}}}
/// {{{conta_resource_cadastrar_cartao_multiapp_notes}}}
///
/// @param cartaoMultiAppPersist cartaoMultiAppPersist
/// 
///
/// @return PierVinculoCartoesResponse*
-(NSNumber*) criarCartoesMultiAppUsingPOSTWithCartaoMultiAppPersist: (PierCartaoMultiAppPersistValue_*) cartaoMultiAppPersist
    completionHandler: (void (^)(PierVinculoCartoesResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_desbloquear_senha_incorreta}}}
/// {{{cartao_resource_desbloquear_senha_incorreta_notes}}}
///
/// @param _id {{{cartao_resource_desbloquear_senha_incorreta_param_id}}}
/// 
///
/// @return PierCartaoResponse*
-(NSNumber*) desbloquearSenhaIncorretaUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_desbloquear}}}
/// {{{cartao_resource_desbloquear_notes}}}
///
/// @param _id {{{cartao_resource_desbloquear_param_id}}}
/// 
///
/// @return PierCartaoResponse*
-(NSNumber*) desbloquearUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_gerar_lotes_cartoes_pre_pagos}}}
/// {{{cartao_resource_gerar_lotes_cartoes_pre_pagos_notes}}}
///
/// @param idOrigemComercial {{{lote_cartoes_pre_pagos_persist_id_origem_comercial_value}}}
/// @param idProduto {{{lote_cartoes_pre_pagos_persist_id_produto_value}}}
/// @param idTipoCartao {{{lote_cartoes_pre_pagos_persist_id_tipo_cartao_value}}}
/// @param idImagem {{{lote_cartoes_pre_pagos_persist_id_imagem_value}}}
/// @param idEndereco {{{lote_cartoes_pre_pagos_persist_id_endereco_value}}}
/// @param quantidadeCartoes {{{lote_cartoes_pre_pagos_persist_quantidade_cartoes_value}}}
/// @param identificadorExterno {{{lote_cartoes_pre_pagos_persist_identificador_externo_value}}}
/// 
///
/// @return PierLoteCartoesPrePagosResponse*
-(NSNumber*) gerarLotesCartoesPrePagosUsingPOSTWithIdOrigemComercial: (NSNumber*) idOrigemComercial
    idProduto: (NSNumber*) idProduto
    idTipoCartao: (NSNumber*) idTipoCartao
    idImagem: (NSNumber*) idImagem
    idEndereco: (NSNumber*) idEndereco
    quantidadeCartoes: (NSNumber*) quantidadeCartoes
    identificadorExterno: (NSString*) identificadorExterno
    completionHandler: (void (^)(PierLoteCartoesPrePagosResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_gerar_nova_via_multiplo}}}
/// {{{cartao_resource_gerar_nova_via_multiplo_notes}}}
///
/// @param _id {{{cartao_resource_gerar_nova_via_param_id_cartao}}}
/// 
///
/// @return PierCartaoMultiAppImpressaoResponse*
-(NSNumber*) gerarNovaViaCartaoMultiAppUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierCartaoMultiAppImpressaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_gerar_nova_via}}}
/// {{{cartao_resource_gerar_nova_via_notes}}}
///
/// @param _id {{{cartao_resource_gerar_nova_via_param_id_cartao}}}
/// 
///
/// @return PierCartaoResponse*
-(NSNumber*) gerarNovaViaUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_lancar_tarifa_segunda_via}}}
/// {{{cartao_resource_lancar_tarifa_segunda_via_notes}}}
///
/// @param _id {{{cartao_resource_lancar_tarifa_segunda_via_param_id}}}
/// 
///
/// @return NSObject*
-(NSNumber*) lancarTarifaSegundaViaUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_listar_lotes_cartoes_pre_pagos}}}
/// {{{cartao_resource_listar_lotes_cartoes_pre_pagos_notes}}}
///
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// @param idOrigemComercial {{{lote_cartoes_pre_pagos_request_id_origem_comercial_value}}}
/// @param idProduto {{{lote_cartoes_pre_pagos_request_id_produto_value}}}
/// @param idTipoCartao {{{lote_cartoes_pre_pagos_request_id_tipo_cartao_value}}}
/// @param idImagem {{{lote_cartoes_pre_pagos_request_id_imagem_value}}}
/// @param idEndereco {{{lote_cartoes_pre_pagos_request_id_endereco_value}}}
/// @param quantidadeCartoes {{{lote_cartoes_pre_pagos_request_quantidade_cartoes_value}}}
/// @param dataCadastro {{{lote_cartoes_pre_pagos_request_data_cadastro_value}}}
/// @param usuarioCadastro {{{lote_cartoes_pre_pagos_request_usuario_cadastro_value}}}
/// @param statusProcessamento {{{lote_cartoes_pre_pagos_request_status_processamento_value}}}
/// @param identificadorExterno {{{lote_cartoes_pre_pagos_request_identificador_externo_value}}}
/// 
///
/// @return PierPageLoteCartoesPrePagosResponse*
-(NSNumber*) listarLotesCartoesPrePagosUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    idOrigemComercial: (NSNumber*) idOrigemComercial
    idProduto: (NSNumber*) idProduto
    idTipoCartao: (NSNumber*) idTipoCartao
    idImagem: (NSNumber*) idImagem
    idEndereco: (NSNumber*) idEndereco
    quantidadeCartoes: (NSNumber*) quantidadeCartoes
    dataCadastro: (NSString*) dataCadastro
    usuarioCadastro: (NSString*) usuarioCadastro
    statusProcessamento: (NSNumber*) statusProcessamento
    identificadorExterno: (NSString*) identificadorExterno
    completionHandler: (void (^)(PierPageLoteCartoesPrePagosResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_listar}}}
/// {{{cartao_resource_listar_notes}}}
///
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// @param idStatusCartao {{{cartao_request_id_status_cartao_value}}}
/// @param idEstagioCartao {{{cartao_request_id_estagio_cartao_value}}}
/// @param idConta {{{cartao_request_id_conta_value}}}
/// @param idPessoa {{{cartao_request_id_pessoa_value}}}
/// @param idProduto {{{cartao_request_id_produto_value}}}
/// @param tipoPortador {{{cartao_request_tipo_portador_value}}}
/// @param numeroCartao {{{cartao_request_numero_cartao_value}}}
/// @param nomeImpresso {{{cartao_request_nome_impresso_value}}}
/// @param dataGeracao {{{cartao_request_data_geracao_value}}}
/// @param dataStatusCartao {{{cartao_request_data_status_cartao_value}}}
/// @param dataEstagioCartao {{{cartao_request_data_estagio_cartao_value}}}
/// @param dataValidade {{{cartao_request_data_validade_value}}}
/// @param dataImpressao {{{cartao_request_data_impressao_value}}}
/// @param arquivoImpressao {{{cartao_request_arquivo_impressao_value}}}
/// @param flagImpressaoOrigemComercial {{{cartao_request_flag_impressao_origem_comercial_value}}}
/// @param flagProvisorio {{{cartao_request_flag_provisorio_value}}}
/// @param codigoDesbloqueio {{{cartao_request_codigo_desbloqueio_value}}}
/// @param sequencialCartao {{{cartao_request_sequencial_cartao_value}}}
/// @param identificadorExterno {{{cartao_request_identificador_externo_value}}}
/// 
///
/// @return PierPageCartaoResponse*
-(NSNumber*) listarUsingGET12WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    idStatusCartao: (NSNumber*) idStatusCartao
    idEstagioCartao: (NSNumber*) idEstagioCartao
    idConta: (NSNumber*) idConta
    idPessoa: (NSNumber*) idPessoa
    idProduto: (NSNumber*) idProduto
    tipoPortador: (NSString*) tipoPortador
    numeroCartao: (NSString*) numeroCartao
    nomeImpresso: (NSString*) nomeImpresso
    dataGeracao: (NSString*) dataGeracao
    dataStatusCartao: (NSString*) dataStatusCartao
    dataEstagioCartao: (NSString*) dataEstagioCartao
    dataValidade: (NSString*) dataValidade
    dataImpressao: (NSString*) dataImpressao
    arquivoImpressao: (NSString*) arquivoImpressao
    flagImpressaoOrigemComercial: (NSNumber*) flagImpressaoOrigemComercial
    flagProvisorio: (NSNumber*) flagProvisorio
    codigoDesbloqueio: (NSString*) codigoDesbloqueio
    sequencialCartao: (NSNumber*) sequencialCartao
    identificadorExterno: (NSNumber*) identificadorExterno
    completionHandler: (void (^)(PierPageCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_reativar}}}
/// {{{cartao_resource_reativar_notes}}}
///
/// @param _id {{{cartao_resource_reativar_param_id}}}
/// 
///
/// @return PierCartaoResponse*
-(NSNumber*) reativarUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(PierCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_validar_c_v_v}}}
/// {{{cartao_resource_validar_c_v_v_notes}}}
///
/// @param _id {{{cartao_resource_validar_c_v_v_param_id}}}
/// @param validaCVV validaCVV
/// 
///
/// @return NSString*
-(NSNumber*) validarCVVUsingPOSTWithId: (NSNumber*) _id
    validaCVV: (PierValidaCVVRequest*) validaCVV
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_validar_dados_impressos_bandeirado}}}
/// {{{cartao_resource_validar_dados_impressos_bandeirado_notes}}}
///
/// @param numeroCartao {{{cartao_resource_validar_dados_impressos_bandeirado_param_numero_cartao}}}
/// @param nomePortador {{{cartao_resource_validar_dados_impressos_bandeirado_param_nome_portador}}}
/// @param dataValidade {{{cartao_resource_validar_dados_impressos_bandeirado_param_data_validade}}}
/// @param codigoSeguranca {{{cartao_resource_validar_dados_impressos_bandeirado_param_codigo_seguranca}}}
/// 
///
/// @return PierValidaCartaoResponse*
-(NSNumber*) validarDadosImpressosBandeiradoUsingGETWithNumeroCartao: (NSString*) numeroCartao
    nomePortador: (NSString*) nomePortador
    dataValidade: (NSString*) dataValidade
    codigoSeguranca: (NSString*) codigoSeguranca
    completionHandler: (void (^)(PierValidaCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_validar_dados_impressos_nao_bandeirado}}}
/// {{{cartao_resource_validar_dados_impressos_nao_bandeirado_notes}}}
///
/// @param numeroCartao {{{cartao_resource_validar_dados_impressos_nao_bandeirado_param_numero_cartao}}}
/// @param nomePortador {{{cartao_resource_validar_dados_impressos_nao_bandeirado_param_nome_portador}}}
/// @param dataValidade {{{cartao_resource_validar_dados_impressos_nao_bandeirado_param_data_validade}}}
/// @param codigoSeguranca {{{cartao_resource_validar_dados_impressos_nao_bandeirado_param_codigo_seguranca}}}
/// 
///
/// @return PierValidaCartaoResponse*
-(NSNumber*) validarDadosImpressosNaoBandeiradoUsingGETWithNumeroCartao: (NSString*) numeroCartao
    nomePortador: (NSString*) nomePortador
    dataValidade: (NSString*) dataValidade
    codigoSeguranca: (NSString*) codigoSeguranca
    completionHandler: (void (^)(PierValidaCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_validar_de55_cartao_mastercard}}}
/// {{{cartao_resource_validar_de55_cartao_mastercard_notes}}}
///
/// @param numeroCartao {{{cartao_resource_validar_de55_cartao_mastercard_param_numero_cartao}}}
/// @param criptograma {{{cartao_resource_validar_de55_cartao_mastercard_param_criptograma}}}
/// 
///
/// @return PierValidaCartaoResponse*
-(NSNumber*) validarDe55CartaoMastercardUsingGETWithNumeroCartao: (NSString*) numeroCartao
    criptograma: (NSString*) criptograma
    completionHandler: (void (^)(PierValidaCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_validar_senha}}}
/// {{{cartao_resource_validar_senha_notes}}}
///
/// @param _id {{{cartao_resource_validar_senha_param_id}}}
/// @param senha {{{cartao_resource_validar_senha_param_senha}}}
/// 
///
/// @return PierValidaSenhaCartaoResponse*
-(NSNumber*) validarSenhaUsingGETWithId: (NSNumber*) _id
    senha: (NSString*) senha
    completionHandler: (void (^)(PierValidaSenhaCartaoResponse* output, NSError* error)) handler;


///
///
/// {{{cartao_resource_validar_tarja}}}
/// {{{cartao_resource_validar_tarja_notes}}}
///
/// @param numeroCartao {{{cartao_resource_validar_tarja_param_numero_cartao}}}
/// @param trilha1 {{{cartao_resource_validar_tarja_param_trilha1}}}
/// @param trilha2 {{{cartao_resource_validar_tarja_param_trilha2}}}
/// 
///
/// @return PierValidaCartaoResponse*
-(NSNumber*) validarTarjaUsingGETWithNumeroCartao: (NSString*) numeroCartao
    trilha1: (NSString*) trilha1
    trilha2: (NSString*) trilha2
    completionHandler: (void (^)(PierValidaCartaoResponse* output, NSError* error)) handler;



@end

#define DLLWRPJMP(x) void __declspec(dllimport) x(); void DllWrapper_Jump__##x() { x(); } __pragma(comment(linker, "/export:" #x "=" "DllWrapper_Jump__" #x))

#pragma comment(linker, "/BASE:0x7FF71BC0000")

DLLWRPJMP(AddPersonalTrustDBPages)
DLLWRPJMP(CatalogCompactHashDatabase)
DLLWRPJMP(CryptCATAdminAcquireContext)
DLLWRPJMP(CryptCATAdminAcquireContext2)
DLLWRPJMP(CryptCATAdminAddCatalog)
DLLWRPJMP(CryptCATAdminCalcHashFromFileHandle)
DLLWRPJMP(CryptCATAdminCalcHashFromFileHandle2)
DLLWRPJMP(CryptCATAdminEnumCatalogFromHash)
DLLWRPJMP(CryptCATAdminPauseServiceForBackup)
DLLWRPJMP(CryptCATAdminReleaseCatalogContext)
DLLWRPJMP(CryptCATAdminReleaseContext)
DLLWRPJMP(CryptCATAdminRemoveCatalog)
DLLWRPJMP(CryptCATAdminResolveCatalogPath)
DLLWRPJMP(CryptCATAllocSortedMemberInfo)
DLLWRPJMP(CryptCATCatalogInfoFromContext)
DLLWRPJMP(CryptCATCDFClose)
DLLWRPJMP(CryptCATCDFEnumAttributes)
DLLWRPJMP(CryptCATCDFEnumAttributesWithCDFTag)
DLLWRPJMP(CryptCATCDFEnumCatAttributes)
DLLWRPJMP(CryptCATCDFEnumMembers)
DLLWRPJMP(CryptCATCDFEnumMembersByCDFTag)
DLLWRPJMP(CryptCATCDFEnumMembersByCDFTagEx)
DLLWRPJMP(CryptCATCDFOpen)
DLLWRPJMP(CryptCATClose)
DLLWRPJMP(CryptCATEnumerateAttr)
DLLWRPJMP(CryptCATEnumerateCatAttr)
DLLWRPJMP(CryptCATEnumerateMember)
DLLWRPJMP(CryptCATFreeSortedMemberInfo)
DLLWRPJMP(CryptCATGetAttrInfo)
DLLWRPJMP(CryptCATGetCatAttrInfo)
DLLWRPJMP(CryptCATGetMemberInfo)
DLLWRPJMP(CryptCATHandleFromStore)
DLLWRPJMP(CryptCATOpen)
DLLWRPJMP(CryptCATPersistStore)
DLLWRPJMP(CryptCATPutAttrInfo)
DLLWRPJMP(CryptCATPutCatAttrInfo)
DLLWRPJMP(CryptCATPutMemberInfo)
DLLWRPJMP(CryptCATStoreFromHandle)
DLLWRPJMP(CryptCATVerifyMember)
DLLWRPJMP(CryptSIPCreateIndirectData)
DLLWRPJMP(CryptSIPGetCaps)
DLLWRPJMP(CryptSIPGetInfo)
DLLWRPJMP(CryptSIPGetRegWorkingFlags)
DLLWRPJMP(CryptSIPGetSignedDataMsg)
DLLWRPJMP(CryptSIPPutSignedDataMsg)
DLLWRPJMP(CryptSIPRemoveSignedDataMsg)
DLLWRPJMP(CryptSIPVerifyIndirectData)
DLLWRPJMP(DllRegisterServer)
DLLWRPJMP(DllUnregisterServer)
DLLWRPJMP(DriverCleanupPolicy)
DLLWRPJMP(DriverFinalPolicy)
DLLWRPJMP(DriverInitializePolicy)
DLLWRPJMP(FindCertsByIssuer)
DLLWRPJMP(GenericChainCertificateTrust)
DLLWRPJMP(GenericChainFinalProv)
DLLWRPJMP(HTTPSCertificateTrust)
DLLWRPJMP(HTTPSFinalProv)
DLLWRPJMP(IsCatalogFile)
DLLWRPJMP(mscat32DllRegisterServer)
DLLWRPJMP(mscat32DllUnregisterServer)
DLLWRPJMP(MsCatConstructHashTag)
DLLWRPJMP(MsCatFreeHashTag)
DLLWRPJMP(mssip32DllRegisterServer)
DLLWRPJMP(mssip32DllUnregisterServer)
DLLWRPJMP(OfficeCleanupPolicy)
DLLWRPJMP(OfficeInitializePolicy)
DLLWRPJMP(OpenPersonalTrustDBDialog)
DLLWRPJMP(OpenPersonalTrustDBDialogEx)
DLLWRPJMP(SoftpubAuthenticode)
DLLWRPJMP(SoftpubCheckCert)
DLLWRPJMP(SoftpubCleanup)
DLLWRPJMP(SoftpubDefCertInit)
DLLWRPJMP(SoftpubDllRegisterServer)
DLLWRPJMP(SoftpubDllUnregisterServer)
DLLWRPJMP(SoftpubDumpStructure)
DLLWRPJMP(SoftpubFreeDefUsageCallData)
DLLWRPJMP(SoftpubInitialize)
DLLWRPJMP(SoftpubLoadDefUsageCallData)
DLLWRPJMP(SoftpubLoadMessage)
DLLWRPJMP(SoftpubLoadSignature)
DLLWRPJMP(TrustDecode)
DLLWRPJMP(TrustFindIssuerCertificate)
DLLWRPJMP(TrustFreeDecode)
DLLWRPJMP(TrustIsCertificateSelfSigned)
DLLWRPJMP(TrustOpenStores)
DLLWRPJMP(WintrustAddActionID)
DLLWRPJMP(WintrustAddDefaultForUsage)
DLLWRPJMP(WintrustCertificateTrust)
DLLWRPJMP(WintrustGetDefaultForUsage)
DLLWRPJMP(WintrustGetRegPolicyFlags)
DLLWRPJMP(WintrustLoadFunctionPointers)
DLLWRPJMP(WintrustRemoveActionID)
DLLWRPJMP(WintrustSetDefaultIncludePEPageHashes)
DLLWRPJMP(WintrustSetRegPolicyFlags)
DLLWRPJMP(WinVerifyTrust)
DLLWRPJMP(WinVerifyTrustEx)
DLLWRPJMP(WTHelperCertCheckValidSignature)
DLLWRPJMP(WTHelperCertFindIssuerCertificate)
DLLWRPJMP(WTHelperCertIsSelfSigned)
DLLWRPJMP(WTHelperCheckCertUsage)
DLLWRPJMP(WTHelperGetAgencyInfo)
DLLWRPJMP(WTHelperGetFileHandle)
DLLWRPJMP(WTHelperGetFileHash)
DLLWRPJMP(WTHelperGetFileName)
DLLWRPJMP(WTHelperGetKnownUsages)
DLLWRPJMP(WTHelperGetProvCertFromChain)
DLLWRPJMP(WTHelperGetProvPrivateDataFromChain)
DLLWRPJMP(WTHelperGetProvSignerFromChain)
DLLWRPJMP(WTHelperIsInRootStore)
DLLWRPJMP(WTHelperOpenKnownStores)
DLLWRPJMP(WTHelperProvDataFromStateData)
DLLWRPJMP(WVTAsn1CatMemberInfo2Decode)
DLLWRPJMP(WVTAsn1CatMemberInfo2Encode)
DLLWRPJMP(WVTAsn1CatMemberInfoDecode)
DLLWRPJMP(WVTAsn1CatMemberInfoEncode)
DLLWRPJMP(WVTAsn1CatNameValueDecode)
DLLWRPJMP(WVTAsn1CatNameValueEncode)
DLLWRPJMP(WVTAsn1SpcFinancialCriteriaInfoDecode)
DLLWRPJMP(WVTAsn1SpcFinancialCriteriaInfoEncode)
DLLWRPJMP(WVTAsn1SpcIndirectDataContentDecode)
DLLWRPJMP(WVTAsn1SpcIndirectDataContentEncode)
DLLWRPJMP(WVTAsn1SpcLinkDecode)
DLLWRPJMP(WVTAsn1SpcLinkEncode)
DLLWRPJMP(WVTAsn1SpcMinimalCriteriaInfoDecode)
DLLWRPJMP(WVTAsn1SpcMinimalCriteriaInfoEncode)
DLLWRPJMP(WVTAsn1SpcPeImageDataDecode)
DLLWRPJMP(WVTAsn1SpcPeImageDataEncode)
DLLWRPJMP(WVTAsn1SpcSigInfoDecode)
DLLWRPJMP(WVTAsn1SpcSigInfoEncode)
DLLWRPJMP(WVTAsn1SpcSpAgencyInfoDecode)
DLLWRPJMP(WVTAsn1SpcSpAgencyInfoEncode)
DLLWRPJMP(WVTAsn1SpcSpOpusInfoDecode)
DLLWRPJMP(WVTAsn1SpcSpOpusInfoEncode)
DLLWRPJMP(WVTAsn1SpcStatementTypeDecode)
DLLWRPJMP(WVTAsn1SpcStatementTypeEncode)
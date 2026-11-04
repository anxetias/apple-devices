// rea decompile_all
// name: UARPMetaDataTLVBackDeploy::tlvFromType:length:value:
// address: 0x23e4a4
// body: available
// range: 0x23e4a4-0x23e6c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23e6be to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID UARPMetaDataTLVBackDeploy::tlvFromType_length_value_
             (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4,void *param_5)

{
  undefined8 uVar1;
  ID IVar2;
  class_t *pcVar3;
  
  switch(param_3) {
  case 0x88b29100:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationRequiredBackDeploy;
    break;
  case 0x88b29101:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationPayloadTagBackDeploy;
    break;
  case 0x88b29102:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationSuperBinaryAssetIDBackDeploy;
    break;
  case 0x88b29103:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationManifestPrefixBackDeploy;
    break;
  case 0x88b29104:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationBoardIDBackDeploy;
    break;
  case 0x88b29105:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationChipIDBackDeploy;
    break;
  case 0x88b29106:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationECIDBackDeploy;
    break;
  case 0x88b29107:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationNonceBackDeploy;
    break;
  case 0x88b29108:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationNonceHashBackDeploy;
    break;
  case 0x88b29109:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationSecurityDomainBackDeploy;
    break;
  case 0x88b2910a:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationSecurityModeBackDeploy;
    break;
  case 0x88b2910b:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationProductionModeBackDeploy;
    break;
  case 0x88b2910c:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationChipEpochBackDeploy;
    break;
  case 0x88b2910d:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationEnableMixMatchBackDeploy;
    break;
  case 0x88b2910e:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationSuperBinaryPayloadIndexBackDeploy;
    break;
  case 0x88b2910f:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationChipRevisionBackDeploy;
    break;
  case 0x88b29110:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationFTABPayloadBackDeploy;
    break;
  case 0x88b29111:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationFTABSubfileTagBackDeploy;
    break;
  case 0x88b29112:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationFTABSubfileLongnameBackDeploy;
    break;
  case 0x88b29113:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationFTABSubfileDigestBackDeploy;
    break;
  case 0x88b29114:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationFTABSubfileHashAlgorithmBackDeploy;
    break;
  case 0x88b29115:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationFTABSubfileESECBackDeploy;
    break;
  case 0x88b29116:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationFTABSubfileEPROBackDeploy;
    break;
  case 0x88b29117:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationFTABSubfileTrustedBackDeploy;
    break;
  case 0x88b29118:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationSoCLiveNonceBackDeploy;
    break;
  default:
    uVar1 = _objc_alloc(&objc::class_t::UARPMetaDataTLVBackDeploy);
    uVar1 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar1,"initWithType:length:value:",param_3,param_4,param_5);
    goto LAB_0023e6b1;
  case 0x88b29121:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationPrefixNeedsLogicalUnitNumberBackDeploy;
    break;
  case 0x88b29122:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationSuffixNeedsLogicalUnitNumberBackDeploy;
    break;
  case 0x88b29125:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationLogicalUnitNumberBackDeploy;
    break;
  case 0x88b29126:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationTicketNeedsLogicalUnitNumberBackDeploy;
    break;
  case 0x88b29128:
    pcVar3 = &objc::class_t::UARPTLVHostPersonalizationRequiredBackDeploy;
    break;
  case 0x88b29129:
    pcVar3 = &objc::class_t::UARPTLVRequiredPersonalizationOptionBackDeploy;
    break;
  case 0x88b29130:
    pcVar3 = &objc::class_t::UARPTLVPersonalizedManifestBackDeploy;
    break;
  case 0x88b29131:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationLifeBackDeploy;
    break;
  case 0x88b29132:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationProvisioningBackDeploy;
    break;
  case 0x88b29133:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationManifestEpochBackDeploy;
    break;
  case 0x88b29134:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationManifestSuffixBackDeploy;
    break;
  case 0x88b29135:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationECIDDataBackDeploy;
    break;
  case 0x88b29136:
    pcVar3 = &objc::class_t::UARPTLVPersonalizationFTABSubfileDigestFilenameBackDeploy;
  }
  uVar1 = (*(code *)PTR__objc_msgSend_00441098)(pcVar3,"tlvWithLength:value:",param_4,param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
LAB_0023e6b1:
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}


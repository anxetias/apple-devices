// rea decompile_all
// name: ___42+[UARPMetaDataTLVBackDeploy_metaDataTable]_block_invoke
// address: 0x23eaac
// body: available
// range: 0x23eaac-0x23f1b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23f1b0 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___42__UARPMetaDataTLVBackDeploy_metaDataTable__block_invoke(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableArray,"new");
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationRequiredBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationPayloadTagBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationSuperBinaryAssetIDBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationManifestPrefixBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationBoardIDBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationChipIDBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationECIDBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationECIDDataBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationNonceBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationNonceHashBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationSecurityDomainBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationSecurityModeBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationProductionModeBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationChipEpochBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationEnableMixMatchBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationSuperBinaryPayloadIndexBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationChipRevisionBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationFTABSubfileTagBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationFTABSubfileLongnameBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationFTABSubfileDigestBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationFTABSubfileHashAlgorithmBackDeploy
                            ,"metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationFTABSubfileESECBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationFTABSubfileEPROBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationFTABSubfileTrustedBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationSoCLiveNonceBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::
                             UARPTLVPersonalizationPrefixNeedsLogicalUnitNumberBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::
                             UARPTLVPersonalizationSuffixNeedsLogicalUnitNumberBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationLogicalUnitNumberBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::
                             UARPTLVPersonalizationTicketNeedsLogicalUnitNumberBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVHostPersonalizationRequiredBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVRequiredPersonalizationOptionBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationFTABPayloadBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizedManifestBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationLifeBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationProvisioningBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationManifestEpochBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationManifestSuffixBackDeploy,
                            "metaDataTableEntry");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"addObject:",uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)puVar1)(&_OBJC_CLASS___NSArray,"arrayWithArray:",uVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = _metaDataTable_table;
  _metaDataTable_table = uVar4;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  return;
}


// rea decompile_all
// name: UARPSuperBinaryBackDeploy::personalizedMetaData
// address: 0x22c4a9
// body: available
// range: 0x22c4a9-0x22c907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22c8fe to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x22c903 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID UARPSuperBinaryBackDeploy::personalizedMetaData(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  code *pcVar7;
  long lVar8;
  undefined8 local_1e8;
  long lStack_1e0;
  long *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  long lStack_1a0;
  long *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ID local_160;
  long local_158;
  long local_150;
  long local_148;
  char *local_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  pcVar7 = (code *)PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x48),"removeAllObjects");
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = (long *)0x0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_160 = param_1;
  local_148 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x40));
  local_150 = (*pcVar7)(local_148,"countByEnumeratingWithState:objects:count:",&local_1e8,local_b8,
                        0x10);
  if (local_150 != 0) {
    local_158 = *local_1d8;
    do {
      local_140 = "addObject:";
      lVar8 = 0;
      do {
        if (*local_1d8 != local_158) {
          _objc_enumerationMutation(local_148);
        }
        puVar1 = PTR__objc_msgSend_00441098;
        uVar5 = *(undefined8 *)(lStack_1e0 + lVar8 * 8);
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                          (&objc::class_t::UARPTLVHostPersonalizationRequiredBackDeploy,"class");
        cVar2 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar4);
        if (cVar2 == '\0') {
          uVar4 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationManifestPrefixBackDeploy,
                                    "class");
          cVar2 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar4);
          if (cVar2 == '\0') {
            uVar4 = (*(code *)puVar1)(&objc::class_t::
                                       UARPTLVPersonalizationTicketNeedsLogicalUnitNumberBackDeploy,
                                      "class");
            cVar2 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar4);
            if (cVar2 == '\0') {
              uVar4 = (*(code *)puVar1)(&objc::class_t::
                                         UARPTLVPersonalizationPrefixNeedsLogicalUnitNumberBackDeploy
                                        ,"class");
              cVar2 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar4);
              if (cVar2 == '\0') {
                uVar4 = (*(code *)puVar1)(&objc::class_t::
                                           UARPTLVPersonalizationSuffixNeedsLogicalUnitNumberBackDeploy
                                          ,"class");
                cVar2 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar4);
                if (cVar2 == '\0') {
                  uVar4 = (*(code *)puVar1)(&objc::class_t::
                                             UARPTLVPersonalizationFTABPayloadBackDeploy,"class");
                  cVar2 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar4);
                  if (cVar2 == '\0') {
                    uVar4 = (*(code *)puVar1)(&objc::class_t::
                                               UARPTLVRequiredPersonalizationOptionBackDeploy,
                                              "class");
                    cVar2 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar4);
                    if (cVar2 == '\0') {
                      (*(code *)puVar1)(*(undefined8 *)(local_160 + 0x48),local_140,uVar5);
                    }
                  }
                }
              }
            }
          }
        }
        pcVar7 = (code *)PTR__objc_msgSend_00441098;
        lVar8 = lVar8 + 1;
      } while (local_150 != lVar8);
      local_150 = (*(code *)PTR__objc_msgSend_00441098)
                            (local_148,"countByEnumeratingWithState:objects:count:",&local_1e8,
                             local_b8,0x10);
    } while (local_150 != 0);
  }
  (*(code *)PTR__objc_release_004410a0)(local_148);
  IVar6 = local_160;
  if (*(long *)(local_160 + 0x60) != 0) {
    uVar3 = (*pcVar7)(*(long *)(local_160 + 0x60),"length");
    uVar5 = (*pcVar7)(*(undefined8 *)(IVar6 + 0x60),"bytes");
    uVar5 = (*pcVar7)(&objc::class_t::UARPMetaDataTLVBackDeploy,"tlvFromType:length:value:",
                      0x88b29130,uVar3,uVar5);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
    if (lVar8 != 0) {
      (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(IVar6 + 0x48),"addObject:",lVar8);
    }
    (*(code *)PTR__objc_release_004410a0)(lVar8);
  }
  local_158 = (*pcVar7)(&_OBJC_CLASS___NSMutableData,"new");
  local_1a8 = 0;
  lStack_1a0 = 0;
  local_198 = (long *)0x0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_140 = (char *)(*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(IVar6 + 0x48));
  local_150 = (*pcVar7)(local_140,"countByEnumeratingWithState:objects:count:",&local_1a8,local_138,
                        0x10);
  if (local_150 != 0) {
    local_148 = *local_198;
    do {
      lVar8 = 0;
      do {
        if (*local_198 != local_148) {
          _objc_enumerationMutation(local_140);
        }
        puVar1 = PTR__objc_msgSend_00441098;
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                          (*(undefined8 *)(lStack_1a0 + lVar8 * 8),"generateTLV");
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)puVar1)(local_158,"appendData:",uVar5);
        (*(code *)PTR__objc_release_004410a0)(uVar5);
        lVar8 = lVar8 + 1;
      } while (local_150 != lVar8);
      local_150 = (*(code *)PTR__objc_msgSend_00441098)
                            (local_140,"countByEnumeratingWithState:objects:count:",&local_1a8,
                             local_138,0x10);
    } while (local_150 != 0);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_140);
  lVar8 = local_158;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSData,"dataWithData:",local_158);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(lVar8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar6 = _objc_autoreleaseReturnValue(uVar5);
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


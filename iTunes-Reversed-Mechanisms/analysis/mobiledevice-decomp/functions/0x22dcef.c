// rea decompile_all
// name: UARPSuperBinaryBackDeploy::processTLVsForPersonalization
// address: 0x22dcef
// body: available
// range: 0x22dcef-0x22e1f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22e1f2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void UARPSuperBinaryBackDeploy::processTLVsForPersonalization(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_178;
  long lStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  char *local_138;
  long local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  long local_e0;
  undefined8 local_d8;
  char *local_d0;
  char *local_c8;
  ID local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_178 = 0;
  lStack_170 = 0;
  local_168 = (long *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_c0 = param_1;
  local_d8 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x40));
  local_e0 = (*(code *)PTR__objc_msgSend_00441098)
                       (local_d8,"countByEnumeratingWithState:objects:count:",&local_178,local_b8,
                        0x10);
  if (local_e0 != 0) {
    local_130 = *local_168;
    do {
      local_138 = "isKindOfClass:";
      local_128 = "isRequired";
      local_108 = "ticketPrefix";
      local_100 = "manifestSuffix";
      local_f8 = "ticketNeedsLogicalUnitNumber";
      local_f0 = "prefixNeedsLogicalUnitNumber";
      local_d0 = "suffixNeedsLogicalUnitNumber";
      local_e8 = "addObject:";
      local_120 = "life";
      local_118 = "provisioning";
      local_110 = "manifestEpoch";
      lVar10 = 0;
      local_c8 = "class";
      do {
        if (*local_168 != local_130) {
          _objc_enumerationMutation(local_d8);
        }
        pcVar4 = local_c8;
        puVar2 = PTR__objc_msgSend_00441098;
        uVar1 = *(undefined8 *)(lStack_170 + lVar10 * 8);
        uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                          (&objc::class_t::UARPTLVHostPersonalizationRequiredBackDeploy,local_c8);
        pcVar3 = local_138;
        cVar5 = (*(code *)puVar2)(uVar1,local_138,uVar7);
        if (cVar5 == '\0') {
          uVar7 = (*(code *)puVar2)(&objc::class_t::UARPTLVPersonalizationManifestPrefixBackDeploy,
                                    pcVar4);
          cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
          if (cVar5 == '\0') {
            uVar7 = (*(code *)puVar2)(&objc::class_t::UARPTLVPersonalizationManifestSuffixBackDeploy
                                      ,pcVar4);
            cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
            if (cVar5 == '\0') {
              uVar7 = (*(code *)puVar2)(&objc::class_t::
                                         UARPTLVPersonalizationTicketNeedsLogicalUnitNumberBackDeploy
                                        ,pcVar4);
              cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
              if (cVar5 == '\0') {
                uVar7 = (*(code *)puVar2)(&objc::class_t::
                                           UARPTLVPersonalizationPrefixNeedsLogicalUnitNumberBackDeploy
                                          ,pcVar4);
                cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
                if (cVar5 == '\0') {
                  uVar7 = (*(code *)puVar2)(&objc::class_t::
                                             UARPTLVPersonalizationSuffixNeedsLogicalUnitNumberBackDeploy
                                            ,pcVar4);
                  cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
                  if (cVar5 == '\0') {
                    uVar7 = (*(code *)puVar2)(&objc::class_t::
                                               UARPTLVPersonalizationSuffixNeedsLogicalUnitNumberBackDeploy
                                              ,pcVar4);
                    cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
                    if (cVar5 == '\0') {
                      uVar7 = (*(code *)puVar2)(&objc::class_t::
                                                 UARPTLVPersonalizationSuffixNeedsLogicalUnitNumberBackDeploy
                                                ,pcVar4);
                      cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
                      if (cVar5 == '\0') {
                        uVar7 = (*(code *)puVar2)(&objc::class_t::
                                                   UARPTLVPersonalizationFTABPayloadBackDeploy,
                                                  pcVar4);
                        cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
                        if (cVar5 != '\0') {
                          (*(code *)puVar2)(*(undefined8 *)(local_c0 + 0x98),local_e8,uVar1);
                        }
                        goto LAB_0022df80;
                      }
                    }
                  }
                  cVar5 = (*(code *)puVar2)(uVar1,local_d0);
                  *(bool *)(local_c0 + 0x92) = cVar5 != '\0';
                }
                else {
                  cVar5 = (*(code *)puVar2)(uVar1,local_f0);
                  *(bool *)(local_c0 + 0x91) = cVar5 != '\0';
                }
              }
              else {
                cVar5 = (*(code *)puVar2)(uVar1,local_f8);
                *(bool *)(local_c0 + 0x90) = cVar5 != '\0';
              }
              goto LAB_0022df80;
            }
            uVar8 = (*(code *)PTR__objc_retain_004410a8)(uVar1);
            uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,local_100);
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
            uVar7 = *(undefined8 *)(local_c0 + 0x88);
            *(undefined8 *)(local_c0 + 0x88) = uVar9;
          }
          else {
            uVar8 = (*(code *)PTR__objc_retain_004410a8)(uVar1);
            uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,local_108);
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
            uVar7 = *(undefined8 *)(local_c0 + 0x80);
            *(undefined8 *)(local_c0 + 0x80) = uVar9;
          }
          (*(code *)PTR__objc_release_004410a0)(uVar7);
          (*(code *)PTR__objc_release_004410a0)(uVar8);
        }
        else {
          cVar5 = (*(code *)puVar2)(uVar1,local_128);
          *(bool *)(local_c0 + 0x78) = cVar5 != '\0';
        }
LAB_0022df80:
        uVar7 = (*(code *)puVar2)(&objc::class_t::UARPTLVPersonalizationLifeBackDeploy,local_c8);
        cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
        if (cVar5 != '\0') {
          uVar6 = (*(code *)puVar2)(uVar1,local_120);
          *(undefined1 *)(local_c0 + 0xa3) = uVar6;
        }
        uVar7 = (*(code *)puVar2)(&objc::class_t::UARPTLVPersonalizationProvisioningBackDeploy,
                                  local_c8);
        cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
        if (cVar5 != '\0') {
          cVar5 = (*(code *)puVar2)(uVar1,local_118);
          *(bool *)(local_c0 + 0xa4) = cVar5 != '\0';
        }
        uVar7 = (*(code *)puVar2)(&objc::class_t::UARPTLVPersonalizationManifestEpochBackDeploy,
                                  local_c8);
        cVar5 = (*(code *)puVar2)(uVar1,pcVar3,uVar7);
        if (cVar5 != '\0') {
          uVar6 = (*(code *)puVar2)(uVar1,local_110);
          *(undefined1 *)(local_c0 + 0xa5) = uVar6;
        }
        lVar10 = lVar10 + 1;
      } while (local_e0 != lVar10);
      local_e0 = (*(code *)PTR__objc_msgSend_00441098)
                           (local_d8,"countByEnumeratingWithState:objects:count:",&local_178,
                            local_b8,0x10);
    } while (local_e0 != 0);
  }
  (*(code *)PTR__objc_release_004410a0)(local_d8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


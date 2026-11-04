// rea decompile_all
// name: UARPSuperBinaryPayloadBackDeploy::processTLVsForPersonalization
// address: 0x2354a7
// body: available
// range: 0x2354a7-0x2357d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2357cd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void UARPSuperBinaryPayloadBackDeploy::processTLVsForPersonalization(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_158;
  long lStack_150;
  long *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  char *local_110;
  long local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  long local_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_158 = 0;
  lStack_150 = 0;
  local_148 = (long *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_c0 = param_1;
  local_c8 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 8));
  local_d0 = (*(code *)PTR__objc_msgSend_00441098)
                       (local_c8,"countByEnumeratingWithState:objects:count:",&local_158,local_b8,
                        0x10);
  puVar1 = PTR__objc_msgSend_00441098;
  if (local_d0 != 0) {
    local_108 = *local_148;
    do {
      local_110 = "isKindOfClass:";
      local_100 = "isRequired";
      local_f8 = "ticketPrefix";
      local_f0 = "ticketNeedsLogicalUnitNumber";
      local_e8 = "prefixNeedsLogicalUnitNumber";
      local_e0 = "suffixNeedsLogicalUnitNumber";
      local_d8 = "addObject:";
      lVar8 = 0;
      do {
        if (*local_148 != local_108) {
          _objc_enumerationMutation(local_c8);
        }
        uVar6 = *(undefined8 *)(lStack_150 + lVar8 * 8);
        uVar5 = (*(code *)puVar1)(&objc::class_t::UARPTLVHostPersonalizationRequiredBackDeploy,
                                  "class");
        pcVar3 = local_110;
        cVar4 = (*(code *)puVar1)(uVar6,local_110,uVar5);
        if (cVar4 == '\0') {
          uVar5 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationManifestPrefixBackDeploy,
                                    "class");
          cVar4 = (*(code *)puVar1)(uVar6,pcVar3,uVar5);
          if (cVar4 == '\0') {
            uVar5 = (*(code *)puVar1)(&objc::class_t::
                                       UARPTLVPersonalizationTicketNeedsLogicalUnitNumberBackDeploy,
                                      "class");
            cVar4 = (*(code *)puVar1)(uVar6,pcVar3,uVar5);
            if (cVar4 == '\0') {
              uVar5 = (*(code *)puVar1)(&objc::class_t::
                                         UARPTLVPersonalizationPrefixNeedsLogicalUnitNumberBackDeploy
                                        ,"class");
              cVar4 = (*(code *)puVar1)(uVar6,pcVar3,uVar5);
              if (cVar4 == '\0') {
                uVar5 = (*(code *)puVar1)(&objc::class_t::
                                           UARPTLVPersonalizationSuffixNeedsLogicalUnitNumberBackDeploy
                                          ,"class");
                cVar4 = (*(code *)puVar1)(uVar6,pcVar3,uVar5);
                if (cVar4 == '\0') {
                  uVar5 = (*(code *)puVar1)(&objc::class_t::
                                             UARPTLVPersonalizationFTABPayloadBackDeploy,"class");
                  cVar4 = (*(code *)puVar1)(uVar6,pcVar3,uVar5);
                  if (cVar4 != '\0') {
                    (*(code *)puVar1)(*(undefined8 *)(local_c0 + 0x50),local_d8,uVar6);
                  }
                }
                else {
                  cVar4 = (*(code *)puVar1)(uVar6,local_e0);
                  *(bool *)(local_c0 + 0x49) = cVar4 != '\0';
                }
              }
              else {
                cVar4 = (*(code *)puVar1)(uVar6,local_e8);
                *(bool *)(local_c0 + 0x4a) = cVar4 != '\0';
              }
            }
            else {
              cVar4 = (*(code *)puVar1)(uVar6,local_f0);
              *(bool *)(local_c0 + 0x48) = cVar4 != '\0';
            }
          }
          else {
            uVar5 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
            uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,local_f8);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
            uVar6 = *(undefined8 *)(local_c0 + 0x40);
            *(undefined8 *)(local_c0 + 0x40) = uVar7;
            puVar2 = PTR__objc_release_004410a0;
            (*(code *)PTR__objc_release_004410a0)(uVar6);
            (*(code *)puVar2)(uVar5);
          }
        }
        else {
          cVar4 = (*(code *)puVar1)(uVar6,local_100);
          *(bool *)(local_c0 + 0x10) = cVar4 != '\0';
        }
        lVar8 = lVar8 + 1;
      } while (local_d0 != lVar8);
      local_d0 = (*(code *)puVar1)(local_c8,"countByEnumeratingWithState:objects:count:",&local_158,
                                   local_b8,0x10);
    } while (local_d0 != 0);
  }
  (*(code *)PTR__objc_release_004410a0)(local_c8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// rea decompile_all
// name: UARPSuperBinaryBackDeploy::personalizeSuperBinary:signingServer:ssoOnly:
// address: 0x22ca87
// body: available
// range: 0x22ca87-0x22cf88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22cf7f to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x22cf84 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x24 bytes */

ID UARPSuperBinaryBackDeploy::personalizeSuperBinary_signingServer_ssoOnly_
             (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,char param_5)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  code *pcVar7;
  undefined8 local_1a8;
  long lStack_1a0;
  long *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_168;
  long local_160;
  long local_158;
  char *local_150;
  char *local_148;
  char *local_140;
  char *local_138;
  char *local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  long local_f0;
  char *local_e8;
  unsigned_long_long local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_bc;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_e0 = param_3;
  local_d0 = (*(code *)PTR__objc_retain_004410a8)(param_4);
  local_1a8 = 0;
  lStack_1a0 = 0;
  local_198 = (long *)0x0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uVar3 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x50));
  local_f0 = (*(code *)PTR__objc_msgSend_00441098)
                       (uVar3,"countByEnumeratingWithState:objects:count:",&local_1a8,local_b8,0x10)
  ;
  puVar1 = PTR__objc_msgSend_00441098;
  local_bc = (int)param_5;
  if (local_f0 == 0) {
    local_d8 = "needsHostPersonalization";
  }
  else {
    local_158 = *local_198;
    local_c8 = uVar3;
    do {
      local_d8 = "needsHostPersonalization";
      local_150 = "setBoardID:";
      local_148 = "setChipID:";
      local_140 = "setEcID:";
      local_138 = "setNonce:";
      local_130 = "setProductionMode:";
      local_128 = "setSecurityDomain:";
      local_120 = "setSecurityMode:";
      local_118 = "setTrustedOverride:";
      local_110 = "setDemote:";
      local_108 = "composeTSSRequest:";
      local_e8 = "tag";
      local_100 = "tssRequest";
      local_f8 = "queryTatsuSigningServer:ssoOnly:error:";
      lVar5 = 0;
      pcVar7 = (code *)PTR__objc_release_004410a0;
      do {
        if (*local_198 != local_158) {
          _objc_enumerationMutation(local_c8);
        }
        uVar3 = *(undefined8 *)(lStack_1a0 + lVar5 * 8);
        local_168 = lVar5;
        cVar2 = (*(code *)puVar1)(uVar3,local_d8);
        if (cVar2 != '\0') {
          (*(code *)puVar1)(uVar3,local_150,*(undefined4 *)(param_1 + 0xa8));
          (*(code *)puVar1)(uVar3,local_148,*(undefined4 *)(param_1 + 0xac));
          (*(code *)puVar1)(uVar3,local_140,*(undefined8 *)(param_1 + 0xb0));
          (*(code *)puVar1)(uVar3,local_138,*(undefined8 *)(param_1 + 0xc0));
          (*(code *)puVar1)(uVar3,local_130,*(undefined1 *)(param_1 + 0xa0));
          (*(code *)puVar1)(uVar3,local_128,*(undefined1 *)(param_1 + 0xa1));
          (*(code *)puVar1)(uVar3,local_120,*(undefined1 *)(param_1 + 0xa2));
          (*(code *)puVar1)(uVar3,local_118,*(undefined8 *)(param_1 + 200));
          (*(code *)puVar1)(uVar3,local_110,*(undefined8 *)(param_1 + 0xd0));
          (*(code *)puVar1)(param_1,"log:",&cf_Personalizing__,uVar3);
          uVar4 = (*(code *)puVar1)(uVar3,local_108,local_e0);
          lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
          if (lVar5 != 0) {
            local_160 = lVar5;
            uVar4 = (*(code *)puVar1)(uVar3,local_e8);
            uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
            (*(code *)puVar1)(param_1,"log:",&cf_TSSRequestOptionsforpayload__,uVar4);
            (*(code *)PTR__objc_release_004410a0)(uVar4);
            uVar4 = (*(code *)puVar1)(uVar3,local_100);
            uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
            (*(code *)puVar1)(param_1,"log:",&cf___,uVar4);
            pcVar7 = (code *)PTR__objc_release_004410a0;
            (*(code *)PTR__objc_release_004410a0)(uVar4);
            cVar2 = (*(code *)puVar1)(uVar3,local_f8,local_d0,local_bc,0);
            lVar5 = local_160;
            if (cVar2 != '\0') goto LAB_0022ce39;
          }
          (*(code *)PTR__objc_release_004410a0)(lVar5);
          uVar3 = 0;
          uVar4 = local_c8;
          goto LAB_0022cf48;
        }
        uVar3 = (*(code *)puVar1)(uVar3,local_e8);
        lVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
        (*(code *)puVar1)(param_1,"log:",&cf_HostPersonalizationnotrequiredforpayload__,lVar5);
LAB_0022ce39:
        (*pcVar7)(lVar5);
        uVar3 = local_c8;
        lVar5 = local_168 + 1;
      } while (local_f0 != lVar5);
      local_f0 = (*(code *)puVar1)(local_c8,"countByEnumeratingWithState:objects:count:",&local_1a8,
                                   local_b8);
    } while (local_f0 != 0);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  cVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_1,local_d8);
  puVar1 = PTR__objc_msgSend_00441098;
  if (cVar2 == '\x01') {
    uVar3 = 0;
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (param_1,"composeTSSRequest:asMeasurement:",local_e0,0);
    _objc_unsafeClaimAutoreleasedReturnValue(uVar4);
    cVar2 = (*(code *)puVar1)(param_1,"queryTatsuSigningServer:ssoOnly:error:",local_d0,local_bc,0);
    if (cVar2 == '\0') goto LAB_0022cf4e;
  }
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"generatePersonalizedSuperBinary");
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar5 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (*(code *)PTR__objc_retain_004410a8)();
    uVar4 = uVar3;
  }
LAB_0022cf48:
  (*(code *)PTR__objc_release_004410a0)(uVar4);
LAB_0022cf4e:
  (*(code *)PTR__objc_release_004410a0)(local_d0);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar6 = _objc_autoreleaseReturnValue(uVar3);
  return IVar6;
}


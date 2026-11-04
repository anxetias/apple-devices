// rea decompile_all
// name: FTABFileBackDeploy::writeToDestination
// address: 0x238fa1
// body: available
// range: 0x238fa1-0x23951b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x239517 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

char FTABFileBackDeploy::writeToDestination(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int iVar10;
  char *pcVar11;
  long lVar12;
  code *pcVar13;
  undefined8 local_238;
  long lStack_230;
  long *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  long lStack_1f0;
  long *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  long local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ID local_190;
  char *local_188;
  long local_180;
  char *local_178;
  undefined8 local_170;
  undefined1 local_168 [128];
  undefined1 local_e8 [128];
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_68 = *(undefined8 *)(param_1 + 0x28);
  puVar6 = (undefined8 *)
           (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x48),"bytes");
  local_60 = *puVar6;
  iVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x10),"count");
  local_190 = param_1;
  if (*(long *)(param_1 + 0x58) == 0) {
    local_178 = (char *)0x0;
    iVar10 = 0;
  }
  else {
    iVar10 = iVar4 * 0x10 + 0x30;
    local_178 = (char *)(*(code *)PTR__objc_msgSend_00441098)
                                  (*(long *)(param_1 + 0x58),"dataLength");
  }
  IVar2 = local_190;
  puVar1 = PTR__objc_msgSend_00441098;
  local_54 = SUB84(local_178,0);
  local_58 = iVar10;
  puVar6 = (undefined8 *)
           (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(local_190 + 0x50),"bytes");
  uStack_48 = *puVar6;
  uVar5 = (*(code *)puVar1)(*(undefined8 *)(IVar2 + 0x10),"count");
  local_40 = CONCAT44(local_40._4_4_,uVar5);
  cVar3 = (*(code *)puVar1)(IVar2,"writeBytes:length:",&local_68,0x30);
  if (cVar3 == '\0') {
    local_170 = _os_log_create("com.apple.accessoryupdater.ftab","writing");
    cVar3 = _os_log_type_enabled(local_170,0x10);
    if (cVar3 != '\0') {
      __FTABFileBackDeploy_writeToDestination__cold_4(local_170);
    }
LAB_00239483:
    cVar3 = '\0';
  }
  else {
    local_208 = 0;
    uStack_200 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_228 = (long *)0x0;
    uStack_220 = 0;
    local_238 = 0;
    lStack_230 = 0;
    local_170 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(IVar2 + 0x10));
    local_180 = (*(code *)PTR__objc_msgSend_00441098)
                          (local_170,"countByEnumeratingWithState:objects:count:",&local_238,
                           local_e8,0x10);
    if (local_180 != 0) {
      iVar4 = iVar4 * 0x10 + (int)local_178 + 0x30;
      local_1b0 = *local_228;
      do {
        local_178 = "tag";
        local_188 = "UTF8String";
        lVar12 = 0;
        pcVar13 = (code *)PTR__objc_msgSend_00441098;
        do {
          if (*local_228 != local_1b0) {
            _objc_enumerationMutation(local_170);
          }
          uVar9 = *(undefined8 *)(lStack_230 + lVar12 * 8);
          local_1a8 = 0;
          uStack_1a0 = 0;
          uVar7 = (*pcVar13)(uVar9,local_178);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar7 = _objc_retainAutorelease(uVar7);
          puVar8 = (undefined4 *)(*(code *)PTR__objc_msgSend_00441098)(uVar7,local_188);
          pcVar13 = (code *)PTR__objc_msgSend_00441098;
          local_1a8 = CONCAT44(local_1a8._4_4_,*puVar8);
          (*(code *)PTR__objc_release_004410a0)(uVar7);
          local_1a8 = CONCAT44(iVar4,(undefined4)local_1a8);
          uVar5 = (*pcVar13)(uVar9,"dataLength");
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar5);
          cVar3 = (*pcVar13)(local_190,"writeBytes:length:",&local_1a8,0x10);
          if (cVar3 == '\0') {
            uVar7 = _os_log_create("com.apple.accessoryupdater.ftab","writing");
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              __FTABFileBackDeploy_writeToDestination__cold_1(uVar9,local_178,uVar7);
            }
            goto LAB_0023947d;
          }
          iVar10 = (*pcVar13)(uVar9,"dataLength");
          iVar4 = iVar4 + iVar10;
          lVar12 = lVar12 + 1;
        } while (local_180 != lVar12);
        local_180 = (*pcVar13)(local_170,"countByEnumeratingWithState:objects:count:",&local_238,
                               local_e8,0x10);
      } while (local_180 != 0);
    }
    (*(code *)PTR__objc_release_004410a0)(local_170);
    IVar2 = local_190;
    puVar1 = PTR__objc_msgSend_00441098;
    if (*(long *)(local_190 + 0x58) != 0) {
      uVar9 = (*(code *)PTR__objc_msgSend_00441098)(*(long *)(local_190 + 0x58),"dataPointer");
      uVar5 = (*(code *)puVar1)(*(undefined8 *)(IVar2 + 0x58),"dataLength");
      cVar3 = (*(code *)puVar1)(IVar2,"writeBytes:length:",uVar9,uVar5);
      if (cVar3 == '\0') {
        local_170 = _os_log_create("com.apple.accessoryupdater.ftab","writing");
        cVar3 = _os_log_type_enabled(local_170,0x10);
        if (cVar3 != '\0') {
          __FTABFileBackDeploy_writeToDestination__cold_2(local_170);
        }
        goto LAB_00239483;
      }
    }
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e8 = (long *)0x0;
    uStack_1e0 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_170 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(IVar2 + 0x10));
    local_188 = (char *)(*(code *)PTR__objc_msgSend_00441098)
                                  (local_170,"countByEnumeratingWithState:objects:count:",&local_1f8
                                   ,local_168,0x10);
    cVar3 = '\x01';
    if (local_188 != (char *)0x0) {
      local_180 = *local_1e8;
      do {
        local_178 = "dataPointer";
        pcVar11 = (char *)0x0;
        do {
          if (*local_1e8 != local_180) {
            _objc_enumerationMutation(local_170);
          }
          puVar1 = PTR__objc_msgSend_00441098;
          uVar9 = *(undefined8 *)(lStack_1f0 + (long)pcVar11 * 8);
          uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,local_178);
          uVar5 = (*(code *)puVar1)(uVar9,"dataLength");
          cVar3 = (*(code *)puVar1)(local_190,"writeBytes:length:",uVar7,uVar5);
          if (cVar3 == '\0') {
            uVar7 = _os_log_create("com.apple.accessoryupdater.ftab","writing");
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              __FTABFileBackDeploy_writeToDestination__cold_3(uVar9,uVar7);
            }
LAB_0023947d:
            (*(code *)PTR__objc_release_004410a0)(uVar7);
            goto LAB_00239483;
          }
          pcVar11 = pcVar11 + 1;
        } while (local_188 != pcVar11);
        local_188 = (char *)(*(code *)PTR__objc_msgSend_00441098)
                                      (local_170,"countByEnumeratingWithState:objects:count:",
                                       &local_1f8,local_168,0x10);
      } while (local_188 != (char *)0x0);
      cVar3 = '\x01';
    }
  }
  (*(code *)PTR__objc_release_004410a0)(local_170);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar3;
}


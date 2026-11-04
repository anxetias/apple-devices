// rea decompile_all
// name: UARPSuperBinaryBackDeploy::composeTSSRequest:asMeasurement:
// address: 0x22e24a
// body: available
// range: 0x22e24a-0x22e9c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22e9bf to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x22e9c4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x1c bytes */

ID UARPSuperBinaryBackDeploy::composeTSSRequest_asMeasurement_
             (ID param_1,SEL param_2,unsigned_long_long param_3,char param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined7 in_register_00000009;
  char *pcVar10;
  code *pcVar11;
  unsigned_long_long uVar12;
  long lVar13;
  undefined8 local_1f8;
  long lStack_1f0;
  long *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  char *local_1b0;
  long local_1a8;
  char *local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  char *local_158;
  char *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined8 local_100;
  unsigned_long_long local_f8;
  char *local_f0;
  cfstringStruct *local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  long local_c8;
  char *local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_dc = (undefined4)CONCAT71(in_register_00000009,param_4);
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar8);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableDictionary,"new");
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  (*(code *)puVar2)(uVar8);
  uVar8 = (*(code *)puVar1)(param_1,"requiredTSSOptions");
  local_c8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableString,"new");
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  (*(code *)puVar2)(uVar8);
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x70),"appendFormat:",&cf___,
                    *(undefined8 *)(param_1 + 0x80));
  if (*(char *)(param_1 + 0x90) != '\0') {
    (*(code *)PTR__objc_msgSend_00441098)
              (*(undefined8 *)(param_1 + 0x70),"appendFormat:",&cf__lu,param_3);
  }
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x70),"appendFormat:",&cf__Ticket);
  uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableString,"new");
  local_f8 = param_3;
  (*(code *)puVar1)(uVar8,"appendFormat:",&cf____,*(undefined8 *)(param_1 + 0x70));
  uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  local_100 = uVar8;
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x68),"setObject:forKeyedSubscript:",uVar7,uVar8);
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = (long *)0x0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  lStack_1f0 = 0;
  local_d8 = (*(code *)PTR__objc_retain_004410a8)(local_c8);
  local_c8 = (*(code *)puVar1)(local_d8,"countByEnumeratingWithState:objects:count:",&local_1f8,
                               local_b8,0x10);
  pcVar11 = (code *)PTR__objc_release_004410a0;
  uVar12 = local_f8;
  if (local_c8 != 0) {
    local_1a8 = *local_1e8;
    local_148 = &cf_ManifestEpoch;
    local_140 = &cf_Provisioning;
    local_138 = &cf_Life;
    local_130 = &cf_SecurityMode;
    local_128 = &cf_SecurityDomain;
    local_120 = &cf_ProductionMode;
    local_118 = &cf_Nonce;
    local_e8 = &cf_ECID;
    local_110 = &cf_ChipID;
    local_108 = &cf_BoardID;
    do {
      local_1b0 = "unsignedLongValue";
      local_c0 = "tssKeyName:unitNumber:";
      local_1a0 = "manifestEpoch";
      local_d0 = "numberWithUnsignedChar:";
      local_198 = "provisioning";
      local_190 = "life";
      local_188 = "securityMode";
      local_180 = "securityDomain";
      local_178 = "productionMode";
      local_170 = "nonce";
      local_168 = "ecID";
      local_160 = "numberWithUnsignedLongLong:";
      local_158 = "chipID";
      local_f0 = "numberWithUnsignedInt:";
      local_150 = "boardID";
      lVar13 = 0;
      do {
        if (*local_1e8 != local_1a8) {
          _objc_enumerationMutation(local_d8);
        }
        uVar5 = (*(code *)puVar1)(*(undefined8 *)(lStack_1f0 + lVar13 * 8),local_1b0);
        switch(uVar5) {
        case 4:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_108,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          pcVar10 = local_150;
          goto LAB_0022e7ac;
        case 5:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_110,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          pcVar10 = local_158;
LAB_0022e7ac:
          uVar6 = (*(code *)puVar1)(param_1,pcVar10);
          pcVar10 = local_f0;
          goto LAB_0022e874;
        default:
          goto switchD_0022e5fe_caseD_6;
        case 7:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_e8,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          uVar7 = (*(code *)puVar1)(param_1,local_168);
          uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,local_160,uVar7);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          goto LAB_0022e87f;
        case 8:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_128,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          pcVar10 = local_180;
          break;
        case 9:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_130,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          pcVar10 = local_188;
          goto LAB_0022e6d1;
        case 10:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_120,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          pcVar10 = local_178;
LAB_0022e6d1:
          cVar4 = (*(code *)puVar1)(param_1,pcVar10);
          uVar6 = (uint)(cVar4 != '\0');
          pcVar10 = "numberWithBool:";
          goto LAB_0022e874;
        case 0x18:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_118,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          uVar7 = (*(code *)puVar1)(param_1,local_170);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          goto LAB_0022e87f;
        case 0x19:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_138,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          pcVar10 = local_190;
          break;
        case 0x1a:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_140,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          cVar4 = (*(code *)puVar1)(param_1,local_198);
          if (cVar4 != '\x01') goto LAB_0022e8a3;
          pcVar10 = "numberWithBool:";
          uVar6 = 1;
          goto LAB_0022e874;
        case 0x1b:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_148,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          pcVar10 = local_1a0;
          break;
        case 0x1d:
          uVar8 = (*(code *)puVar1)(param_1,local_c0,local_e8,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
          (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x68),"setObject:forKeyedSubscript:",
                            *(undefined8 *)(param_1 + 0xb8),uVar8);
          goto LAB_0022e8a3;
        }
        bVar3 = (*(code *)puVar1)(param_1,pcVar10);
        uVar6 = (uint)bVar3;
        pcVar10 = local_d0;
LAB_0022e874:
        uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,pcVar10,uVar6);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
LAB_0022e87f:
        (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x68),"setObject:forKeyedSubscript:",uVar7,uVar8
                         );
        pcVar11 = (code *)PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar7);
LAB_0022e8a3:
        (*pcVar11)(uVar8);
        uVar12 = local_f8;
switchD_0022e5fe_caseD_6:
        lVar13 = lVar13 + 1;
      } while (local_c8 != lVar13);
      local_c8 = (*(code *)puVar1)(local_d8,"countByEnumeratingWithState:objects:count:",&local_1f8,
                                   local_b8,0x10);
    } while (local_c8 != 0);
  }
  uVar8 = local_d8;
  (*pcVar11)(local_d8);
  (*(code *)puVar1)(param_1,"processMeasurementsForTSSOptions:unitNumber:asMeasurement:",
                    *(undefined8 *)(param_1 + 0x68),uVar12,(int)(char)local_dc);
  uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithDictionary:",
                            *(undefined8 *)(param_1 + 0x68));
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*pcVar11)(local_100);
  (*pcVar11)(uVar8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar9 = _objc_autoreleaseReturnValue(uVar7);
    return IVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


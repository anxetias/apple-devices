// rea decompile_all
// name: _get_pers_params
// address: 0x19b643
// body: available
// range: 0x19b643-0x19ba6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19ba67 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _get_pers_params(undefined8 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_d0;
  undefined4 local_cc;
  long local_c8;
  uint local_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined2 local_68;
  undefined1 uStack_66;
  undefined4 uStack_65;
  undefined5 uStack_61;
  byte local_55;
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  byte abStack_50 [7];
  undefined1 local_49;
  undefined8 uStack_48;
  undefined7 uStack_40;
  undefined1 uStack_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_78 = (undefined1  [16])0x0;
  if (*(char *)((long)param_1 + 0x51) != '\0') {
    uVar1 = 0x1a;
    goto LAB_0019b868;
  }
  uVar1 = (**(code **)(*(long *)*param_1 + 0x28))
                    ((long *)*param_1,0,0x2c,&local_68,0x30,0,&local_c8);
  if (uVar1 != 0) goto LAB_0019b868;
  if (local_c8 != 0x30) {
    if (local_c8 == 0x2f) {
      *(undefined2 *)((long)param_1 + 0x1a) = local_68;
      *(undefined1 *)((long)param_1 + 0x1c) = uStack_66;
      param_1[4] = 0;
      puVar6 = (undefined8 *)&local_49;
      *(undefined4 *)(param_1 + 4) = uStack_65;
      *(byte *)((long)param_1 + 0x31) = local_55 >> 1 & 1;
      *(byte *)(param_1 + 6) = local_55 >> 2 & 1;
      pbVar4 = &local_52;
      pbVar5 = &local_51;
      goto LAB_0019b740;
    }
    if (_inRestore == '\x01') {
      pcVar7 = "ERROR: Unexpected read length for register 0x2c: 0x%llx\n";
LAB_0019b831:
      _printf(pcVar7,local_c8);
    }
    else {
      pcVar7 = "ERROR: Unexpected read length for register 0x2c: 0x%llx\n";
LAB_0019b85a:
      _uarpLogError(3,pcVar7);
    }
    uVar1 = 0x27;
    goto LAB_0019b868;
  }
  puVar6 = &uStack_48;
  pbVar5 = abStack_50;
  *(uint *)((long)param_1 + 0x1a) = CONCAT13((undefined1)uStack_65,CONCAT12(uStack_66,local_68));
  param_1[4] = CONCAT53(uStack_61,uStack_65._1_3_);
  *(byte *)((long)param_1 + 0x31) = local_54 >> 1 & 1;
  *(byte *)(param_1 + 6) = local_54 >> 2 & 1;
  pbVar4 = &local_51;
  local_53 = local_52;
LAB_0019b740:
  *(byte *)((long)param_1 + 0x33) = local_53 & 7;
  *(byte *)((long)param_1 + 0x32) = local_53 >> 4 & 7;
  *(byte *)(param_1 + 3) = *pbVar4;
  param_1[5] = *(undefined8 *)pbVar5;
  uVar8 = puVar6[1];
  *(undefined8 *)((long)param_1 + 0x34) = *puVar6;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar8;
  uVar2 = _apBoardForAceBoard(param_1[4]);
  *(undefined4 *)((long)param_1 + 0x44) = uVar2;
  uVar2 = _apChipForAceBoard(param_1[4]);
  *(undefined4 *)(param_1 + 9) = uVar2;
  if (*(char *)((long)param_1 + 0x55) == '\x01') {
    if (_inRestore != '\x01') {
      pcVar7 = "verify_only set; avoiding unnecessary SFWi calls\n";
      uVar1 = 0;
LAB_0019b847:
      _uarpLogError(3,pcVar7);
      goto LAB_0019b868;
    }
    _puts("verify_only set; avoiding unnecessary SFWi calls");
  }
  else {
    uVar1 = 0;
    if ((*(undefined1 (*) [16])((long)param_1 + 0x34) != local_78) ||
       (uVar1 = _handle_shared_spi(param_1,1), uVar1 != 0)) goto LAB_0019b868;
    local_bc = 0;
    uVar1 = _get_mode(*param_1,&local_bc);
    if (_inRestore == '\x01') {
      _printf("HPM mode=0x%X\n",(ulong)local_bc);
    }
    else {
      _uarpLogError(3,"HPM mode=0x%X\n");
    }
    if (uVar1 != 0) {
      if (_inRestore == '\x01') {
        _printf("get_mode failed in get pers param status=0x%x\n",(ulong)uVar1);
      }
      else {
        _uarpLogError(3,"get_mode failed in get pers param status=0x%x\n",uVar1);
      }
      goto LAB_0019b868;
    }
    if (local_bc == 0x41444655) {
      if (_inRestore == '\x01') {
        _puts("HPM in ADFU, yet boot-nonce found to be all 0s, blocking SFWi attempt");
        goto LAB_0019b868;
      }
      pcVar7 = "HPM in ADFU, yet boot-nonce found to be all 0s, blocking SFWi attempt\n";
      goto LAB_0019b847;
    }
    local_88 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    local_cc = 0;
    local_d0 = 0x53465769;
    uVar1 = (**(code **)(*(long *)*param_1 + 0x68))
                      ((long *)*param_1,1,&local_d0,&local_cc,0,local_b8,0,4,0x40,10,0,0);
    uVar3 = _check_task_result(local_b8[0],0x53465769);
    if (uVar1 != 0 || uVar3 != 0) {
      if (_inRestore == '\x01') {
        _printf("WARNING: SFWi failed status=0x%X, task_result=0x%X\n",(ulong)uVar1,(ulong)uVar3);
      }
      else {
        _uarpLogError(3,"WARNING: SFWi failed status=0x%X, task_result=0x%X\n",uVar1,uVar3);
      }
    }
    uVar1 = (**(code **)(*(long *)*param_1 + 0x28))
                      ((long *)*param_1,0,0x2c,&local_68,0x30,0,&local_c8);
    if (uVar1 != 0) goto LAB_0019b868;
    if (local_c8 == 0x30) {
      uVar8 = CONCAT17(uStack_48._7_1_,(undefined7)uStack_48);
      uVar9 = CONCAT17(uStack_39,uStack_40);
    }
    else {
      if (local_c8 != 0x2f) {
        if (_inRestore != '\x01') {
          pcVar7 = "ERROR: Unexpected second read length for register 0x2c: 0x%llx\n";
          goto LAB_0019b85a;
        }
        pcVar7 = "ERROR: Unexpected second read length for register 0x2c: 0x%llx\n";
        goto LAB_0019b831;
      }
      uVar8 = CONCAT71((undefined7)uStack_48,local_49);
      uVar9 = CONCAT71(uStack_40,uStack_48._7_1_);
    }
    *(undefined8 *)*(undefined1 (*) [16])((long)param_1 + 0x34) = uVar8;
    *(undefined8 *)((long)param_1 + 0x3c) = uVar9;
  }
  uVar1 = 0;
LAB_0019b868:
  _handle_shared_spi(param_1,0);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}


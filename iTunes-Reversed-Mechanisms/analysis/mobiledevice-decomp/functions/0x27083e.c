// rea decompile_all
// name: _get_number_of_uart_hpms
// address: 0x27083e
// body: available
// range: 0x27083e-0x270a05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x270a01 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _get_number_of_uart_hpms(uint param_1,long param_2,uint param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint local_6c;
  long local_68;
  uint local_60;
  uint local_5c;
  uint local_58 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  *param_4 = '\0';
  local_60 = param_3;
  uVar2 = _get_edt_matching_dict();
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_6c = param_1;
  local_5c = param_1;
  uVar3 = _CFDataCreate(uVar6,&local_6c,4);
  _add_property_match(uVar2,&cf_rid,uVar3);
  iVar1 = _IOServiceGetMatchingService(*(undefined4 *)PTR__kIOMasterPortDefault_004411d8,uVar2);
  uVar2 = 0xe00002f0;
  if ((iVar1 == 0) ||
     (lVar4 = _IORegistryEntryCreateCFProperty(iVar1,&cf_uart_hpm_rids,uVar6,0), lVar4 == 0))
  goto LAB_002709c7;
  uVar5 = _CFDataGetLength(lVar4);
  if (uVar5 < 4) {
LAB_002709f1:
    uVar2 = 0xe0000001;
  }
  else {
    if (0x1c < uVar5) {
      uVar2 = 0xe0000001;
      goto LAB_002709c7;
    }
    if ((uVar5 & 3) != 0) goto LAB_002709f1;
    uVar6 = _CFDataGetLength(lVar4);
    uVar2 = 0;
    _CFDataGetBytes(lVar4,0,uVar6,local_58);
    if ((char)local_60 != '\0') {
      uVar5 = (uVar5 >> 2) - 1;
      uVar7 = (ulong)((local_60 & 0xff) - 1);
      if (uVar7 <= uVar5) {
        uVar5 = uVar7;
      }
      lVar9 = 0;
      local_68 = lVar4;
      do {
        uVar8 = local_58[lVar9];
        if (0xff < uVar8) {
          if (_inRestore == '\x01') {
            _printf("Invalid UART RID 0x%x for SPI RID 0x%x\n",(ulong)uVar8,(ulong)local_5c);
          }
          else {
            _uarpLogError(3,"Invalid UART RID 0x%x for SPI RID 0x%x\n",uVar8,local_5c);
          }
          uVar8 = local_58[lVar9];
          if (0xff < uVar8) {
            uVar2 = 0xe0000001;
            lVar4 = local_68;
            goto LAB_002709bf;
          }
        }
        *(char *)(param_2 + lVar9) = (char)uVar8;
        *param_4 = *param_4 + '\x01';
        lVar9 = lVar9 + 1;
      } while (uVar5 + 1 != lVar9);
      uVar2 = 0;
      lVar4 = local_68;
    }
  }
LAB_002709bf:
  _CFRelease(lVar4);
LAB_002709c7:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}


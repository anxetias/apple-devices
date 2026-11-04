// rea decompile_all
// name: _AMSupportCopyDataFromAsciiEncodedHex
// address: 0x261c62
// body: available
// range: 0x261c62-0x261dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x261de8 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMSupportCopyDataFromAsciiEncodedHex(undefined8 param_1,char *param_2,ulong param_3)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  byte local_3a;
  byte local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = 0;
  if (param_2 != (char *)0x0) {
    if ((1 < param_3) && (*param_2 == '0')) {
      uVar4 = (ulong)((uint)((param_2[1] + 0xa8U & 0xdf) == 0) * 2);
    }
    uVar7 = (ulong)((uint)param_3 & 1);
    pvVar3 = _malloc((uVar7 + param_3) - uVar4 >> 1);
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
      _AMSupportLogInternal(3,"AMSupportCopyDataFromAsciiEncodedHex","malloc() returned NULL");
    }
    else {
      if (uVar4 < param_3) {
        uVar6 = 0;
        local_39 = 0;
        local_3a = 0;
        bVar8 = uVar7 == 0;
        do {
          uVar5 = (uint)uVar6;
          if (param_2[uVar4] == '\0') break;
          cVar1 = _AMSupportHexAsciiToNumeric((int)param_2[uVar4],&local_39);
          if (cVar1 == '\0') goto LAB_00261d9d;
          uVar2 = (int)uVar4 + 1;
          if (bVar8) {
            if (param_2[uVar2] == '\0') goto LAB_00261d9d;
            cVar1 = _AMSupportHexAsciiToNumeric((int)param_2[uVar2],&local_3a);
            if (cVar1 == '\0') goto LAB_00261d9d;
            uVar2 = (int)uVar4 + 2;
          }
          else {
            local_3a = local_39;
            local_39 = 0;
          }
          *(byte *)((long)pvVar3 + uVar6) = local_39 << 4 | local_3a;
          uVar5 = uVar5 + 1;
          uVar6 = (ulong)uVar5;
          uVar4 = (ulong)uVar2;
          bVar8 = true;
        } while (uVar4 < param_3);
        if (uVar5 != 0) {
          uVar4 = _CFDataCreateWithBytesNoCopy
                            (param_1,pvVar3,uVar5,*(undefined8 *)PTR__kCFAllocatorMalloc_004410f0);
          if (uVar4 != 0) goto LAB_00261da9;
        }
      }
LAB_00261d9d:
      _free(pvVar3);
      uVar4 = 0;
    }
  }
LAB_00261da9:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


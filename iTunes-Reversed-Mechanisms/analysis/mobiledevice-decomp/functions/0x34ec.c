// rea decompile_all
// name: _AMSupportCopyBytesFromAsciiEncodedHex
// address: 0x34ec
// body: available
// range: 0x34ec-0x3675 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3671 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportCopyBytesFromAsciiEncodedHex
          (char *param_1,ulong param_2,undefined8 *param_3,ulong *param_4)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte local_3a;
  char local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == (char *)0x0) {
    _AMSupportCopyBytesFromAsciiEncodedHex_cold_6();
  }
  else if (param_2 == 0) {
    _AMSupportCopyBytesFromAsciiEncodedHex_cold_5();
  }
  else if (param_3 == (undefined8 *)0x0) {
    _AMSupportCopyBytesFromAsciiEncodedHex_cold_4();
  }
  else {
    if (param_4 != (ulong *)0x0) {
      pvVar3 = _malloc(param_2 >> 1);
      if (pvVar3 == (void *)0x0) {
        _AMSupportCopyBytesFromAsciiEncodedHex_cold_2();
        uVar7 = 2;
      }
      else {
        uVar2 = 0;
        if ((param_2 != 1) && (uVar2 = 0, *param_1 == '0')) {
          uVar2 = (uint)((param_1[1] + 0xa8U & 0xdf) == 0) * 2;
        }
        uVar6 = 0;
        local_39 = '\0';
        local_3a = 0;
        uVar4 = (ulong)uVar2;
        if (uVar4 < param_2) {
          uVar7 = 99;
          do {
            uVar5 = (uint)uVar6;
            if (param_1[uVar4] == '\0') break;
            cVar1 = _AMSupportHexAsciiToNumeric((int)param_1[uVar4],&local_39);
            if ((cVar1 == '\0') || (param_1[uVar2 + 1] == '\0')) goto LAB_00003617;
            cVar1 = _AMSupportHexAsciiToNumeric((int)param_1[uVar2 + 1],&local_3a);
            if (cVar1 == '\0') goto LAB_00003617;
            *(byte *)((long)pvVar3 + uVar6) = local_39 << 4 | local_3a;
            uVar5 = uVar5 + 1;
            uVar6 = (ulong)uVar5;
            uVar4 = (ulong)(uVar2 + 2);
            uVar2 = uVar2 + 2;
          } while (uVar4 < param_2);
          if (uVar5 != 0) {
            *param_3 = pvVar3;
            *param_4 = (ulong)uVar5;
            uVar7 = 0;
            goto LAB_00003620;
          }
        }
        _AMSupportCopyBytesFromAsciiEncodedHex_cold_1();
        uVar7 = 3;
LAB_00003617:
        _free(pvVar3);
      }
      goto LAB_00003620;
    }
    _AMSupportCopyBytesFromAsciiEncodedHex_cold_3();
  }
  uVar7 = 1;
LAB_00003620:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


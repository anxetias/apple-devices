// rea decompile_all
// name: __GetExtraFieldOfLength
// address: 0xa271e
// body: available
// range: 0xa271e-0xa2844 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa2840 to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __GetExtraFieldOfLength
                (ushort *param_1,undefined2 *param_2,ushort param_3,undefined8 *param_4)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong unaff_R13;
  ushort uVar6;
  
  uVar4 = *param_1;
  pvVar1 = (void *)_GetExtraFieldWithSignature(*(undefined8 *)(param_1 + 4),uVar4,param_2,0);
  if (pvVar1 != (void *)0x0) {
    unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
    if ((ushort)(param_3 - 1) < *(ushort *)((long)pvVar1 + 2)) goto LAB_000a2811;
    uVar6 = *(ushort *)((long)pvVar1 + 2) + 4;
    if (uVar6 < uVar4) {
      _memmove(pvVar1,(void *)((long)pvVar1 + (ulong)uVar6),(ulong)uVar6);
      uVar4 = *param_1;
    }
    if (uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
      ___assert_rtn("_RemoveExtraField","MutableZipStructure.c",0x51,
                    "fieldLength <= extraInfo->length");
    }
    uVar4 = uVar4 - uVar6;
    *param_1 = uVar4;
  }
  unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
  if (param_3 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    uVar5 = (ulong)param_3 + (ulong)uVar4 + 4;
    if (uVar5 < 0x10000) {
      pvVar2 = _reallocf(*(void **)(param_1 + 4),uVar5);
      *(void **)(param_1 + 4) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        uVar3 = (ulong)*param_1;
        pvVar1 = (void *)((long)pvVar2 + uVar3);
        *param_1 = (ushort)uVar5;
        *(undefined2 *)((long)pvVar2 + uVar3) = *param_2;
        *(ushort *)((long)pvVar2 + uVar3 + 2) = param_3;
        goto LAB_000a2811;
      }
    }
    pvVar1 = (void *)0x0;
    unaff_R13 = 0;
  }
LAB_000a2811:
  *param_4 = pvVar1;
  return unaff_R13 & 0xffffffff;
}


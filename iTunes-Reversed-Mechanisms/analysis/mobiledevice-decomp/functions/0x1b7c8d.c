// rea decompile_all
// name: _DERDecoderInitialize
// address: 0x1b7c8d
// body: available
// range: 0x1b7c8d-0x1b7d56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b7d52 to 0x2a355b _DERDecoderInitialize.cold.1 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DERDecoderInitialize(long *param_1,long param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  uint local_38;
  uint local_34;
  
  if (param_1 == (long *)0x0) {
    _DERDecoderInitialize_cold_3();
  }
  else if (param_2 != 0) {
    if (param_3 != (uint *)0x0) {
      uVar3 = *param_3;
      if (uVar3 == 0) {
        local_34 = 0;
        uVar2 = __DERDecodeTag(param_2,param_4,local_44,local_40,local_3c);
        uVar1 = local_34;
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = __DERDecodeLength((ulong)local_34 + param_2,param_4 - local_34,&local_38);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar3 = local_34 + uVar1 + local_38;
        if (CARRY4(local_34 + uVar1,local_38)) {
          return 6;
        }
      }
      uVar2 = 2;
      if (uVar3 <= param_4) {
        *param_3 = uVar3;
        *param_1 = param_2;
        *(uint *)(param_1 + 1) = uVar3;
        uVar2 = 0;
      }
      return uVar2;
    }
    goto LAB_001b7d52;
  }
  _DERDecoderInitialize_cold_2();
LAB_001b7d52:
                    /* WARNING: Subroutine does not return */
  _DERDecoderInitialize_cold_1();
}


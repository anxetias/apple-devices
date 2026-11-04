// rea decompile_all
// name: _AMSupportX509DecodeParseDERLengthFromBuffer
// address: 0x2608c4
// body: available
// range: 0x2608c4-0x2609a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2609a4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 _AMSupportX509DecodeParseDERLengthFromBuffer(long param_1,ulong param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uStack_60;
  ulong local_50 [5];
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  local_50[0] = 0;
  uStack_60 = 1;
  if ((param_1 != 0) && (param_3 != (int *)0x0)) {
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    local_28 = param_2 & 0xffffffff;
    local_50[4] = param_1;
    iVar1 = _DERDecodeItemPartialBufferGetLength(local_50 + 4,local_50 + 1,local_50);
    if (iVar1 == 0) {
      if (local_50[0] != 0) {
        if (local_50[0] < ~(local_50[2] - param_1)) {
          *param_3 = (int)(local_50[2] - param_1) + (int)local_50[0];
          uStack_60 = 0;
        }
        else {
          _AMSupportLogInternal
                    (3,"AMSupportX509DecodeParseDERLengthFromBuffer",
                     "encoded size will overrun DERSize");
          uStack_60 = 0x16;
        }
        goto LAB_00260942;
      }
      pcVar2 = "encodedSize is 0";
    }
    else {
      pcVar2 = "failed to decode DER";
    }
    _AMSupportLogInternal(3,"AMSupportX509DecodeParseDERLengthFromBuffer",pcVar2);
    uStack_60 = 99;
  }
LAB_00260942:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uStack_60;
}


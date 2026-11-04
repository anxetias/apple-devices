// rea decompile_all
// name: _Img4DecodeCopyPayloadDigest
// address: 0x2a67f4
// body: available
// range: 0x2a67f4-0x2a68e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a68df to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_Img4DecodeCopyPayloadDigest(char *param_1,void *param_2,size_t param_3,undefined8 *param_4)

{
  undefined8 uStack_60;
  char local_58 [56];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_60 = 6;
  if ((((param_1 != (char *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) &&
     (((param_4 != (undefined8 *)0x0 && ((code *)*param_4 != (code *)0x0)) &&
      ((uStack_60 = 1, *(long *)(param_1 + 0x88) != 0 && (*(long *)(param_1 + 0x90) != 0)))))) {
    if (param_3 < 0x31) {
      if (*param_1 == '\x01') {
        param_1 = param_1 + 0xb8;
      }
      else {
        local_58[0x20] = '\0';
        local_58[0x21] = '\0';
        local_58[0x22] = '\0';
        local_58[0x23] = '\0';
        local_58[0x24] = '\0';
        local_58[0x25] = '\0';
        local_58[0x26] = '\0';
        local_58[0x27] = '\0';
        local_58[0x28] = '\0';
        local_58[0x29] = '\0';
        local_58[0x2a] = '\0';
        local_58[0x2b] = '\0';
        local_58[0x2c] = '\0';
        local_58[0x2d] = '\0';
        local_58[0x2e] = '\0';
        local_58[0x2f] = '\0';
        local_58[0x10] = '\0';
        local_58[0x11] = '\0';
        local_58[0x12] = '\0';
        local_58[0x13] = '\0';
        local_58[0x14] = '\0';
        local_58[0x15] = '\0';
        local_58[0x16] = '\0';
        local_58[0x17] = '\0';
        local_58[0x18] = '\0';
        local_58[0x19] = '\0';
        local_58[0x1a] = '\0';
        local_58[0x1b] = '\0';
        local_58[0x1c] = '\0';
        local_58[0x1d] = '\0';
        local_58[0x1e] = '\0';
        local_58[0x1f] = '\0';
        local_58[0] = '\0';
        local_58[1] = '\0';
        local_58[2] = '\0';
        local_58[3] = '\0';
        local_58[4] = '\0';
        local_58[5] = '\0';
        local_58[6] = '\0';
        local_58[7] = '\0';
        local_58[8] = '\0';
        local_58[9] = '\0';
        local_58[10] = '\0';
        local_58[0xb] = '\0';
        local_58[0xc] = '\0';
        local_58[0xd] = '\0';
        local_58[0xe] = '\0';
        local_58[0xf] = '\0';
        if (0x30 < *(ulong *)param_4[4]) {
          uStack_60 = 6;
          goto LAB_002a68bd;
        }
        uStack_60 = (*(code *)*param_4)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10)
                                        ,local_58,param_3,param_4);
        if ((int)uStack_60 != 0) goto LAB_002a68bd;
        param_3 = *(size_t *)param_4[4];
        param_1 = local_58;
      }
      _memcpy(param_2,param_1,param_3);
      uStack_60 = 0;
    }
    else {
      uStack_60 = 7;
    }
  }
LAB_002a68bd:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uStack_60;
}


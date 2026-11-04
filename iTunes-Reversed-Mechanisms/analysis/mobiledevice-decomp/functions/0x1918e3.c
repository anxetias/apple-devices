// rea decompile_all
// name: _IDecoderStreamDestroy
// address: 0x1918e3
// body: available
// range: 0x1918e3-0x1919cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1919c9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IDecoderStreamDestroy(void *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined1 local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x40) != 0) {
      do {
        lVar2 = _SharedBufferRead(*(undefined8 *)((long)param_1 + 0x40),local_428,0x400);
        if (lVar2 < 0) {
          _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/IOCompressedStreams.c"
                        ,"IDecoderStreamDestroy",0x9b,0x27,0,"flushing shared buffer");
          break;
        }
      } while (lVar2 != 0);
    }
    if ((*(long *)((long)param_1 + 0x38) != 0) && (iVar1 = _joinThread(), iVar1 != 0)) {
      piVar3 = ___error();
      _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/IOCompressedStreams.c"
                    ,"IDecoderStreamDestroy",0xa3,0x27,*piVar3,"failed to join decoder thread");
    }
    _SharedBufferDestroy(*(undefined8 *)((long)param_1 + 0x40));
    _free(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


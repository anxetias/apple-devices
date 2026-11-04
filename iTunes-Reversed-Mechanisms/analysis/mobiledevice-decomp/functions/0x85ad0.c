// rea decompile_all
// name: _BrotliDecoderDecompress
// address: 0x85ad0
// body: available
// range: 0x85ad0-0x85bae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x85baa to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _BrotliDecoderDecompress
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 local_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined8 local_1458;
  undefined1 local_1450 [5152];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_1478 = 0;
  local_1460 = *param_3;
  bVar2 = false;
  local_1470 = param_1;
  local_1468 = param_2;
  local_1458 = param_4;
  iVar1 = _BrotliDecoderStateInit(local_1450,0,0,0);
  if (iVar1 != 0) {
    iVar1 = _BrotliDecoderDecompressStream
                      (local_1450,&local_1470,&local_1468,&local_1460,&local_1458,&local_1478);
    *param_3 = local_1478;
    _BrotliDecoderStateCleanup(local_1450);
    bVar2 = iVar1 == 1;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


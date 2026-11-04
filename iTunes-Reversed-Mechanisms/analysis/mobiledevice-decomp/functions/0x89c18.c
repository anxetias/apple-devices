// rea decompile_all
// name: _BrotliDecoderTakeOutput
// address: 0x89c18
// body: available
// range: 0x89c18-0x89cac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _BrotliDecoderTakeOutput(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  lVar2 = 0x1000000;
  if (*param_2 != 0) {
    lVar2 = *param_2;
  }
  if ((*(long *)(param_1 + 0x78) != 0) && (-1 < *(int *)(param_1 + 0x74))) {
    local_28 = lVar2;
    _WrapRingBuffer(param_1);
    uVar1 = _WriteRingBuffer(param_1,&local_28,&local_30,0,1);
    if ((uVar1 & 0xfffffffd) == 1) {
      *param_2 = lVar2 - local_28;
      return local_30;
    }
    if ((int)uVar1 < 0) {
      _SaveErrorCode(param_1,uVar1);
    }
  }
  *param_2 = 0;
  return 0;
}


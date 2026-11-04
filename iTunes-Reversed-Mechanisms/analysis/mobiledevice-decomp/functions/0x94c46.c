// rea decompile_all
// name: _compression_stream_process
// address: 0x94c46
// body: available
// range: 0x94c46-0x94d3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _compression_stream_process(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (param_1[4] == 0) {
    return -1;
  }
  lVar1 = *param_1;
  lVar2 = param_1[2];
  iVar3 = *(int *)(param_1[4] + 4);
  if (iVar3 < 0x891) {
    if (iVar3 < 0x801) {
      if (iVar3 == 0x100) {
        iVar3 = _lz4_stream_process(param_1,param_2);
      }
      else if (iVar3 == 0x205) {
        iVar3 = _zlib_stream_process(param_1,param_2);
      }
      else {
        if (iVar3 != 0x306) {
          return -1;
        }
        iVar3 = _lzma_stream_process(param_1,param_2);
      }
      goto LAB_00094d12;
    }
    if (1 < iVar3 - 0x801U) {
      return -1;
    }
  }
  else {
    if (iVar3 - 0x900U < 2) {
      iVar3 = _lzvn_stream_process(param_1,param_2);
      goto LAB_00094d12;
    }
    if (iVar3 == 0xb02) {
      iVar3 = _brotli_stream_process(param_1,param_2);
      goto LAB_00094d12;
    }
    if (iVar3 != 0x891) {
      return -1;
    }
  }
  iVar3 = _lzfse_stream_process(param_1,param_2);
LAB_00094d12:
  if ((((iVar3 == 0) && (iVar3 = 0, (param_2 & 1) != 0)) && (param_1[2] == lVar2)) &&
     (*param_1 == lVar1)) {
    return -1;
  }
  return iVar3;
}


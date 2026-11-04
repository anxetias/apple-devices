// rea decompile_all
// name: _AAFileStreamOpenWithFD
// address: 0x191ad6
// body: available
// range: 0x191ad6-0x191bd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _AAFileStreamOpenWithFD(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar1 = _calloc(1,0x68);
  puVar2 = _malloc(0xc);
  if (puVar1 == (undefined8 *)0x0 || puVar2 == (undefined4 *)0x0) {
    piVar3 = ___error();
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/AppleArchive/AAByteStream.c"
                  ,"AAFileStreamOpenWithFD",0x192,0x11,*piVar3,"malloc");
    _free(puVar1);
    _free(puVar2);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = 0;
    *puVar1 = puVar2;
    puVar1[1] = _aaFileStreamClose;
    puVar1[2] = _aaFileStreamRead;
    puVar1[3] = _aaFileStreamWrite;
    puVar1[4] = _aaFileStreamPRead;
    puVar1[5] = _aaFileStreamPWrite;
    puVar1[7] = _aaFileStreamAbort;
    puVar1[6] = _aaFileStreamSeek;
    puVar1[8] = _aaFileStreamTruncate;
    puVar1[9] = _aaFileStreamFlush;
  }
  return puVar1;
}


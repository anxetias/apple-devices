// rea decompile_all
// name: _aaFileStreamPWrite
// address: 0x191d1f
// body: available
// range: 0x191d1f-0x191d90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ssize_t _aaFileStreamPWrite(int *param_1,void *param_2,size_t param_3,off_t param_4)

{
  ssize_t sVar1;
  
  sVar1 = -1;
  if (param_1[2] == 0) {
    sVar1 = _pwrite(*param_1,param_2,param_3,param_4);
    if (sVar1 < 0) {
      _pc_log_warning("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/AppleArchive/AAByteStream.c"
                      ,"aaFileStreamPWrite",0x80,0x11,
                      "aaFileStreamPWrite err=%zd buf=%p n=%zu off=%llu",sVar1,param_2,param_3,
                      param_4);
    }
  }
  return sVar1;
}


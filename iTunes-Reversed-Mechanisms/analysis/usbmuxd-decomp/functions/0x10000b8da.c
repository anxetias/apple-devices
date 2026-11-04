// rea decompile_all
// name: FUN_10000b8da
// address: 0x10000b8da
// body: available
// range: 0x10000b8da-0x10000b958 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000b8da(undefined8 param_1)

{
  int iVar1;
  kevent local_58;
  timespec local_38;
  
  local_38.tv_sec = 0;
  local_38.tv_nsec = 0;
  iVar1 = _kevent(DAT_100021108,(kevent *)0x0,0,&local_58,1,&local_38);
  if (iVar1 == 1) {
    do {
      (*local_58.udata)(&local_58);
      iVar1 = _kevent(DAT_100021108,(kevent *)0x0,0,&local_58,1,&local_38);
    } while (iVar1 == 1);
  }
  _CFFileDescriptorEnableCallBacks(param_1,1);
  return;
}


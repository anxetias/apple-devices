// rea decompile_all
// name: _canOpenWithArchiveReader
// address: 0xdd500
// body: available
// range: 0xdd500-0xdd570 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _canOpenWithArchiveReader(int, long long, archive*) */

ulong _canOpenWithArchiveReader(int param_1,longlong param_2,archive *param_3)

{
  int iVar1;
  undefined8 unaff_R12;
  ulong uVar2;
  undefined8 local_30;
  
  local_30 = 0;
  iVar1 = _archive_read_open_fd(param_3,param_1,0x8000);
  if (iVar1 == 0) {
    iVar1 = _archive_read_next_header(param_3,&local_30);
    uVar2 = CONCAT71((int7)((ulong)unaff_R12 >> 8),-0x15 < iVar1);
  }
  else {
    uVar2 = 0;
  }
  _archive_read_finish(param_3);
  _lseek(param_1,param_2,0);
  return uVar2 & 0xffffffff;
}


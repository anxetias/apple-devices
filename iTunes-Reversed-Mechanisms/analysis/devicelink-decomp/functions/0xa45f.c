// rea decompile_all
// name: _DLThreadAddMessagePortToRunloop
// address: 0xa45f
// body: available
// range: 0xa45f-0xa4b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 _DLThreadAddMessagePortToRunloop(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar1 = _CFMessagePortCreateRunLoopSource(0,param_1,0);
    if (lVar1 != 0) {
      uVar2 = _CFRunLoopGetCurrent();
      _CFRunLoopAddSource(uVar2,lVar1,*(undefined8 *)PTR__kCFRunLoopDefaultMode_00015038);
      _CFRelease(lVar1);
      uVar3 = 1;
    }
  }
  return uVar3;
}


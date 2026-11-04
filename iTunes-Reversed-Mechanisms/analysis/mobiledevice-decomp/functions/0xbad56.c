// rea decompile_all
// name: ___AFCConnectionCopyDescription
// address: 0xbad56
// body: available
// range: 0xbad56-0xbae21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ___AFCConnectionCopyDescription(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _CFGetAllocator();
  _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
  uVar2 = _CFStringCreateMutable(uVar1,0);
  _CFStringAppendFormat(uVar2,0,&cf_<AFCConnection_p[_p]>_,param_1,uVar1);
  _CFStringAppendFormat(uVar2,0,&cf_FileDescriptor__d,*(undefined4 *)(param_1 + 0x38));
  _CFStringAppendFormat(uVar2,0,&cf_LastError__d,*(undefined4 *)(param_1 + 0x40));
  _CFStringAppendFormat(uVar2,0,&cf_FatalError__d,*(undefined4 *)(param_1 + 0x40));
  _CFStringAppendFormat(uVar2,0,&cf_MaxOperations__d,*(undefined4 *)(param_1 + 0x70));
  _CFStringAppendFormat(uVar2,0,&cf__);
  _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
  return uVar2;
}


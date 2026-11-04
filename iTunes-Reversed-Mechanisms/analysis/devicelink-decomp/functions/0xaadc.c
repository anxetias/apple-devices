// rea decompile_all
// name: _DLStringByAppendingPathComponent
// address: 0xaadc
// body: available
// range: 0xaadc-0xabbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xabb7 to 0xed8f _CFStringCreateWithSubstring (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLStringByAppendingPathComponent(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 local_b8 [5];
  byte bStack_b3;
  
  lVar2 = _CFStringGetLength();
  if (lVar2 != 0) {
    pvVar3 = (void *)_DLCreateCStringFromCFString(param_1);
    iVar1 = _stat_INODE64(pvVar3,local_b8);
    bVar7 = bStack_b3 >> 6 & 1;
    if (iVar1 < 0) {
      bVar7 = 0;
    }
    uVar4 = _CFURLCreateWithFileSystemPath(0,param_1,0,bVar7);
    uVar5 = _CFURLCreateCopyAppendingPathComponent(0,uVar4,param_2,bVar7);
    uVar6 = _CFURLCopyFileSystemPath(uVar5,0);
    _CFRelease(uVar4);
    _CFRelease(uVar5);
    _free(pvVar3);
    return uVar6;
  }
  uVar4 = _CFStringGetLength(param_2);
  uVar4 = _CFStringCreateWithSubstring(0,param_2,0,uVar4);
  return uVar4;
}


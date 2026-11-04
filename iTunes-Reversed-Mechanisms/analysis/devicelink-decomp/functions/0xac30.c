// rea decompile_all
// name: _DLStringByRemovingLastPathComponent
// address: 0xac30
// body: available
// range: 0xac30-0xacca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLStringByRemovingLastPathComponent(undefined8 param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 local_b8 [5];
  byte bStack_b3;
  
  pvVar2 = (void *)_DLCreateCStringFromCFString();
  iVar1 = _stat_INODE64(pvVar2,local_b8);
  bVar6 = bStack_b3 >> 6 & 1;
  if (iVar1 < 0) {
    bVar6 = 0;
  }
  uVar3 = _CFURLCreateWithFileSystemPath(0,param_1,0,bVar6);
  uVar4 = _CFURLCreateCopyDeletingLastPathComponent(0,uVar3);
  uVar5 = _CFURLCopyFileSystemPath(uVar4,0);
  _CFRelease(uVar3);
  _CFRelease(uVar4);
  _free(pvVar2);
  return uVar5;
}


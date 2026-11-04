// rea decompile_all
// name: FUN_10000b7c2
// address: 0x10000b7c2
// body: available
// range: 0x10000b7c2-0x10000b8d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10000b7c2(kevent *param_1,void *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  long lVar2;
  undefined8 uVar3;
  
  param_1->udata = param_2;
  if (DAT_100021108 == -1) {
    DAT_100021108 = _kqueue();
    if (DAT_100021108 != -1) {
      uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
      DAT_100022bc8 = _CFFileDescriptorCreate(uVar3,DAT_100021108,1,FUN_10000b8da);
      if (DAT_100022bc8 != 0) {
        _CFFileDescriptorEnableCallBacks(DAT_100022bc8,1);
        lVar2 = _CFFileDescriptorCreateRunLoopSource(uVar3,DAT_100022bc8,0);
        if (lVar2 != 0) {
          uVar3 = _CFRunLoopGetCurrent();
          _CFRunLoopAddSource(uVar3,lVar2,*(undefined8 *)PTR__kCFRunLoopCommonModes_10001c040);
          _CFRelease(lVar2);
          goto LAB_10000b7db;
        }
      }
      if (DAT_100021108 != -1) {
        _close(DAT_100021108);
        DAT_100021108 = -1;
      }
    }
    if (DAT_100022bc8 != 0) {
      _CFFileDescriptorInvalidate();
      _CFRelease(DAT_100022bc8);
      DAT_100022bc8 = 0;
    }
    uVar3 = 0;
  }
  else {
LAB_10000b7db:
    iVar1 = _kevent(DAT_100021108,param_1,1,(kevent *)0x0,0,(timespec *)0x0);
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 != -1);
  }
  return uVar3;
}


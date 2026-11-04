// rea decompile_all
// name: _AMAuthInstallSupportCopyTagAndFileURL
// address: 0x29fa3a
// body: available
// range: 0x29fa3a-0x29fb86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallSupportCopyTagAndFileURL
          (undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = 2;
  if (param_2 == 0) {
    return 2;
  }
  lVar1 = _CFURLCopyFileSystemPath(param_2,0);
  if (lVar1 == 0) {
    return 2;
  }
  lVar2 = _CFStringFind(lVar1,&cf__,0);
  if (lVar2 == -1) {
    lVar2 = _CFRetain(param_2);
    lVar3 = 0;
    lVar4 = 0;
LAB_0029fb13:
    if (param_3 != (undefined8 *)0x0) {
      uVar5 = _CFRetain(lVar4);
      *param_3 = uVar5;
    }
    if (param_4 != (undefined8 *)0x0) {
      uVar5 = _CFRetain(lVar2);
      *param_4 = uVar5;
    }
    _CFRelease(lVar1);
    uVar5 = 0;
    if (lVar3 != 0) goto LAB_0029fb4d;
  }
  else {
    lVar3 = _CFStringCreateArrayBySeparatingStrings(param_1,lVar1,&cf__);
    lVar2 = lVar1;
    if (lVar3 == 0) goto LAB_0029fb5d;
    lVar4 = _CFArrayGetValueAtIndex(lVar3,0);
    uVar5 = 8;
    if ((lVar4 != 0) && (lVar2 = _CFArrayGetValueAtIndex(lVar3,1), lVar2 != 0)) {
      lVar2 = _CFURLCreateWithFileSystemPath
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar2,0,0);
      if (lVar2 != 0) goto LAB_0029fb13;
      uVar5 = 2;
    }
    _CFRelease(lVar1);
    lVar2 = 0;
LAB_0029fb4d:
    _CFRelease(lVar3);
  }
  if (lVar2 == 0) {
    return uVar5;
  }
LAB_0029fb5d:
  _CFRelease(lVar2);
  return uVar5;
}


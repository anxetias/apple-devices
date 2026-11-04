// rea decompile_all
// name: FUN_10000f5f2
// address: 0x10000f5f2
// body: available
// range: 0x10000f5f2-0x10000f72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10000f5f2(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_2 != 0 && param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
    _pthread_once((pthread_once_t *)&DAT_100021278,FUN_10000f5ce);
    lVar3 = __CFRuntimeCreateInstance(uVar1,DAT_100022bf0,0x28);
    if (lVar3 == 0) {
      return 0;
    }
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    iVar2 = _DNSServiceRefSockFD((DNSServiceRef)*param_1);
    if (iVar2 != -1) {
      lVar4 = _CFSocketCreateWithNative(uVar1,iVar2,1,FUN_10000f72c);
      *(long *)(lVar3 + 0x10) = lVar4;
      if (lVar4 != 0) {
        uVar5 = _CFSocketGetSocketFlags(lVar4);
        _CFSocketSetSocketFlags(*(undefined8 *)(lVar3 + 0x10),uVar5 & 0xffffffffffffff7f);
        lVar4 = _CFSocketCreateRunLoopSource(uVar1,*(undefined8 *)(lVar3 + 0x10),0);
        *(long *)(lVar3 + 0x18) = lVar4;
        if (lVar4 != 0) {
          *(long *)(lVar3 + 0x28) = param_2;
          *(undefined8 *)(lVar3 + 0x30) = param_3;
          *(undefined8 *)(lVar3 + 0x20) = *param_1;
          *param_1 = 0;
          return lVar3;
        }
      }
    }
    _CFRelease(lVar3);
  }
  return 0;
}


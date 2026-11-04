// rea decompile_all
// name: __AMAuthInstallSsoLoadFramework
// address: 0x1b26ea
// body: available
// range: 0x1b26ea-0x1b27c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __AMAuthInstallSsoLoadFramework(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar5 = 0;
  bVar2 = true;
  do {
    bVar6 = bVar2;
    local_38 = 0;
    iVar3 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                      (uVar1,param_1,(&__AMAuthInstallSsoLoadFramework_frameworkNames)[lVar5],0,
                       &local_38);
    if (iVar3 == 0) {
      lVar5 = _CFBundleCreate(uVar1,local_38);
      if (lVar5 != 0) {
        _AMAuthInstallLog(7,"_AMAuthInstallSsoLoadFramework",
                          "Found AppleConnect compatible framework %@");
        _SafeRelease(local_38);
        uVar4 = __AMAuthInstallSsoLoadSymbols(lVar5);
        _CFRelease(lVar5);
        return uVar4;
      }
      _SafeRelease(local_38);
    }
    lVar5 = 1;
    bVar2 = false;
  } while (bVar6);
  return 0x14;
}


// rea decompile_all
// name: _AMAuthInstallSsoInitialize
// address: 0x1b24ff
// body: available
// range: 0x1b24ff-0x1b26e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b26cf to 0x29d537 __AMAuthInstallSsoLoadSymbols (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallSsoInitialize(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  
  if (__ssoFrameworkBundle != 0) {
    return 0;
  }
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar6 = bVar1;
    lVar3 = _CFBundleGetBundleWithIdentifier
                      ((&_AMAuthInstallSsoInitialize_kFrameworkIdentifiers)[lVar3]);
    if (lVar3 != 0) {
      uVar7 = __AMAuthInstallSsoLoadSymbols(lVar3);
      return uVar7;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar6);
  lVar3 = _SavageSafeRetain(param_1);
  if ((lVar3 != 0) && (iVar2 = __AMAuthInstallSsoLoadFramework(lVar3), iVar2 == 0))
  goto LAB_001b2663;
  lVar4 = _CFBundleGetMainBundle();
  if (lVar4 == 0) {
LAB_001b25d5:
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar4 = 0;
    do {
      _SafeRelease(lVar3);
      lVar3 = _CFURLCreateWithFileSystemPath
                        (uVar7,*(undefined8 *)((long)&_kFrameworkSearchPathStrs + lVar4),0,1);
      if (lVar3 == 0) {
        _AMAuthInstallLog(3,"AMAuthInstallSsoInitialize","Failed to create framework URL");
      }
      else {
        iVar2 = __AMAuthInstallSsoLoadFramework(lVar3);
        if (iVar2 == 0) goto LAB_001b2663;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x30);
    _AMAuthInstallLog(3,"AMAuthInstallSsoInitialize","can\'t find SSOClient.framework");
    uVar7 = 0x14;
    goto LAB_001b26a4;
  }
  _SafeRelease(lVar3);
  lVar3 = _CFBundleCopyPrivateFrameworksURL(lVar4);
  if (lVar3 == 0) {
    _AMAuthInstallSsoInitialize_cold_2();
LAB_001b26e0:
    uVar7 = 2;
    lVar3 = 0;
  }
  else {
    iVar2 = __AMAuthInstallSsoLoadFramework(lVar3);
    if (iVar2 != 0) {
      _SafeRelease(lVar3);
      lVar3 = _CFBundleCopySharedFrameworksURL(lVar4);
      if (lVar3 == 0) {
        _AMAuthInstallSsoInitialize_cold_1();
        goto LAB_001b26e0;
      }
      iVar2 = __AMAuthInstallSsoLoadFramework(lVar3);
      if (iVar2 != 0) goto LAB_001b25d5;
    }
LAB_001b2663:
    if (__ssoFrameworkBundle == 0) {
      uVar7 = 0;
    }
    else {
      uVar5 = _CFBundleCopyBundleURL();
      uVar7 = 0;
      _AMAuthInstallLog(7,"AMAuthInstallSsoInitialize","SSOClient.framework found at %@",uVar5);
      _SafeRelease(uVar5);
    }
  }
LAB_001b26a4:
  _SafeRelease(lVar3);
  return uVar7;
}


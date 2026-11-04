// rea decompile_all
// name: _AMAuthInstallMonetLocalSetProvisioningManifestInfo
// address: 0x297402
// body: available
// range: 0x297402-0x297664 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallMonetLocalSetProvisioningManifestInfo
          (long param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,long param_5,
          long param_6,long param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  
  if (param_1 == 0) {
    uStack_50 = 1;
LAB_002975ed:
    lVar1 = 0;
LAB_00297611:
    lVar2 = 0;
LAB_00297614:
    lVar3 = 0;
    lVar4 = 0;
  }
  else {
    if (param_5 == 0) {
      lVar1 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,"CAFEBABECAFEBABE",0x10
                           );
      if (lVar1 == 0) {
        _AMAuthInstallLog(3,"AMAuthInstallMonetLocalSetProvisioningManifestInfo",
                          "failed to convert activationEncryptionKeyString to data\n");
        uStack_50 = 2;
        goto LAB_002975ed;
      }
    }
    else {
      lVar1 = _CFRetain(param_5);
    }
    if (param_6 == 0) {
      lVar2 = _AMAuthInstallSupportCreateRandomNumber(0x10);
      if (lVar2 == 0) {
        _AMAuthInstallLog(3,"AMAuthInstallMonetLocalSetProvisioningManifestInfo",
                          "failed to convert vi to data\n");
        uStack_50 = 2;
        goto LAB_00297611;
      }
    }
    else {
      lVar2 = _CFRetain(param_6);
    }
    if (param_7 == 0) {
      lVar3 = _AMAuthInstallSupportCreateRandomNumber(0x10);
      if (lVar3 == 0) {
        _AMAuthInstallLog(3,"AMAuthInstallMonetLocalSetProvisioningManifestInfo",
                          "failed to convert randomKey to data\n");
        uStack_50 = 2;
        goto LAB_00297614;
      }
    }
    else {
      lVar3 = _CFRetain();
    }
    if (param_8 == 0) {
      lVar4 = _AMAuthInstallSupportCreateRandomNumber(0x14);
      if (lVar4 == 0) {
        lVar4 = 0;
        _AMAuthInstallLog(3,"AMAuthInstallMonetLocalSetProvisioningManifestInfo",
                          "failed to convert serverNonce to data\n");
        uStack_50 = 2;
        goto LAB_00297595;
      }
    }
    else {
      lVar4 = _CFRetain();
    }
    _SafeRelease(*(undefined8 *)(param_1 + 0xf0));
    _SafeRelease(*(undefined8 *)(param_1 + 0x108));
    _SafeRelease(*(undefined8 *)(param_1 + 0xf8));
    _SafeRelease(*(undefined8 *)(param_1 + 0xe8));
    _SafeRelease(*(undefined8 *)(param_1 + 0x110));
    _SafeRelease(*(undefined8 *)(param_1 + 0x118));
    uVar5 = _CFRetain(lVar4);
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
    uVar5 = _SavageSafeRetain(param_4);
    *(undefined8 *)(param_1 + 0x108) = uVar5;
    uVar5 = _SavageSafeRetain(param_9);
    *(undefined8 *)(param_1 + 0xf8) = uVar5;
    *(undefined1 *)(param_1 + 0x100) = param_2;
    *(undefined1 *)(param_1 + 0x120) = param_3;
    uVar5 = _CFRetain(lVar1);
    *(undefined8 *)(param_1 + 0xe8) = uVar5;
    uVar5 = _CFRetain(lVar2);
    *(undefined8 *)(param_1 + 0x110) = uVar5;
    uVar5 = _CFRetain(lVar3);
    *(undefined8 *)(param_1 + 0x118) = uVar5;
    uStack_50 = 0;
  }
LAB_00297595:
  _SafeRelease(lVar1);
  _SafeRelease(lVar2);
  _SafeRelease(lVar4);
  _SafeRelease(lVar3);
  return uStack_50;
}


// rea decompile_all
// name: _AMAuthInstallBasebandCopyCustomFirmware
// address: 0x1a3890
// body: available
// range: 0x1a3890-0x1a39bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandCopyCustomFirmware
              (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  long local_30;
  
  local_38 = 0;
  local_30 = 0;
  uVar2 = _CFGetAllocator();
  lVar3 = _CFURLCreateWithFileSystemPath(uVar2,param_2,0,0);
  if (lVar3 == 0) {
    _AMAuthInstallBasebandCopyCustomFirmware_cold_6();
    iVar1 = 2;
  }
  else {
    iVar1 = _AMAuthInstallSupportCopyURLToNewTempDirectory
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,"CustomFirmware.XXXXXXXXXX",
                       &local_38);
    if (iVar1 == 0) {
      if (local_38 == 0) {
        _AMAuthInstallBasebandCopyCustomFirmware_cold_5();
      }
      else {
        uVar2 = _CFGetAllocator(param_1);
        iVar1 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                          (uVar2,local_38,&cf_custom_bbfw,0,&local_30);
        if (iVar1 != 0) {
          _AMAuthInstallBasebandCopyCustomFirmware_cold_2();
          goto LAB_001a3953;
        }
        if (local_30 != 0) {
          iVar1 = _AMAuthInstallBasebandCopyFirmware(param_1,lVar3);
          if (iVar1 == 0) {
            uVar2 = _CFRetain(local_30);
            *param_3 = uVar2;
            iVar1 = 0;
          }
          else {
            _AMAuthInstallBasebandCopyCustomFirmware_cold_3();
          }
          goto LAB_001a3953;
        }
        _AMAuthInstallBasebandCopyCustomFirmware_cold_4();
      }
      iVar1 = 0xe;
    }
    else {
      _AMAuthInstallBasebandCopyCustomFirmware_cold_1();
    }
  }
LAB_001a3953:
  _SafeRelease(local_38);
  _SafeRelease(local_30);
  _SafeRelease(lVar3);
  return iVar1;
}


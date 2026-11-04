// rea decompile_all
// name: _AMAuthInstallDebugWriteObject
// address: 0x1abfec
// body: available
// range: 0x1abfec-0x1ac22c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallDebugWriteObject(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_38;
  
  local_38 = 0;
  lVar3 = 0;
  iVar1 = 1;
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x158) & param_4) == 0) {
      iVar1 = 0;
      lVar3 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x150) == 0) {
        uVar5 = _CFGetAllocator(param_1);
        iVar1 = _AMAuthInstallSupportCopyURLToNewTempDirectory
                          (uVar5,"amai-debug.XXXXXX",param_1 + 0x150);
        if (iVar1 != 0) {
          _AMAuthInstallLog(3,"AMAuthInstallDebugWriteObject",
                            "failed to create debug output directory");
          lVar3 = 0;
          goto LAB_001ac20b;
        }
      }
      lVar3 = _CFGetTypeID(param_2);
      lVar4 = _CFDataGetTypeID();
      if (lVar3 == lVar4) {
        lVar3 = _CFRetain(param_2);
        pcVar6 = "";
      }
      else {
        lVar3 = _CFGetTypeID(param_2);
        lVar4 = _CFDictionaryGetTypeID();
        if (lVar3 != lVar4) {
          lVar3 = _CFGetTypeID(param_2);
          lVar4 = _CFArrayGetTypeID();
          if (lVar3 != lVar4) {
            _AMAuthInstallLog(3,"AMAuthInstallDebugWriteObject",
                              "can\'t prepare data for output to file");
            _AMAuthInstallLog(8,"AMAuthInstallDebugWriteObject","%@",param_2);
            lVar3 = 0;
            iVar1 = 1;
            goto LAB_001ac20b;
          }
        }
        uVar5 = _CFGetAllocator(param_1);
        lVar3 = _CFPropertyListCreateData(uVar5,param_2,100,0,0);
        pcVar6 = ".plist";
      }
      if (lVar3 == 0) {
        lVar3 = 0;
        iVar1 = 0;
      }
      else {
        uVar5 = _CFGetAllocator(param_1);
        lVar4 = _CFStringCreateWithFormat(uVar5,0,&cf____s,param_3,pcVar6);
        if (lVar4 == 0) {
          iVar1 = 2;
        }
        else {
          uVar5 = _CFGetAllocator(param_1);
          iVar1 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                            (uVar5,*(undefined8 *)(param_1 + 0x150),lVar4,0,&local_38);
          _CFRelease(lVar4);
          if (iVar1 == 0) {
            uVar5 = _CFGetAllocator(param_1);
            iVar2 = _AMAuthInstallSupportWriteDataToFileURL(uVar5,lVar3,local_38,0);
            _AMAuthInstallLog(8,"AMAuthInstallDebugWriteObject","debug object written: %@",local_38)
            ;
            iVar1 = 0;
            if (iVar2 != 0) {
              iVar1 = iVar2;
            }
          }
        }
      }
    }
  }
LAB_001ac20b:
  _SafeRelease(lVar3);
  _SafeRelease(local_38);
  return iVar1;
}


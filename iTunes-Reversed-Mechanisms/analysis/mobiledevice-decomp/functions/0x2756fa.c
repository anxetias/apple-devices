// rea decompile_all
// name: _AMAuthInstallApCopyDeviceEntryFromDeviceMap
// address: 0x2756fa
// body: available
// range: 0x2756fa-0x275927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApCopyDeviceEntryFromDeviceMap(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_40;
  char local_31;
  
  local_40 = 0;
  local_31 = '\0';
  if (param_2 == 0) {
    pcVar2 = _getenv("PLATFORM_DIR");
    if (pcVar2 == (char *)0x0) {
      lVar4 = 0;
LAB_0027582e:
      uVar3 = _CFGetAllocator(param_1);
      lVar5 = _CFURLCreateWithFileSystemPath
                        (uVar3,&cf__usr_local_standalone_firmware_device_map_plist,0,0);
      if (lVar5 != 0) {
        uVar3 = _CFGetAllocator(param_1);
        iVar1 = _AMAuthInstallPlatformCreateDataFromMappedFileURL(uVar3,&local_40,lVar5);
        if (iVar1 == 0) {
          iVar1 = __AMAuthInstallApCopyDeviceEntryFromProvidedDeviceMap(param_1,local_40,param_3);
        }
        else {
          _AMAuthInstallLog(3,"AMAuthInstallApCopyDeviceEntryFromDeviceMap",
                            "Failed to read devicemap from %@",lVar5);
        }
        goto LAB_00275889;
      }
    }
    else {
      uVar3 = _CFGetAllocator(param_1);
      lVar4 = _CFStringCreateWithFormat
                        (uVar3,0,&cf__s___,pcVar2,
                         &cf__usr_local_standalone_firmware_device_map_plist);
      iVar1 = 2;
      if (lVar4 == 0) goto LAB_002758dc;
      uVar3 = _CFGetAllocator(param_1);
      lVar5 = _CFURLCreateWithFileSystemPath(uVar3,lVar4,0,0);
      if (lVar5 != 0) {
        _AMSupportFileURLExists(lVar5,&local_31);
        if (local_31 != '\0') {
          uVar3 = _CFGetAllocator(param_1);
          iVar1 = _AMAuthInstallPlatformCreateDataFromMappedFileURL(uVar3,&local_40,lVar5);
          if (iVar1 != 0) {
            _AMAuthInstallLog(3,"AMAuthInstallApCopyDeviceEntryFromDeviceMap",
                              "Failed to read devicemap from %@",lVar5);
            goto LAB_00275889;
          }
          iVar1 = __AMAuthInstallApCopyDeviceEntryFromProvidedDeviceMap(param_1,local_40,param_3);
          if (iVar1 == 0) {
            iVar1 = 0;
            _AMAuthInstallLog(6,"AMAuthInstallApCopyDeviceEntryFromDeviceMap",
                              "Found matching entry in SDK-specific devicemap. (via PLATFORM_DIR)");
            goto LAB_00275889;
          }
          _AMAuthInstallLog(4,"AMAuthInstallApCopyDeviceEntryFromDeviceMap",
                            "Failed to find match in SDK-specific devicemap (via PLATFORM_DIR), falling back to system devicemap."
                           );
        }
        _CFRelease(lVar5);
        if (local_40 != 0) {
          _CFRelease();
          local_40 = 0;
        }
        goto LAB_0027582e;
      }
    }
    lVar5 = 0;
    iVar1 = 2;
  }
  else {
    iVar1 = __AMAuthInstallApCopyDeviceEntryFromProvidedDeviceMap(param_1,param_2,param_3);
LAB_002758dc:
    lVar5 = 0;
    lVar4 = 0;
  }
LAB_00275889:
  _AMSupportSafeRelease(lVar5);
  _AMSupportSafeRelease(lVar4);
  _AMSupportSafeRelease(local_40);
  return iVar1;
}


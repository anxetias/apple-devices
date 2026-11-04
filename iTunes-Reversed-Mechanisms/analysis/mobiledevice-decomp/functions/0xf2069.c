// rea decompile_all
// name: __sendPersonalizedComponentToDevice
// address: 0xf2069
// body: available
// range: 0xf2069-0xf222e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __sendPersonalizedComponentToDevice
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  long local_48;
  undefined8 local_40;
  char local_32;
  char local_31;
  
  uVar5 = _CFGetAllocator();
  cVar1 = _AMAuthInstallApPersonalizationEnabled(*(undefined8 *)(param_1 + 200));
  local_48 = 0;
  local_32 = '\0';
  if (param_2 == 0) {
    uVar3 = (uint)(cVar1 != '\0');
  }
  else {
    local_40 = param_5;
    local_31 = cVar1;
    iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent(uVar5,param_2,param_3,0,&local_48);
    if (iVar2 == 0) {
      iVar2 = _AMAuthInstallSupportFileURLExists(local_48,&local_32);
      if (iVar2 == 0) {
        if (local_32 == '\0') {
          lVar6 = 0;
          _AMRLog(6,&cf_no_sfound,local_40);
          uVar3 = 0xb;
          if (local_31 == '\0') {
            uVar3 = 0;
          }
        }
        else {
          uVar5 = _CFGetAllocator(*(undefined8 *)(param_1 + 200));
          lVar6 = _AMRestoreCreatePathFromURL(uVar5,local_48);
          if (lVar6 == 0) {
            lVar6 = 0;
            _AMRLog(3,&cf_failedtocreatepathstringfor_s,local_40);
            uVar3 = 0x12;
          }
          else {
            uVar3 = __sendFileToDevice(param_1,lVar6);
            if (uVar3 == 0) {
              uVar4 = __sendCommandToDevice(param_1,param_4,0);
              uVar3 = 0;
              if (uVar4 != 0) {
                _AMRLog(3,&cf_devicerejected_s__d_,local_40,uVar4);
                uVar3 = uVar4;
              }
            }
            else {
              _AMRLog(3,&cf_failedtosend_s__d_,local_40,uVar3);
            }
          }
        }
        goto LAB_000f2125;
      }
      pcVar7 = &cf_failedtostat_s;
    }
    else {
      pcVar7 = &cf_failedtocreateurlfor_s;
    }
    uVar3 = 0;
    _AMRLog(3,pcVar7,local_40);
    if (local_31 != '\0') {
      uVar3 = _AMAuthInstallToRestoreError(iVar2);
    }
  }
  lVar6 = 0;
LAB_000f2125:
  if (local_48 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  return uVar3;
}


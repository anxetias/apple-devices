// rea decompile_all
// name: __MobileActivationWaitForBaseband
// address: 0x13859f
// body: available
// range: 0x13859f-0x13878c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __MobileActivationWaitForBaseband(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long local_40;
  int local_34;
  
  local_34 = -0x17fffff9;
  if (*(char *)(param_1 + 0x94) == '\0') {
    return -0x17ffff7c;
  }
  lVar4 = _AMDeviceCopyValueWithError(param_1,0,&cf_TelephonyCapability,&local_34);
  if (lVar4 != 0) {
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFBooleanGetTypeID();
    if ((lVar5 == lVar6) && (cVar3 = _CFBooleanGetValue(lVar4), cVar3 != '\0')) {
      iVar10 = 1;
      local_40 = 0;
      do {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,
                          "Waiting for baseband to become ready (%u) [Retry %d of %d]",
                          *(undefined4 *)(param_1 + 0x10),iVar10,0x1e);
        lVar5 = _AMDeviceCopyValueWithError(param_1,0,&cf_BasebandStatus,&local_34);
        lVar6 = local_40;
        if (lVar5 == 0) {
LAB_001386d7:
          local_40 = lVar6;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar2 = _md_log_log;
          uVar1 = *(undefined4 *)(param_1 + 0x10);
          uVar9 = _AMDErrorString(local_34);
          __os_log_internal(0,uVar2,0x10,"Failed to retrieve baseband status (%u): %s",uVar1,uVar9);
          lVar5 = local_40;
          break;
        }
        lVar7 = _CFGetTypeID(lVar5);
        lVar8 = _CFStringGetTypeID();
        lVar6 = lVar5;
        if (lVar7 != lVar8) goto LAB_001386d7;
        cVar3 = _CFEqual(lVar5,&cf_BBNotReady);
        if (cVar3 == '\0') {
          _CFRelease(lVar5);
          goto LAB_00138736;
        }
        _sleep(2);
        iVar10 = iVar10 + 1;
      } while (iVar10 != 0x1f);
      if (local_34 == 0) {
        local_34 = -0x17fffff4;
      }
      goto LAB_00138740;
    }
  }
LAB_00138736:
  local_34 = 0;
  lVar5 = 0;
LAB_00138740:
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return local_34;
}


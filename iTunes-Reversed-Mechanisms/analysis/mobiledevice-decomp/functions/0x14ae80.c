// rea decompile_all
// name: _createShadowPath
// address: 0x14ae80
// body: available
// range: 0x14ae80-0x14b2f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14b292 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * _createShadowPath(long param_1,char *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  size_t sVar7;
  uchar *puVar8;
  long lVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  undefined1 local_4e8 [64];
  byte local_4a8 [32];
  char local_488 [80];
  char local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,1,"ENTRY bundle: %s",param_2);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    lVar5 = _CFStringCreateCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
    if (lVar5 != 0) {
      cVar3 = _CFStringGetCString(lVar5,local_4e8,0x40,0x8000100);
      if (cVar3 == '\0') {
        pcVar12 = "CFStringGetCString failed";
LAB_0014b06e:
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar10 = (char *)0x0;
        __os_log_internal(0,_md_log_log,0x10,pcVar12);
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"bundle: %s",param_2);
        if (param_3 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"invalid parameter! shadow_parent: %p",0);
LAB_0014b067:
          pcVar12 = "create_shadow_dir_path failed";
          goto LAB_0014b06e;
        }
        pvVar6 = (void *)_copyComponentOfPath(param_2);
        if (pvVar6 == (void *)0x0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"copyComponentOfPath failed");
          goto LAB_0014b067;
        }
        sVar7 = _strlen(param_2);
        puVar8 = _CC_SHA256(param_2,(CC_LONG)sVar7,local_4a8);
        if (puVar8 == (uchar *)0x0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar2 = _md_log_log;
          piVar11 = ___error();
          pcVar10 = _strerror(*piVar11);
          __os_log_internal(0,uVar2,0x10,"CC_SHA256 failed: %s",pcVar10);
LAB_0014b05f:
          _free(pvVar6);
          goto LAB_0014b067;
        }
        lVar9 = 0;
        do {
          bVar1 = local_4a8[lVar9];
          local_488[lVar9 * 2] = "0123456789abcdef"[bVar1 >> 4];
          local_488[lVar9 * 2 + 1] = "0123456789abcdef"[bVar1 & 0xf];
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0x20);
        local_488[0x40] = 0;
        uVar4 = _snprintf(local_438,0x400,"%s/%s/%s/%s",param_3,local_488,local_4e8,pvVar6);
        if (0x3ff < uVar4) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"path too long! %s/%s/%s/%s",param_3,local_488,
                            local_4e8,pvVar6);
          goto LAB_0014b05f;
        }
        pcVar10 = _strdup(local_438);
        _free(pvVar6);
        if (pcVar10 == (char *)0x0) goto LAB_0014b067;
      }
      _CFRelease(lVar5);
      goto LAB_0014b0c2;
    }
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  pcVar10 = (char *)0x0;
  __os_log_internal(0,_md_log_log,0x10,"AMDeviceCopyDeviceIdentifier failed");
LAB_0014b0c2:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  pcVar12 = "NULL";
  if (pcVar10 != (char *)0x0) {
    pcVar12 = pcVar10;
  }
  __os_log_internal(0,_md_log_log,1,"returning: %s",pcVar12);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return pcVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


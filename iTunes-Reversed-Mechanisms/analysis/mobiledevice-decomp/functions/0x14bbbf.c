// rea decompile_all
// name: _createDictFromFile
// address: 0x14bbbf
// body: available
// range: 0x14bbbf-0x14bedc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _createDictFromFile(char *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  ssize_t sVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 local_c0 [96];
  char *local_60;
  long local_30;
  
  local_30 = 0;
  iVar1 = _open(param_1,0);
  if (iVar1 == -1) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar9 = _md_log_log;
    piVar7 = ___error();
    pcVar8 = _strerror(*piVar7);
    __os_log_internal(0,uVar9,0x10,"open failed for %s : %s",param_1,pcVar8);
    return 0;
  }
  iVar2 = _fstat_INODE64(iVar1,local_c0);
  pcVar8 = local_60;
  if (iVar2 == 0) {
    pvVar3 = _malloc((size_t)local_60);
    if (pvVar3 != (void *)0x0) {
      sVar4 = _read(iVar1,pvVar3,(size_t)pcVar8);
      if (sVar4 == -1) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar9 = _md_log_log;
        piVar7 = ___error();
        pcVar8 = _strerror(*piVar7);
        lVar5 = 0;
        __os_log_internal(0,uVar9,0x10,"read failed: %s",pcVar8);
      }
      else {
        lVar5 = _CFDataCreateWithBytesNoCopy
                          (0,pvVar3,sVar4,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
        if (lVar5 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar5 = 0;
          __os_log_internal(0,_md_log_log,0x10,"CFDataCreateWithBytesNoCopy failed");
        }
        else {
          lVar6 = _CFPropertyListCreateWithData(0,lVar5,0,0,&local_30);
          if (lVar6 != 0) goto LAB_0014bc76;
          if (local_30 != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar6 = 0;
            __os_log_internal(0,_md_log_log,0x10,"CFPropertyListCreateWithData failed: %@",local_30)
            ;
            goto LAB_0014bc76;
          }
        }
      }
      lVar6 = 0;
      goto LAB_0014bc76;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar8 = "malloc failed to allocate %lld bytes";
    uVar9 = _md_log_log;
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar9 = _md_log_log;
    piVar7 = ___error();
    local_60 = _strerror(*piVar7);
    pcVar8 = "fstat failed: %s";
  }
  lVar5 = 0;
  __os_log_internal(0,uVar9,0x10,pcVar8,local_60);
  lVar6 = 0;
  pvVar3 = (void *)0x0;
LAB_0014bc76:
  _close(iVar1);
  if (local_30 != 0) {
    _CFRelease();
  }
  local_30 = 0;
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (pvVar3 != (void *)0x0) {
    _free(pvVar3);
  }
  return lVar6;
}


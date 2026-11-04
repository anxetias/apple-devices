// rea decompile_all
// name: __CreateDictFromFileContents
// address: 0x146a69
// body: available
// range: 0x146a69-0x146f1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __CreateDictFromFileContents(char *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  char *pcVar10;
  undefined8 uVar11;
  int local_160;
  short local_15a;
  long local_158;
  int local_d0;
  short local_ca;
  long local_c8;
  char *local_70;
  long local_40;
  long local_38;
  
  if (param_1 != (char *)0x0) {
    iVar1 = _lstat_INODE64();
    if (iVar1 == -1) {
      piVar9 = ___error();
      if (*piVar9 != 2) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar11 = _md_log_log;
        piVar9 = ___error();
        pcVar4 = _strerror(*piVar9);
        pcVar10 = "Could not lstat %s: %s";
LAB_00146cd0:
        __os_log_internal(0,uVar11,0x10,pcVar10,param_1,pcVar4);
        return 0;
      }
    }
    else {
      iVar1 = _open(param_1,0);
      if (iVar1 != -1) {
        iVar2 = _fstat_INODE64(iVar1,&local_d0);
        pcVar4 = local_70;
        if (iVar2 == -1) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar11 = _md_log_log;
          piVar9 = ___error();
          pcVar4 = _strerror(*piVar9);
          uVar8 = 0;
          __os_log_internal(0,uVar11,0x10,"Could not fstat %s: %s",param_1,pcVar4);
        }
        else {
          if ((((local_ca == 1) && (local_15a == 1)) && (local_d0 == local_160)) &&
             (local_c8 == local_158)) {
            pvVar3 = _malloc((size_t)local_70);
            if (pvVar3 != (void *)0x0) {
              pcVar4 = (char *)_read(iVar1,pvVar3,(size_t)pcVar4);
              if (pcVar4 == local_70) {
                uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
                lVar5 = _CFDataCreateWithBytesNoCopy
                                  (uVar11,pvVar3,pcVar4,
                                   *(undefined8 *)PTR__kCFAllocatorNull_004410f8);
                if (lVar5 == 0) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar8 = 0;
                  __os_log_internal(0,_md_log_log,0x10,"Could not convert buffer to data object");
                }
                else {
                  lVar6 = _CFPropertyListCreateWithData(0,lVar5,2,0,0);
                  if (lVar6 == 0) {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    uVar8 = 0;
                    __os_log_internal(0,_md_log_log,0x10,"Could not create plist from file %s",
                                      param_1);
                  }
                  else {
                    local_40 = lVar6;
                    local_38 = lVar5;
                    lVar5 = _CFGetTypeID(lVar6);
                    lVar7 = _CFDictionaryGetTypeID();
                    lVar6 = local_40;
                    if (lVar5 == lVar7) {
                      uVar8 = _CFDictionaryCreateMutableCopy(uVar11,0,local_40);
                      lVar5 = local_38;
                    }
                    else {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      lVar5 = local_38;
                      uVar8 = 0;
                      __os_log_internal(0,_md_log_log,0x10,
                                        "Plist from file %s was not dictionary type.",param_1);
                      lVar6 = local_40;
                    }
                    _CFRelease(lVar6);
                  }
                  _CFRelease(lVar5);
                }
              }
              else {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar11 = _md_log_log;
                piVar9 = ___error();
                pcVar4 = _strerror(*piVar9);
                uVar8 = 0;
                __os_log_internal(0,uVar11,0x10,"Could not read %s: %s",param_1,pcVar4);
              }
              _free(pvVar3);
              goto LAB_00146c98;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar4 = "Could not allocate %lld bytes";
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar4 = "File smelled fishy when loading %s";
            local_70 = param_1;
          }
          uVar8 = 0;
          __os_log_internal(0,_md_log_log,0x10,pcVar4,local_70);
        }
LAB_00146c98:
        _close(iVar1);
        return uVar8;
      }
      piVar9 = ___error();
      if (*piVar9 != 2) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar11 = _md_log_log;
        piVar9 = ___error();
        pcVar4 = _strerror(*piVar9);
        pcVar10 = "Could not open %s: %s";
        goto LAB_00146cd0;
      }
    }
  }
  return 0;
}


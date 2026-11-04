// rea decompile_all
// name: __AMDeviceUpdateOldPackage
// address: 0x14c327
// body: available
// range: 0x14c327-0x14cc7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
__AMDeviceUpdateOldPackage
          (undefined8 param_1,char *param_2,char *param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  long lVar9;
  void *pvVar10;
  size_t sVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined1 auVar15 [16];
  
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  pcVar13 = "FALSE";
  if (param_5 != '\0') {
    pcVar13 = "TRUE";
  }
  uVar2 = __os_log_internal(0,_md_log_log,0,"copy_new_to_shadow: %s",pcVar13);
  auVar15._0_4_ = -(uint)((int)((ulong)param_1 >> 0x20) == 0 && (int)param_1 == 0);
  auVar15._4_4_ = -(uint)((int)param_3 == 0 && (int)((ulong)param_3 >> 0x20) == 0);
  auVar15._8_4_ = -(uint)((int)((ulong)param_2 >> 0x20) == 0 && (int)param_2 == 0);
  auVar15._12_4_ = -(uint)((int)param_4 == 0 && (int)((ulong)param_4 >> 0x20) == 0);
  iVar3 = movmskps(uVar2,auVar15);
  if (iVar3 != 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"invalid parameter device: %p, new_path: %p, bundleID: %p",
                      param_1,param_3,param_4);
    return 0xe8000001;
  }
  lVar4 = __AMDeviceCopyInstalledAppInfo(param_1,param_4);
  if (lVar4 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"unable to get installed app info");
    return 0xe8000001;
  }
  if (param_5 == '\0') {
    pcVar13 = (char *)0x0;
LAB_0014c6ef:
    pcVar6 = (char *)_createSiblingInPath(param_2,"InstalledAppInfo");
    if (pcVar6 != (char *)0x0) {
      lVar9 = _CFPropertyListCreateData(0,lVar4,200,0);
      if (lVar9 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"CFPropertyListCreateData failed: %@",0);
        _CFRelease(0);
LAB_0014c841:
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar12 = _md_log_log;
        piVar7 = ___error();
        pcVar14 = _strerror(*piVar7);
        __os_log_internal(0,uVar12,0x10,"writeDataToFile failed: %s",pcVar14);
        uVar2 = 0xe8000001;
      }
      else {
        sVar5 = _CFDataGetLength(lVar9);
        iVar3 = _open(pcVar6,0x602,0x1c0);
        if (iVar3 == -1) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar12 = _md_log_log;
          piVar7 = ___error();
          pcVar14 = _strerror(*piVar7);
          __os_log_internal(0,uVar12,0x10,"open failed for %s : %s",pcVar6,pcVar14);
          _CFRelease(lVar9);
          goto LAB_0014c841;
        }
        pvVar10 = (void *)_CFDataGetBytePtr(lVar9);
        sVar11 = _write(iVar3,pvVar10,sVar5);
        if (sVar5 != sVar11) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar12 = _md_log_log;
          piVar7 = ___error();
          pcVar14 = _strerror(*piVar7);
          __os_log_internal(0,uVar12,0x10,"write failed for %s : %s",pcVar6,pcVar14);
          _close(iVar3);
          _CFRelease(lVar9);
          goto LAB_0014c841;
        }
        _close(iVar3);
        _CFRelease(lVar9);
        uVar2 = 0;
      }
      _CFRelease(lVar4);
      _free(pcVar6);
      goto LAB_0014c96e;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "createSiblingInPath failed";
  }
  else {
    pcVar13 = _strdup(param_2);
    sVar5 = _strlen(pcVar13);
    if (pcVar13[sVar5 - 1] == '/') {
      pcVar13[sVar5 - 1] = '\0';
    }
    pcVar6 = _rindex(pcVar13,0x2f);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
      iVar3 = _removefile(pcVar13,(removefile_state_t)0x0,1);
      if ((iVar3 != 0) && (piVar7 = ___error(), *piVar7 != 2)) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar12 = _md_log_log;
        piVar7 = ___error();
        param_2 = _strerror(*piVar7);
        pcVar6 = "removefile failed for %s : %s";
        param_3 = pcVar13;
        goto LAB_0014c95a;
      }
      iVar3 = _mkdir(pcVar13,0x1c0);
      if ((iVar3 != 0) && (piVar7 = ___error(), *piVar7 != 0x11)) {
        piVar7 = ___error();
        if (*piVar7 == 2) {
          pcVar6 = _strdup(pcVar13);
          pcVar14 = pcVar6 + (*pcVar6 == '/');
          do {
            if (*pcVar14 == '/') {
              *pcVar14 = '\0';
              iVar3 = _mkdir(pcVar6,0x1c0);
              if (((iVar3 != 0) && (piVar7 = ___error(), *piVar7 != 0x11)) &&
                 (piVar7 = ___error(), *piVar7 != 2)) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar12 = _md_log_log;
                piVar7 = ___error();
                pcVar14 = _strerror(*piVar7);
                __os_log_internal(0,uVar12,0x10,"mkdir error for %s : %s",pcVar6,pcVar14);
                goto LAB_0014c911;
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar12 = _md_log_log;
              piVar7 = ___error();
              iVar3 = *piVar7;
              piVar7 = ___error();
              pcVar8 = _strerror(*piVar7);
              __os_log_internal(0,uVar12,0x10,"mkdir result for %s : %d %s",pcVar6,iVar3,pcVar8);
              *pcVar14 = '/';
            }
            else if (*pcVar14 == '\0') goto LAB_0014c5c3;
            pcVar14 = pcVar14 + 1;
          } while( true );
        }
        goto LAB_0014c91d;
      }
      goto LAB_0014c69c;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"unable to find parent of %s",param_2);
    _free(pcVar13);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "copyParentOfPath failed";
    pcVar13 = (char *)0x0;
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar6);
LAB_0014c961:
  _CFRelease(lVar4);
  uVar2 = 0xe8000001;
LAB_0014c96e:
  if (pcVar13 != (char *)0x0) {
    _free(pcVar13);
  }
  return uVar2;
LAB_0014c5c3:
  iVar3 = _mkdir(pcVar13,0x1c0);
  if (iVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar12 = _md_log_log;
    piVar7 = ___error();
    iVar3 = *piVar7;
    piVar7 = ___error();
    pcVar14 = _strerror(*piVar7);
    __os_log_internal(0,uVar12,0x10,"created %s",pcVar6,iVar3,pcVar14);
LAB_0014c690:
    _free(pcVar6);
LAB_0014c69c:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"copying:\n%s\nto\n%s",param_3,pcVar13);
    iVar3 = _copyfile(param_3,pcVar13,(copyfile_state_t)0x0,0xc800f);
    if (iVar3 == 0) goto LAB_0014c6ef;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar12 = _md_log_log;
    piVar7 = ___error();
    _strerror(*piVar7);
    pcVar6 = "copyfile failed to copy\n%s\nto\n%s\n: %s";
  }
  else {
    piVar7 = ___error();
    iVar3 = *piVar7;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar12 = _md_log_log;
    piVar7 = ___error();
    iVar1 = *piVar7;
    piVar7 = ___error();
    pcVar14 = _strerror(*piVar7);
    if (iVar3 == 0x11) {
      __os_log_internal(0,uVar12,0x10,"mkdir result for %s : %d %s",pcVar6,iVar1,pcVar14);
      goto LAB_0014c690;
    }
    __os_log_internal(0,uVar12,0x10,"mkdir failed for %s : %d %s",pcVar6,iVar1,pcVar14);
LAB_0014c911:
    _free(pcVar6);
LAB_0014c91d:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar12 = _md_log_log;
    piVar7 = ___error();
    param_2 = _strerror(*piVar7);
    pcVar6 = "mkdir_recursive failed to create %s : %s";
    param_3 = pcVar13;
  }
LAB_0014c95a:
  __os_log_internal(0,uVar12,0x10,pcVar6,param_3,param_2);
  goto LAB_0014c961;
}


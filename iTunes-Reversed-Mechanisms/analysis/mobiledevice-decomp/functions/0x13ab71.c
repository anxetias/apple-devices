// rea decompile_all
// name: __IterateOverPairingRecords
// address: 0x13ab71
// body: available
// range: 0x13ab71-0x13b159 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x13b140 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __IterateOverPairingRecords(code *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long local_c70;
  char local_c68 [1032];
  undefined1 local_860 [1048];
  undefined1 local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_448,0x401);
  local_c70 = 0;
  if ((param_1 == (code *)0x0) || (param_2 == 0)) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    uVar12 = 0xffffffff;
  }
  else {
    lVar4 = _AMDGetPairingRecordDirectoryPath();
    uVar12 = 0xffffffff;
    if ((lVar4 != 0) &&
       (cVar2 = _CFStringGetCString(lVar4,local_448,0x401,0x8000100), cVar2 != '\0')) {
      ___bzero(local_860,0x418);
      lVar4 = _opendir_INODE64(local_448);
      if (lVar4 != 0) {
        uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
LAB_0013ac4e:
        do {
          do {
            ___bzero(local_c68,0x401);
            iVar3 = _readdir_r_INODE64(lVar4,local_860,&local_c70);
            if ((iVar3 != 0) || (local_c70 == 0)) {
              uVar12 = 0;
              goto LAB_0013b07a;
            }
            _snprintf(local_c68,0x401,"%s/%s",local_448,local_c70 + 0x15);
            lVar1 = local_c70;
            uVar9 = *(byte *)(local_c70 + 0x15) - 0x2e;
            if (uVar9 == 0) {
              if (*(byte *)(local_c70 + 0x16) == 0) goto LAB_0013ac4e;
              uVar9 = *(byte *)(local_c70 + 0x16) - 0x2e;
              if (uVar9 == 0) {
                uVar9 = (uint)*(byte *)(local_c70 + 0x17);
              }
            }
          } while (uVar9 == 0);
          pcVar10 = (char *)(local_c70 + 0x15);
          if (*(char *)(local_c70 + 0x14) != '\b') {
            if (*(char *)(local_c70 + 0x14) == '\n') {
              _unlink(local_c68);
            }
            else {
              iVar3 = _strcmp(pcVar10,"RemotePairing");
              if (iVar3 == 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar11 = 2;
                pcVar10 = "Skipping removal of RemotePairing data vault subdirectory: %s";
              }
              else {
                piVar8 = ___error();
                *piVar8 = 0;
                iVar3 = _removefile(local_c68,(removefile_state_t)0x0,1);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar11 = _md_log_log;
                if (iVar3 < 0) {
                  piVar8 = ___error();
                  __os_log_internal(0,uVar11,0x10,"removefile(3) %s failed: %d: %d",local_c68,iVar3,
                                    *piVar8);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar11 = 0x10;
                  pcVar10 = "Unable to remove non-file object %s.";
                }
                else {
                  uVar11 = 2;
                  pcVar10 = "Removed non-file object %s.";
                }
              }
LAB_0013af04:
              __os_log_internal(0,_md_log_log,uVar11,pcVar10,local_c68);
            }
            goto LAB_0013ac4e;
          }
          lVar5 = _CFStringCreateWithCString(uVar12,pcVar10,0x8000100);
          if (lVar5 != 0) {
            lVar6 = _CFStringFind(lVar5,&cf__tmp,0xc);
            _CFRelease(lVar5);
            if (lVar6 != -1) goto LAB_0013ac4e;
          }
          sVar7 = _strlen(pcVar10);
          uVar9 = (uint)sVar7;
          if (sVar7 != 0x19) {
            uVar13 = uVar9;
            if (6 < (int)uVar9) goto LAB_0013ae1f;
LAB_0013ae41:
            iVar3 = _unlink(local_c68);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar11 = _md_log_log;
            if (iVar3 == 0) {
              uVar11 = 2;
              pcVar10 = "Removed unrecognized file %s";
              goto LAB_0013af04;
            }
            piVar8 = ___error();
            __os_log_internal(0,uVar11,0x10,"Could not unlink unrecognized file %s, errno: %d",
                              local_c68,*piVar8);
            goto LAB_0013ac4e;
          }
          iVar3 = _strncmp(pcVar10,"SystemConfiguration.plist",0x19);
          uVar13 = 0x19;
          if (iVar3 == 0) goto LAB_0013ac4e;
LAB_0013ae1f:
          iVar3 = _strcmp(pcVar10 + ((ulong)(uVar9 & 0x7fffffff) - 6),".plist");
          if (iVar3 != 0) goto LAB_0013ae41;
          if (uVar13 == 0x1e) {
            uVar9 = 0x19;
            do {
              if (((long)*pcVar10 < 0) ||
                 ((PTR___DefaultRuneLocale_004412a0[(long)*pcVar10 * 4 + 0x3e] & 1) == 0))
              goto LAB_0013ae41;
              pcVar10 = pcVar10 + 1;
              uVar9 = uVar9 - 1;
            } while (1 < uVar9);
          }
          else {
            if (uVar13 != 0x2e) {
              if (uVar13 == 0x1f) {
                uVar9 = 9;
                do {
                  if (((long)*pcVar10 < 0) ||
                     ((PTR___DefaultRuneLocale_004412a0[(long)*pcVar10 * 4 + 0x3e] & 1) == 0))
                  goto LAB_0013ae41;
                  pcVar10 = pcVar10 + 1;
                  uVar9 = uVar9 - 1;
                } while (1 < uVar9);
                if (*(char *)(lVar1 + 0x1d) == '-') {
                  pcVar10 = (char *)(lVar1 + 0x1e);
                  uVar9 = 0x11;
                  do {
                    if (((long)*pcVar10 < 0) ||
                       ((PTR___DefaultRuneLocale_004412a0[(long)*pcVar10 * 4 + 0x3e] & 1) == 0))
                    goto LAB_0013ae41;
                    pcVar10 = pcVar10 + 1;
                    uVar9 = uVar9 - 1;
                  } while (1 < uVar9);
                  goto LAB_0013affb;
                }
              }
              goto LAB_0013ae41;
            }
            uVar9 = 0x29;
            do {
              if (((long)*pcVar10 < 0) ||
                 ((PTR___DefaultRuneLocale_004412a0[(long)*pcVar10 * 4 + 0x3e] & 1) == 0))
              goto LAB_0013ae41;
              pcVar10 = pcVar10 + 1;
              uVar9 = uVar9 - 1;
            } while (1 < uVar9);
          }
LAB_0013affb:
          cVar2 = (*param_1)(local_c68,param_2);
        } while (cVar2 != '\0');
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,2,"Early exit after %s because callback returned FALSE.",
                          local_c68);
        uVar12 = 1;
LAB_0013b07a:
        _closedir(lVar4);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}


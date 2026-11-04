// rea decompile_all
// name: ____AMDSecureListenForNotificationsWithRetainedContext_block_invoke
// address: 0x155f75
// body: available
// range: 0x155f75-0x15646b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMDSecureListenForNotificationsWithRetainedContext_block_invoke(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  void *pvVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  size_t sVar16;
  code *pcVar17;
  socklen_t local_48;
  int local_44;
  long local_40;
  code *local_38;
  
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 != 0) {
    pcVar17 = *(code **)(lVar12 + 0x38);
    uVar2 = *(undefined8 *)(lVar12 + 0x48);
    local_44 = 0;
    local_48 = 8;
    if (*(long *)(lVar12 + 0x18) == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = *(int *)(*(long *)(lVar12 + 0x18) + 0x10);
    }
    iVar7 = _getsockopt(iVar7,0xffff,0x1020,&local_44,&local_48);
    if (iVar7 == 0) {
      sVar16 = (size_t)local_44;
      local_38 = pcVar17;
      pvVar10 = _calloc(1,sVar16);
      if (pvVar10 == (void *)0x0) {
        bVar4 = 1;
        bVar5 = false;
        pcVar17 = local_38;
      }
      else {
        iVar7 = _AMDServiceConnectionReceive(*(undefined8 *)(lVar12 + 0x18),pvVar10,sVar16);
        bVar4 = 1;
        if (iVar7 == 0) {
          bVar5 = false;
          pcVar17 = local_38;
        }
        else if (iVar7 == -1) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar3 = _md_log_log;
          piVar8 = ___error();
          pcVar9 = _strerror(*piVar8);
          bVar5 = false;
          __os_log_internal(0,uVar3,0x10,"AMDServiceConnectionReceive() failed: %s",pcVar9);
          pcVar17 = local_38;
        }
        else {
          local_40 = lVar12;
          _CFDataAppendBytes(*(undefined8 *)(lVar12 + 0x20),pvVar10,(long)iVar7);
LAB_001560c8:
          uVar3 = *(undefined8 *)(local_40 + 0x20);
          iVar7 = _CFDataGetLength(uVar3);
          puVar11 = (uint *)_CFDataGetMutableBytePtr(uVar3);
          bVar5 = true;
          if (3 < iVar7) {
            uVar15 = *puVar11;
            uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                     uVar15 << 0x18;
            iVar1 = uVar15 + 4;
            if (iVar1 <= iVar7) {
              lVar12 = _CFDataGetMutableBytePtr(uVar3);
              lVar13 = _CreatePropertyListFromBuffer(0,lVar12 + 4,(long)(int)uVar15);
              _CFDataReplaceBytes(uVar3,0,(long)iVar1,0,0);
              if (lVar13 == 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar17 = local_38;
                lVar12 = local_40;
                bVar5 = false;
                __os_log_internal(0,_md_log_log,0x10,
                                  "Should have gotten a message, BUT DID NOT!!!!!!!");
                bVar4 = 1;
                goto LAB_00156362;
              }
              lVar12 = _CFGetTypeID(lVar13);
              lVar14 = _CFDictionaryGetTypeID();
              if (lVar12 != lVar14) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                lVar12 = local_40;
                bVar5 = false;
                __os_log_internal(0,_md_log_log,0x10,"Message was of the wrong type!!!");
                _CFRelease(lVar13);
                bVar4 = 1;
                pcVar17 = local_38;
                goto LAB_00156362;
              }
              lVar12 = _CFDictionaryGetValue(lVar13,&cf_Command);
              if (lVar12 == 0) goto LAB_0015623a;
              cVar6 = _CFEqual(lVar12,&cf_RelayNotification);
              if (cVar6 != '\0') {
                lVar12 = _CFDictionaryGetValue(lVar13,&cf_Name);
                if (lVar12 != 0) goto code_r0x00156195;
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                lVar12 = local_40;
                bVar4 = 0;
                __os_log_internal(0,_md_log_log,0x10,"No name in post notification command");
                _CFRelease(lVar13);
                pcVar17 = local_38;
                goto LAB_00156362;
              }
              cVar6 = _CFEqual(lVar12,&cf_ProxyDeath);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              if (cVar6 == '\0') {
                __os_log_internal(0,_md_log_log,0x10);
                goto LAB_0015623a;
              }
              bVar5 = false;
              __os_log_internal(0,_md_log_log,2,"PROXY_DEATH message received on conn %@.",
                                *(undefined8 *)(local_40 + 0x18));
              _CFRelease(lVar13);
            }
          }
          bVar4 = 0;
          lVar12 = local_40;
          pcVar17 = local_38;
        }
LAB_00156362:
        _free(pvVar10);
      }
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar3 = _md_log_log;
      piVar8 = ___error();
      pcVar9 = _strerror(*piVar8);
      bVar5 = false;
      __os_log_internal(0,uVar3,0x10,"getsockopt(..., SO_NREAD, ...) failed: %s",pcVar9);
      bVar4 = 1;
    }
    if ((bool)(pcVar17 != (code *)0x0 & bVar4)) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,2,"Delivering kAMDNotificationFacePlant on conn %@.",
                        *(undefined8 *)(lVar12 + 0x18));
      (*pcVar17)(&cf_AMDNotificationFaceplant,uVar2);
    }
    if (!bVar5) {
      _AMDSecureShutdownNotificationProxy(*(undefined8 *)(lVar12 + 0x18));
    }
  }
  return;
code_r0x00156195:
  if (local_38 != (code *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,"Delivering %@ notification on conn %@.",lVar12,
                      *(undefined8 *)(local_40 + 0x18));
    (*local_38)(lVar12,uVar2);
LAB_0015623a:
    _CFRelease(lVar13);
  }
  goto LAB_001560c8;
}


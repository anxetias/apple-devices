// rea decompile_all
// name: _lockconn_receive_message
// address: 0x111bbb
// body: available
// range: 0x111bbb-0x1121c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _lockconn_receive_message(long param_1,long *param_2)

{
  int kq;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  char *pcVar13;
  ulong uVar14;
  void *pvVar15;
  undefined8 uVar16;
  ulong uVar17;
  uint *puVar18;
  kevent local_88;
  timespec local_68;
  long *local_58;
  void *local_50;
  uint local_44;
  void *local_40;
  long local_38;
  
  local_44 = 0;
  piVar12 = *(int **)(param_1 + 0x38);
  if (piVar12 == (int *)0x0) {
    return 0xe8000007;
  }
  if (param_2 == (long *)0x0) {
    return 0xe8000007;
  }
  iVar2 = *piVar12;
  if (iVar2 == -1) {
    return 0xe8000007;
  }
  local_58 = param_2;
  local_38 = param_1;
  kq = _kqueue();
  if (kq == 0) {
    uVar3 = 0xe8000003;
LAB_00111cc4:
    iVar2 = _close(kq);
    if (iVar2 == -1) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar16 = _md_log_log;
      piVar5 = ___error();
      __os_log_internal(0,uVar16,0x10,"close(2) on kqueue %d failed: %d",kq,*piVar5);
    }
  }
  else {
    local_88.ident = (uintptr_t)iVar2;
    local_68.tv_sec = (__darwin_time_t)_gSocketReceiveTimeout;
    local_68.tv_nsec = 0;
    local_88.filter = -1;
    local_88.flags = 0x11;
    local_88._12_8_ = 0;
    local_88._20_8_ = 0;
    local_88.udata._4_4_ = 0;
    iVar1 = _kevent(kq,&local_88,1,&local_88,1,&local_68);
    if (iVar1 == 0) {
      uVar3 = 0xe800000c;
    }
    else if (iVar1 == -1) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar16 = _md_log_log;
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      __os_log_internal(0,uVar16,0x10,"kqueue(2) on socket %d failed: %s",iVar2,pcVar6);
      uVar3 = 0xe8000003;
    }
    else {
      uVar3 = 0;
    }
    if (kq != -1) goto LAB_00111cc4;
  }
  if (uVar3 != 0) {
    return uVar3;
  }
  puVar18 = &local_44;
  uVar14 = 0;
  do {
    if (*(long *)(piVar12 + 2) == 0) {
      uVar17 = _recv(*piVar12,puVar18,4 - uVar14,0);
      if (uVar17 == 0xffffffffffffffff) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        lVar10 = local_38;
        uVar16 = _md_log_log;
        piVar12 = ___error();
        pcVar6 = _strerror(*piVar12);
        pcVar13 = "Could not receive size of message: %s";
      }
      else {
        if (uVar17 != 0) goto LAB_00111d29;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        lVar10 = local_38;
        uVar16 = _md_log_log;
        piVar12 = ___error();
        pcVar6 = _strerror(*piVar12);
        pcVar13 = "Far end closed connection: %s\n";
      }
      __os_log_internal(0,uVar16,0x10,pcVar13,pcVar6);
LAB_00111e2c:
      iVar2 = _AMDeviceIsValid(lVar10);
      return (uint)(iVar2 == 0) << 7 | 0xe8000004;
    }
    uVar3 = _SSL_read(*(long *)(piVar12 + 2),puVar18);
    uVar17 = (ulong)uVar3;
    if ((int)uVar3 < 1) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      lVar10 = local_38;
      uVar16 = _md_log_log;
      uVar8 = __ssl_strerror(*(undefined8 *)(piVar12 + 2),uVar17);
      __os_log_internal(0,uVar16,0x10,"Could not securely receive message size: %s",uVar8);
      goto LAB_00111e2c;
    }
LAB_00111d29:
    uVar14 = uVar14 + uVar17;
    puVar18 = (uint *)((long)puVar18 + uVar17);
  } while (uVar14 < 4);
  if (local_44 == 0) {
    return 0xe8000013;
  }
  uVar3 = local_44 >> 0x18 | (local_44 & 0xff0000) >> 8 | (local_44 & 0xff00) << 8 |
          local_44 << 0x18;
  uVar14 = (ulong)uVar3;
  if (uVar3 < 0x40001) {
    pvVar7 = *(void **)(piVar12 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = _malloc(uVar14);
LAB_00111e79:
      *(void **)(piVar12 + 4) = pvVar7;
      *(ulong *)(piVar12 + 6) = uVar14;
      pvVar15 = (void *)0x0;
      goto LAB_00111e83;
    }
    if (*(ulong *)(piVar12 + 6) < uVar14) {
      pvVar7 = _reallocf(pvVar7,uVar14);
      goto LAB_00111e79;
    }
    local_40 = (void *)0x0;
    pvVar15 = local_40;
LAB_00111ed6:
    local_40 = pvVar15;
    uVar17 = 0;
    local_50 = pvVar7;
    do {
      if (*(long *)(piVar12 + 2) == 0) {
        uVar9 = _recv(*piVar12,pvVar7,(long)(int)(uVar3 - (int)uVar17),0);
        if (uVar9 == 0xffffffffffffffff) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar10 = local_38;
          uVar16 = _md_log_log;
          pcVar6 = _strerror(-1);
          pcVar13 = "Could not receive message: %s\n";
        }
        else {
          if (uVar9 != 0) goto LAB_00111f28;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar10 = local_38;
          uVar16 = _md_log_log;
          piVar12 = ___error();
          pcVar6 = _strerror(*piVar12);
          pcVar13 = "Far end closed connection: %s\n";
        }
        __os_log_internal(0,uVar16,0x10,pcVar13,pcVar6);
LAB_0011204b:
        iVar2 = _AMDeviceIsValid(lVar10);
        uVar3 = (uint)(iVar2 == 0) << 7 | 0xe8000004;
        goto LAB_0011206f;
      }
      uVar4 = _SSL_read(*(long *)(piVar12 + 2),pvVar7);
      uVar9 = (ulong)uVar4;
      if ((int)uVar4 < 1) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar16 = _md_log_log;
        uVar8 = __ssl_strerror(*(undefined8 *)(piVar12 + 2),uVar4);
        __os_log_internal(0,uVar16,0x10,"Could not securely receive message: %s\n",uVar8);
        lVar10 = local_38;
        goto LAB_0011204b;
      }
LAB_00111f28:
      uVar17 = uVar17 + uVar9;
      pvVar7 = (void *)((long)pvVar7 + uVar9);
    } while (uVar17 < uVar14);
    lVar10 = _CFDataCreateWithBytesNoCopy
                       (0,local_50,uVar14,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
    if (lVar10 == 0) {
      uVar3 = 0xe8000003;
LAB_0011206f:
      lVar10 = 0;
      pvVar15 = local_40;
      goto LAB_00112073;
    }
    uVar3 = 0;
    lVar11 = _CFPropertyListCreateWithData(0,lVar10,0,0,0);
    pvVar15 = local_40;
    if (lVar11 != 0) {
      *local_58 = lVar11;
      goto LAB_00112073;
    }
  }
  else {
    pvVar7 = _malloc(uVar14);
    pvVar15 = pvVar7;
LAB_00111e83:
    if (pvVar7 != (void *)0x0) goto LAB_00111ed6;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar10 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Could not alloc buffer of size: %d\n",uVar3);
  }
  uVar3 = 0xe8000003;
LAB_00112073:
  if (pvVar15 != (void *)0x0) {
    _free(pvVar15);
  }
  if (lVar10 != 0) {
    _CFRelease(lVar10);
  }
  return uVar3;
}


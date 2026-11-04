// rea decompile_all
// name: __connect_to_port
// address: 0x132e05
// body: available
// range: 0x132e05-0x1334b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x133481 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __connect_to_port(long param_1,ushort param_2,socklen_t *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  socklen_t sVar4;
  char *pcVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  socklen_t sVar11;
  undefined8 uVar12;
  undefined4 local_c8;
  undefined4 local_c4;
  socklen_t local_c0;
  socklen_t local_bc;
  sockaddr local_b8 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_bc = 0xffffffff;
  local_c4 = 1;
  uVar12 = 0xe8000007;
  if ((param_1 != 0) && (param_3 != (socklen_t *)0x0)) {
    if (*(char *)(param_1 + 0x94) == '\x01') {
      lVar7 = *(long *)(param_1 + 0xf8);
      if (lVar7 == 0 && *(int *)(param_1 + 0x30) != 0) {
        iVar3 = _USBMuxConnectByPort(*(undefined4 *)(param_1 + 0x10),param_2,&local_bc);
        if (iVar3 == 0) {
          bVar1 = false;
          sVar11 = local_bc;
          goto LAB_00133257;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar2 = _md_log_log;
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        pcVar5 = _strerror(iVar3);
        __os_log_internal(0,uVar2,0x10,
                          "USBMuxConnectByPort failed to connect to the device %@ on port %u: %s",
                          uVar12,param_2 << 8 | param_2 >> 8,pcVar5);
      }
      else {
        local_c8 = 1;
        if (lVar7 == 0) {
          if (*(long *)(param_1 + 0xa8) != 0) {
            lVar7 = _CFRetain();
            goto LAB_00132fa3;
          }
        }
        else {
          pvVar6 = (void *)(*(code *)PTR__objc_msgSend_00441098)
                                     (lVar7,"copyTunnelAddressSockaddrStorage");
          if (pvVar6 == (void *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Failed to copy tunnel address struct from device."
                             );
          }
          else {
            lVar7 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,pvVar6,0x80);
            if (lVar7 == 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"Failed to create data object.");
            }
            _free(pvVar6);
LAB_00132fa3:
            if (lVar7 != 0) {
              lVar8 = _CFDataGetLength(lVar7);
              if (lVar8 == 0x80) {
                uVar12 = _CFDataGetLength(lVar7);
                _CFDataGetBytes(lVar7,0,uVar12,local_b8);
                if (local_b8[0].sa_family != 2) {
                  if (local_b8[0].sa_family == 0x1e) {
                    local_c0 = 0x1c;
                    uVar10 = 0x1e;
                    goto LAB_001330be;
                  }
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar10 = (uint)local_b8[0].sa_family;
                  pcVar5 = "ss_family is %d, not AF_INET(%d) or AF_INET6(%d).";
                  iVar3 = 2;
LAB_0013323f:
                  __os_log_internal(0,_md_log_log,0x10,pcVar5,uVar10,iVar3);
                  goto LAB_00133246;
                }
                local_c0 = 0x10;
                uVar10 = 2;
LAB_001330be:
                local_b8[0].sa_data._0_2_ = param_2;
                sVar4 = _socket(uVar10,1,0);
                if (sVar4 == 0xffffffff) {
                  piVar9 = ___error();
                  iVar3 = *piVar9;
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar5 = "socket(%d , SOCK_STREAM, 0) failed: %d.\n";
                  goto LAB_0013323f;
                }
                _setsockopt(sVar4,0xffff,0x1022,&local_c8,4);
                iVar3 = _connect(sVar4,local_b8,local_c0);
                if (iVar3 == 0) {
                  bVar1 = false;
                  sVar11 = sVar4;
                  local_bc = sVar4;
                }
                else {
                  piVar9 = ___error();
                  iVar3 = *piVar9;
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,0x10,"connect() failed: %d.\n",iVar3);
                  iVar3 = _close(sVar4);
                  bVar1 = true;
                  sVar11 = 0xffffffff;
                  if (iVar3 == -1) {
                    local_c0 = sVar4;
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    uVar12 = _md_log_log;
                    piVar9 = ___error();
                    __os_log_internal(0,uVar12,0x10,"close(2) on socket %d failed: %d",local_c0,
                                      *piVar9);
                  }
                }
              }
              else {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"%s doesn\'t look like a sockaddr_storage.",
                                  "_AMDeviceConnectByAddressAndPort");
LAB_00133246:
                bVar1 = true;
                sVar11 = 0xffffffff;
              }
              _CFRelease(lVar7);
              goto LAB_00133257;
            }
          }
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"No network address available for device.");
        bVar1 = true;
        sVar11 = 0xffffffff;
LAB_00133257:
        if ((!bVar1) && (sVar11 != 0xffffffff)) {
          iVar3 = _setsockopt(sVar11,0xffff,0x1022,&local_c4,4);
          if (iVar3 == 0) {
            *param_3 = local_bc;
            uVar12 = 0;
            goto LAB_0013330f;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar12 = _md_log_log;
          piVar9 = ___error();
          iVar3 = *piVar9;
          piVar9 = ___error();
          pcVar5 = _strerror(*piVar9);
          __os_log_internal(0,uVar12,0x10,
                            "Could not set the socket option to disable signals: %d (%s)",iVar3,
                            pcVar5);
          uVar12 = 0xe8000003;
          goto LAB_001332fa;
        }
      }
      iVar3 = _AMDeviceIsValid(param_1);
      uVar12 = 0xe8000065;
      if (iVar3 == 0) {
        uVar12 = 0xe8000084;
      }
    }
    else {
      uVar12 = 0xe8000084;
    }
  }
LAB_001332fa:
  if (local_bc != 0xffffffff) {
    iVar3 = _close(local_bc);
    if (iVar3 == -1) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      sVar11 = local_bc;
      uVar2 = _md_log_log;
      piVar9 = ___error();
      __os_log_internal(0,uVar2,0x10,"close(2) on socket %d failed: %d",sVar11,*piVar9);
    }
  }
LAB_0013330f:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


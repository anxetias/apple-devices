// rea decompile_all
// name: _lockconn_send_message
// address: 0x1117f6
// body: available
// range: 0x1117f6-0x111bba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lockconn_send_message(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  char *pcVar6;
  ssize_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  uint local_3c;
  ulong local_38;
  
  piVar10 = *(int **)(param_1 + 0x38);
  if (*piVar10 != -1) {
    lVar3 = _CFPropertyListCreateData(0,param_2,100,0,0);
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Could not encode message as XML");
    }
    else {
      uVar4 = _CFDataGetLength(lVar3);
      pvVar5 = (void *)_CFDataGetBytePtr(lVar3);
      uVar2 = (uint)uVar4;
      local_3c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      local_38 = uVar4;
      if (*(long *)(piVar10 + 2) == 0) {
        sVar7 = _send(*piVar10,&local_3c,4,0);
        if (sVar7 == 4) {
LAB_00111958:
          uVar4 = local_38;
          uVar12 = local_38 & 0xffffffff;
          if (uVar12 != 0) {
            uVar13 = 0;
            do {
              if (*(long *)(piVar10 + 2) == 0) {
                uVar8 = _send(*piVar10,pvVar5,(long)((int)uVar4 - (int)uVar13),0);
                if (uVar8 == 0xffffffffffffffff) {
                  _CFRelease(lVar3);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar9 = _md_log_log;
                  piVar10 = ___error();
                  pcVar6 = _strerror(*piVar10);
                  pcVar11 = "Could not send message: %s.";
                  goto LAB_00111af8;
                }
              }
              else {
                uVar2 = _SSL_write(*(long *)(piVar10 + 2),pvVar5);
                uVar8 = (ulong)uVar2;
                if ((int)uVar2 < 1) {
                  _CFRelease(lVar3);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar9 = _md_log_log;
                  pcVar6 = (char *)__ssl_strerror(*(undefined8 *)(piVar10 + 2),uVar8);
                  pcVar11 = "Could not securely send message: %s.";
LAB_00111af8:
                  __os_log_internal(0,uVar9,0x10,pcVar11,pcVar6);
                  goto LAB_00111a60;
                }
              }
              uVar13 = uVar13 + uVar8;
              pvVar5 = (void *)((long)pvVar5 + uVar8);
            } while (uVar13 < uVar12);
          }
          _CFRelease(lVar3);
          return 0;
        }
        if (sVar7 == -1) {
          _CFRelease(lVar3);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar9 = _md_log_log;
          uVar2 = (uint)local_38;
          piVar10 = ___error();
          pcVar6 = _strerror(*piVar10);
          pcVar11 = "Could not send message size %d: %s.";
        }
        else {
          _CFRelease(lVar3);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar9 = _md_log_log;
          uVar2 = (uint)local_38;
          piVar10 = ___error();
          pcVar6 = _strerror(*piVar10);
          pcVar11 = "Could not send all 4 bytes of size %d: %s.";
        }
        uVar4 = (ulong)uVar2;
      }
      else {
        iVar1 = _SSL_write(*(long *)(piVar10 + 2),&local_3c,4);
        if (iVar1 < 1) {
          _CFRelease(lVar3);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar9 = _md_log_log;
          pcVar6 = (char *)__ssl_strerror(*(undefined8 *)(piVar10 + 2),iVar1);
          pcVar11 = "Could not securely send message size %d: %s.";
          uVar4 = local_38;
        }
        else {
          if (iVar1 == 4) goto LAB_00111958;
          _CFRelease(lVar3);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar9 = _md_log_log;
          pcVar6 = (char *)__ssl_strerror(*(undefined8 *)(piVar10 + 2),iVar1);
          pcVar11 = "Could not securely send all 4 bytes of size %d: %s.";
          uVar4 = local_38;
        }
      }
      __os_log_internal(0,uVar9,0x10,pcVar11,uVar4,pcVar6);
    }
  }
LAB_00111a60:
  iVar1 = _AMDeviceIsValid(param_1);
  uVar9 = 0xe800002d;
  if (iVar1 == 0) {
    uVar9 = 0xe8000084;
  }
  return uVar9;
}


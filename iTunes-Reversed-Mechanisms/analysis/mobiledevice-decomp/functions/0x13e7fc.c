// rea decompile_all
// name: _AMDeviceCopyFile
// address: 0x13e7fc
// body: available
// range: 0x13e7fc-0x13ec4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AMDeviceCopyFile(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      char *param_5,undefined8 param_6,undefined1 param_7)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  size_t sVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong uVar9;
  undefined1 local_100 [96];
  ulong local_a0;
  long local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  int local_34;
  
  local_48 = param_5;
  _fire_transfer_callback(param_2,param_3,param_1,param_5);
  local_50 = param_6;
  uVar2 = _AMDeviceOpenWriteTruncateImmutable(param_4,param_6,&local_40,param_7);
  pcVar1 = local_48;
  if (uVar2 != 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    if (uVar2 < 0x19) {
      uVar7 = *(undefined8 *)(&_afcErrors + (ulong)uVar2 * 0x10);
    }
    else {
      uVar7 = 0;
    }
    __os_log_internal(0,_md_log_log,1,"Couldn\'t create %s on device: %s",local_50,uVar7);
    return uVar2;
  }
  local_70 = param_1;
  local_68 = param_2;
  iVar3 = _open(local_48,0);
  if (iVar3 == -1) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,"Could not open %s on the host",pcVar1);
  }
  else {
    iVar4 = _fstat_INODE64(iVar3,local_100);
    if (iVar4 == -1) {
      _AFCFileRefClose(param_4,local_40);
      _close(iVar3);
    }
    else {
      pvVar5 = _malloc(0x100000);
      if (pvVar5 == (void *)0x0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Could not allocate io buffer");
        _AFCFileRefClose(param_4,local_40);
        _close(iVar3);
        return 0xe8000003;
      }
      local_34 = iVar3;
      if (local_a0 != 0) {
        uVar9 = 0;
        local_60 = pvVar5;
        local_58 = param_4;
        do {
          uVar7 = local_58;
          pvVar5 = local_60;
          sVar8 = local_a0 - uVar9;
          if (0xfffff < sVar8) {
            sVar8 = 0x100000;
          }
          sVar6 = _read(local_34,local_60,sVar8);
          if (sVar6 != sVar8) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            iVar3 = local_34;
            __os_log_internal(0,_md_log_log,1,"Could not read from %s",local_48);
            _AFCFileRefClose(uVar7,local_40);
            _close(iVar3);
LAB_0013eb9f:
            _free(pvVar5);
            return 0xe8000001;
          }
          uVar2 = _AFCFileRefWrite(uVar7,local_40,pvVar5,sVar8);
          if (uVar2 != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            iVar3 = local_34;
            if (uVar2 < 0x19) {
              uVar7 = *(undefined8 *)(&_afcErrors + (ulong)uVar2 * 0x10);
            }
            else {
              uVar7 = 0;
            }
            __os_log_internal(0,_md_log_log,1,"Could not write to file on device: %s",uVar7);
            _AFCFileRefClose(local_58,local_40);
            _close(iVar3);
            pvVar5 = local_60;
            goto LAB_0013eb9f;
          }
          if (local_70 != 0) {
            *(long *)(local_70 + 0x18) = *(long *)(local_70 + 0x18) + sVar8;
            _fire_transfer_callback(local_68,param_3,local_70,local_48);
          }
          uVar9 = uVar9 + sVar8;
          pvVar5 = local_60;
          param_4 = local_58;
        } while (uVar9 < local_a0);
      }
      _free(pvVar5);
      _close(local_34);
      uVar2 = _AFCFileRefClose(param_4,local_40);
      if (uVar2 == 0) {
        if (local_70 != 0) {
          *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + 1;
          _fire_transfer_callback(local_68,param_3,local_70,local_48);
          return 0;
        }
        return 0;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      if (uVar2 < 0x19) {
        uVar7 = *(undefined8 *)(&_afcErrors + (ulong)uVar2 * 0x10);
      }
      else {
        uVar7 = 0;
      }
      __os_log_internal(0,_md_log_log,1,"Couldn\'t close %s on device: %s",local_50,uVar7);
    }
  }
  return 0xe8000001;
}


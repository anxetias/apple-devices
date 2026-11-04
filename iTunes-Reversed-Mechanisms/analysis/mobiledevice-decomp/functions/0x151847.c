// rea decompile_all
// name: _delta_transfer_directory
// address: 0x151847
// body: available
// range: 0x151847-0x151d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _delta_transfer_directory
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                undefined8 param_6,undefined8 param_7,long param_8,undefined1 param_9)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  undefined1 local_188 [4];
  ushort local_184;
  long local_158;
  long local_128;
  undefined1 local_f8 [4];
  ushort local_f4;
  long local_c8;
  long local_98;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_35;
  uint local_34;
  
  local_50 = param_6;
  uVar5 = _AFCDirectoryCreate(param_2,param_3);
  if ((int)uVar5 == 0) {
    local_60 = param_5;
    local_40 = param_2;
    lVar6 = _opendir_INODE64(param_1);
    if (lVar6 == 0) {
      uVar5 = 1;
    }
    else {
      local_35 = local_60 != 0 && param_4 != 0;
      local_34 = 1;
      local_68 = param_3;
      local_58 = param_4;
      local_48 = param_1;
LAB_001518c3:
      lVar7 = _readdir_INODE64(lVar6);
      if (lVar7 != 0) {
        uVar3 = *(byte *)(lVar7 + 0x15) - 0x2e;
        if (uVar3 == 0) goto LAB_0015193e;
        goto LAB_001518e0;
      }
      if (param_8 == 0) {
        local_34 = 0;
      }
      else {
        *(long *)(param_8 + 0x10) = *(long *)(param_8 + 0x10) + 1;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_34 = 0;
        __os_log_internal(0,_md_log_log,2,"done with dir %s %llu %d\n",local_48,
                          *(undefined8 *)(param_8 + 0x10),0);
      }
LAB_00151d13:
      _closedir(lVar6);
LAB_00151d1b:
      uVar5 = (ulong)local_34;
    }
  }
  return uVar5;
LAB_0015193e:
  if (*(byte *)(lVar7 + 0x16) == 0) goto LAB_001518c3;
  uVar3 = *(byte *)(lVar7 + 0x16) - 0x2e;
  if (uVar3 == 0) {
    uVar3 = (uint)*(byte *)(lVar7 + 0x17);
  }
LAB_001518e0:
  if (uVar3 == 0) goto LAB_001518c3;
  lVar7 = lVar7 + 0x15;
  pvVar8 = (void *)_alloc_path(local_48,lVar7);
  if (pvVar8 == (void *)0x0) goto LAB_00151d13;
  pvVar9 = (void *)_alloc_path(local_68,lVar7);
  if (pvVar9 == (void *)0x0) {
    pvVar11 = (void *)0x0;
LAB_00151d44:
    pvVar10 = (void *)0x0;
    uVar3 = local_34;
    goto LAB_00151d47;
  }
  pvVar11 = pvVar9;
  if (local_35 == '\0') {
    pvVar10 = (void *)0x0;
  }
  else {
    pvVar10 = (void *)_alloc_path(local_60,lVar7);
    if (pvVar10 == (void *)0x0) goto LAB_00151d44;
  }
  iVar4 = _lstat_INODE64(pvVar8,local_f8);
  if (iVar4 == -1) {
    local_34 = 1;
    uVar3 = local_34;
    goto LAB_00151d47;
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,2,"Pondering %s",pvVar8);
  if (pvVar10 == (void *)0x0) {
LAB_001519fb:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,"Need to copy %s",pvVar8);
    uVar1 = local_40;
    uVar2 = local_f4 & 0xf000;
    if (uVar2 == 0xa000) {
      uVar3 = _copy_symlink(local_40,pvVar8,pvVar9);
    }
    else if (uVar2 == 0x8000) {
      uVar3 = _copy_touch_file(param_8,local_50,param_7,local_40,pvVar8,pvVar9,local_c8,param_9);
    }
    else {
      if (uVar2 != 0x4000) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,2,"Ignoring unknown type\n");
        goto LAB_00151b15;
      }
      uVar3 = _delta_transfer_directory
                        (pvVar8,local_40,pvVar9,local_58,pvVar10,local_50,param_7,param_8,param_9);
      if (uVar3 != 0) goto LAB_00151d47;
      uVar3 = _afc_touch(uVar1,pvVar9,local_c8);
    }
    if (uVar3 != 0) {
LAB_00151d47:
      local_34 = uVar3;
      _closedir(lVar6);
      _free(pvVar8);
      if (pvVar9 != (void *)0x0) {
        _free(pvVar11);
      }
      if (pvVar10 != (void *)0x0) {
        _free(pvVar10);
      }
      goto LAB_00151d1b;
    }
  }
  else {
    uVar3 = _afc_stat(local_58,pvVar10,local_188);
    if (uVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_34 = uVar3;
      __os_log_internal(0,_md_log_log,2,"Copying %s because afc_stat returned %d",pvVar8,uVar3);
      goto LAB_001519fb;
    }
    local_34 = 0;
    if (((((local_f4 & 0xf000) == 0x4000) || ((local_f4 & 0xf000) != (local_184 & 0xf000))) ||
        (local_c8 != local_158)) || (local_98 != local_128)) goto LAB_001519fb;
    if (param_8 != 0) {
      *(long *)(param_8 + 0x10) = *(long *)(param_8 + 0x10) + 1;
      *(long *)(param_8 + 0x18) = local_98 + *(long *)(param_8 + 0x18);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_34 = 0;
      __os_log_internal(0,_md_log_log,2,"skipping %s %llu %llu\n",pvVar8,
                        *(undefined8 *)(param_8 + 0x10),local_98);
      _fire_transfer_callback(local_50,param_7,param_8,pvVar8);
      goto LAB_00151b15;
    }
  }
  local_34 = 0;
LAB_00151b15:
  _free(pvVar8);
  _free(pvVar9);
  if (pvVar10 != (void *)0x0) {
    _free(pvVar10);
  }
  goto LAB_001518c3;
}


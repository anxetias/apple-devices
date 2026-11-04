// rea decompile_all
// name: _read_file
// address: 0x13e406
// body: available
// range: 0x13e406-0x13e771 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

ulong _read_file(code *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  code *pcVar9;
  ulong uVar10;
  char *pcVar11;
  undefined1 local_d8 [96];
  code *local_78;
  void *local_48;
  code *local_40;
  int local_34;
  
  if (param_1 == (code *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Invalid path.";
  }
  else {
    if (param_2 != 0) {
      iVar1 = _open((char *)param_1,0);
      if (iVar1 == -1) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar7 = _md_log_log;
        piVar5 = ___error();
        pcVar11 = _strerror(*piVar5);
        __os_log_internal(0,uVar7,1,"failed to open %s : %s",param_1,pcVar11);
        return 0;
      }
      iVar2 = _fstat_INODE64(iVar1,local_d8);
      pcVar6 = local_78;
      if (iVar2 == 0) {
        pcVar8 = (code *)0x10000;
        if ((long)local_78 < 0x10000) {
          pcVar8 = local_78;
        }
        local_48 = _malloc((size_t)pcVar8);
        if (local_48 != (void *)0x0) {
          local_34 = iVar1;
          if ((long)pcVar6 < 1) {
            uVar10 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
          }
          else {
            pcVar11 = (char *)0x0;
            local_40 = param_1;
            while( true ) {
              pcVar9 = pcVar6 + -(long)pcVar11;
              if ((long)pcVar8 < (long)(pcVar6 + -(long)pcVar11)) {
                pcVar9 = pcVar8;
              }
              pcVar4 = (char *)_read(local_34,local_48,(size_t)pcVar9);
              if (pcVar4 == (char *)0xffffffffffffffff) break;
              if ((long)pcVar4 < 1) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar11 = "read failed for %s, got %lld bytes";
                uVar7 = _md_log_log;
                pcVar6 = local_40;
                goto LAB_0013e568;
              }
              uVar3 = (**(code **)(param_2 + 0x10))(param_2,local_48,pcVar4);
              uVar10 = (ulong)uVar3;
              if (((char)uVar3 == '\0') ||
                 (pcVar11 = pcVar11 + (long)pcVar4, pcVar6 = local_78, pcVar8 = pcVar9,
                 (long)local_78 <= (long)pcVar11)) goto LAB_0013e56f;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar6 = local_40;
            uVar7 = _md_log_log;
            piVar5 = ___error();
            pcVar4 = _strerror(*piVar5);
            pcVar11 = "read failed for %s : %s";
LAB_0013e568:
            uVar10 = 0;
            __os_log_internal(0,uVar7,1,pcVar11,pcVar6,pcVar4);
          }
LAB_0013e56f:
          _close(local_34);
          _free(local_48);
          return uVar10;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar7 = _md_log_log;
        piVar5 = ___error();
        pcVar11 = _strerror(*piVar5);
        pcVar4 = "malloc failed for %ld bytes: %s";
        param_1 = pcVar8;
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar7 = _md_log_log;
        piVar5 = ___error();
        pcVar11 = _strerror(*piVar5);
        pcVar4 = "failed to stat %s : %s";
      }
      __os_log_internal(0,uVar7,1,pcVar4,param_1,pcVar11);
      _close(iVar1);
      return 0;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Invalid process_block.";
  }
  __os_log_internal(0,_md_log_log,1,pcVar11);
  return 0;
}


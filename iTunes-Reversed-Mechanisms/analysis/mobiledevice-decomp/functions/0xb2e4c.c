// rea decompile_all
// name: _MI_read_file
// address: 0xb2e4c
// body: available
// range: 0xb2e4c-0xb2fb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

ulong _MI_read_file(char *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  char *pcVar5;
  int *piVar6;
  cfstringStruct *pcVar7;
  size_t sVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  size_t sVar12;
  size_t sVar13;
  undefined1 local_d8 [96];
  size_t local_78;
  long local_48;
  char *local_40;
  int local_34;
  
  local_48 = param_2;
  iVar1 = _open(param_1,0x100);
  if (iVar1 == -1) {
    _MI_read_file_cold_3(param_1);
  }
  else {
    iVar2 = _fstat_INODE64(iVar1,local_d8);
    sVar8 = local_78;
    if (iVar2 == 0) {
      sVar12 = 0x10000;
      if ((long)local_78 < 0x10000) {
        sVar12 = local_78;
      }
      pvVar4 = _malloc(sVar12);
      if (pvVar4 != (void *)0x0) {
        local_34 = iVar1;
        if ((long)sVar8 < 1) {
          uVar11 = CONCAT71((int7)((ulong)param_1 >> 8),1);
        }
        else {
          pcVar10 = (char *)0x0;
          local_40 = param_1;
          while( true ) {
            sVar13 = sVar8 - (long)pcVar10;
            if ((long)sVar12 < (long)(sVar8 - (long)pcVar10)) {
              sVar13 = sVar12;
            }
            pcVar5 = (char *)_read(local_34,pvVar4,sVar13);
            if (pcVar5 == (char *)0xffffffffffffffff) break;
            if ((long)pcVar5 < 1) {
              pcVar7 = &cf_readfailedfor_s_got_lldbytes;
              uVar9 = 0x27e;
              goto LAB_000b2f65;
            }
            uVar3 = (**(code **)(local_48 + 0x10))(local_48,pvVar4,pcVar5);
            uVar11 = (ulong)uVar3;
            if (((char)uVar3 == '\0') ||
               (pcVar10 = pcVar10 + (long)pcVar5, sVar8 = local_78, sVar12 = sVar13,
               (long)local_78 <= (long)pcVar10)) goto LAB_000b2f6c;
          }
          piVar6 = ___error();
          pcVar5 = _strerror(*piVar6);
          pcVar7 = &cf_readfailedfor_s__s;
          uVar9 = 0x279;
LAB_000b2f65:
          uVar11 = 0;
          _dmlog("MI_read_file",uVar9,pcVar7,local_40,pcVar5);
        }
LAB_000b2f6c:
        _close(local_34);
        _free(pvVar4);
        goto LAB_000b2f7c;
      }
      _MI_read_file_cold_2(sVar12);
    }
    else {
      _MI_read_file_cold_1(param_1);
    }
    _close(iVar1);
  }
  uVar11 = 0;
LAB_000b2f7c:
  return uVar11 & 0xffffffff;
}


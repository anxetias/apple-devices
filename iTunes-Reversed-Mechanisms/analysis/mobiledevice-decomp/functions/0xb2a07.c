// rea decompile_all
// name: _filecmp
// address: 0xb2a07
// body: available
// range: 0xb2a07-0xb2c41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _filecmp(char *param_1,char *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  ssize_t sVar6;
  int *piVar7;
  size_t sVar8;
  char *pcVar9;
  undefined7 uVar11;
  ulong uVar10;
  long lVar12;
  undefined1 local_170 [96];
  long local_110;
  undefined1 local_e0 [96];
  long local_80;
  char *local_50;
  char *local_48;
  void *local_40;
  undefined1 local_35;
  int local_34;
  
  iVar2 = _open(param_1,0x100);
  iVar3 = _open(param_2,0x100);
  pvVar5 = _malloc(0x8000);
  local_40 = _malloc(0x8000);
  if ((iVar2 == -1) || (iVar3 == -1)) {
    _filecmp_cold_4();
    uVar10 = 0;
LAB_000b2baf:
    if (iVar2 == -1) goto LAB_000b2bbb;
  }
  else {
    iVar4 = _fstat_INODE64(iVar2,local_e0);
    if (iVar4 == 0) {
      iVar4 = _fstat_INODE64(iVar3,local_170);
      if (iVar4 == 0) {
        uVar11 = (undefined7)((ulong)param_1 >> 8);
        local_34 = iVar2;
        if (local_80 == local_110) {
          if (0 < local_80) {
            lVar12 = 0;
            local_50 = param_1;
            local_48 = param_2;
            while ((iVar2 = local_34, sVar6 = _read(local_34,pvVar5,0x8000), sVar6 != -1 ||
                   (piVar7 = ___error(), *piVar7 == 0))) {
              pvVar1 = local_40;
              sVar8 = _read(iVar3,local_40,0x8000);
              if ((sVar8 == 0xffffffffffffffff) && (piVar7 = ___error(), *piVar7 != 0)) {
                piVar7 = ___error();
                pcVar9 = _strerror(*piVar7);
                uVar10 = 0;
                _dmlog("filecmp",0x442,&cf_2read__s_failed__s_num_read__ld,local_48,pcVar9,
                       0xffffffffffffffff);
                iVar2 = local_34;
                goto LAB_000b2baf;
              }
              iVar4 = _memcmp(pvVar5,pvVar1,sVar8);
              uVar10 = CONCAT71((int7)((ulong)pvVar1 >> 8),iVar4 == 0);
              iVar2 = local_34;
              if ((iVar4 != 0) || (lVar12 = lVar12 + sVar8, local_80 <= lVar12)) goto LAB_000b2baf;
            }
            piVar7 = ___error();
            pcVar9 = _strerror(*piVar7);
            uVar10 = 0;
            _dmlog("filecmp",0x43e,&cf_1read__s_failed__s_num_read__ld,local_50,pcVar9,
                   0xffffffffffffffff);
            goto LAB_000b2baf;
          }
          uVar10 = CONCAT71(uVar11,1);
        }
        else {
          _filecmp_cold_3(param_1,param_2,&local_35);
          uVar10 = CONCAT71(uVar11,local_35);
          iVar2 = local_34;
        }
        goto LAB_000b2bb4;
      }
      _filecmp_cold_2(param_2);
    }
    else {
      _filecmp_cold_1(param_1);
    }
    uVar10 = 0;
  }
LAB_000b2bb4:
  _close(iVar2);
LAB_000b2bbb:
  if (iVar3 != -1) {
    _close(iVar3);
  }
  if (pvVar5 != (void *)0x0) {
    _free(pvVar5);
  }
  if (local_40 != (void *)0x0) {
    _free(local_40);
  }
  return uVar10 & 0xffffff01;
}


// rea decompile_all
// name: __writeSizeAlignedFile
// address: 0xfc778
// body: available
// range: 0xfc778-0xfcbb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfcbb4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __writeSizeAlignedFile
              (undefined8 param_1,size_t param_2,void *param_3,ulong param_4,void *param_5,
              size_t *param_6,code *param_7,char param_8,FILE *param_9,char param_10,
              undefined8 param_11)

{
  size_t *psVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  ssize_t sVar6;
  size_t sVar7;
  int *piVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  ulong uVar15;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  ulong local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  void *local_478;
  size_t *local_470;
  void *local_468;
  size_t local_460;
  long local_458;
  void *local_450;
  undefined8 local_448;
  int local_43c;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_2 == 0) {
    iVar3 = 1;
  }
  else {
    local_470 = param_6;
    local_468 = param_5;
    ___bzero(local_438,0x400);
    local_488 = 0;
    uStack_480 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_4f8 = 0;
    uStack_4f0 = 0;
    local_508 = 0;
    uStack_500 = 0;
    _CFStringGetFileSystemRepresentation(param_1,local_438,0x400);
    iVar2 = _open(local_438,0,0);
    if (iVar2 == -1) {
      _AMRLogWithFilePath(3,param_1,&cf_Failedtoopenfile);
      piVar8 = ___error();
      iVar3 = __AMRestoreErrorForErrno(*piVar8,0xb);
    }
    else {
      iVar3 = _fstat_INODE64(iVar2,&local_508);
      if (iVar3 == -1) {
        _AMRLogWithFilePath(3,param_1,&cf_Failedtostatfile);
        piVar8 = ___error();
        iVar3 = __AMRestoreErrorForErrno(*piVar8,0xb);
      }
      else {
        local_448 = param_1;
        pvVar4 = _malloc(param_2);
        if (param_2 < param_4) {
          do {
            if ((param_8 != '\0') && (sVar5 = _fwrite(param_3,param_2,1,param_9), sVar5 != 1)) {
              pcVar10 = &cf_Errorwritingprefixbuffertohost__dbytes;
              iVar3 = 0;
LAB_000fcb0a:
              _AMRLogWithFilePath(3,local_448,pcVar10,param_2);
              goto LAB_000fcb50;
            }
            iVar3 = (*param_7)(param_3,param_2,param_11);
            if (iVar3 != 0) {
              pcVar10 = &cf_Errorwritingprefixbuffer__dbytes;
              goto LAB_000fcb0a;
            }
            param_4 = param_4 - param_2;
            param_3 = (void *)((long)param_3 + param_2);
          } while (param_2 <= param_4);
        }
        if (param_4 != 0) {
          _memcpy(pvVar4,param_3,param_4);
        }
        pvVar14 = (void *)(param_4 + (long)pvVar4);
        uVar15 = (ulong)((uint)local_4a8 & 0x3f);
        lVar9 = 0x40 - uVar15;
        if (uVar15 == 0) {
          lVar9 = 0;
        }
        local_458 = 0;
        if (param_10 == '\0') {
          local_458 = lVar9;
        }
        local_450 = pvVar4;
        if (local_4a8 != 0) {
          pvVar11 = (void *)((long)pvVar4 + param_2);
          uVar15 = local_4a8;
          local_478 = pvVar11;
          local_460 = param_2;
          local_43c = iVar2;
          do {
            uVar12 = (long)pvVar11 - (long)pvVar14;
            if (uVar15 < (ulong)((long)pvVar11 - (long)pvVar14)) {
              uVar12 = uVar15;
            }
            sVar6 = _read(local_43c,pvVar14,uVar12);
            lVar9 = local_458;
            if (sVar6 == -1) {
              _AMRLogWithFilePath(3,local_448,&cf_Errorreadingfromfile__dbytesattempted,uVar12);
              iVar3 = 0xd;
              pvVar4 = local_450;
              iVar2 = local_43c;
              goto LAB_000fcb50;
            }
            if ((param_10 == '\0') && (uVar15 == local_4a8)) {
              *(int *)((long)pvVar14 + 4) = (int)uVar15 + (int)local_458;
            }
            pvVar14 = (void *)((long)pvVar14 + sVar6);
            if ((pvVar14 < pvVar11) && (pvVar11 <= (void *)((long)pvVar14 + local_458))) {
              lVar13 = (long)local_478 - (long)pvVar14;
              ___bzero(pvVar14,lVar13);
              local_458 = lVar9 - lVar13;
              pvVar11 = local_478;
              pvVar14 = local_478;
            }
            pvVar4 = local_450;
            sVar5 = local_460;
            if (pvVar14 == pvVar11) {
              if ((param_8 != '\0') && (sVar7 = _fwrite(local_450,local_460,1,param_9), sVar7 != 1))
              {
                iVar3 = 0;
                _AMRLogWithFilePath(3,local_448,&cf_Errorwritingbuffertodisk__dbytes,sVar5);
                iVar2 = local_43c;
                goto LAB_000fcb50;
              }
              iVar3 = (*param_7)(pvVar4,sVar5,param_11);
              pvVar14 = pvVar4;
              if (iVar3 != 0) {
                _AMRLogWithFilePath(3,local_448,&cf_Errorwritingbuffer__dbytes,local_460);
                pvVar4 = local_450;
                iVar2 = local_43c;
                goto LAB_000fcb50;
              }
            }
            uVar15 = uVar15 - sVar6;
            iVar2 = local_43c;
          } while (uVar15 != 0);
        }
        pvVar4 = local_450;
        psVar1 = local_470;
        *local_470 = 0;
        iVar3 = 0;
        sVar5 = (long)pvVar14 - (long)local_450;
        if (sVar5 == 0) {
          sVar5 = 0;
        }
        else {
          _memcpy(local_468,local_450,sVar5);
          *psVar1 = sVar5;
        }
        lVar9 = local_458;
        if (local_458 != 0) {
          ___bzero((long)local_468 + sVar5,local_458);
          *local_470 = *local_470 + lVar9;
        }
LAB_000fcb50:
        if (pvVar4 != (void *)0x0) {
          _free(pvVar4);
        }
      }
      _close(iVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}


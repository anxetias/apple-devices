// rea decompile_all
// name: __createDFUDataFromFile
// address: 0xebab0
// body: available
// range: 0xebab0-0xebd47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xebd43 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __createDFUDataFromFile(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  char *pcVar5;
  void *pvVar6;
  void *pvVar7;
  ssize_t sVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  size_t sVar14;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  _CFStringGetFileSystemRepresentation(param_1,local_438,0x400);
  iVar1 = _open(local_438,0,0);
  if (iVar1 == -1) {
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    lVar9 = 0;
    _AMRLogWithFilePath(3,param_1,&cf_unabletoopenDFUfile__s,pcVar5);
    goto LAB_000ebd1e;
  }
  iVar2 = _fstat_INODE64(iVar1);
  if (iVar2 == -1) {
    pvVar6 = (void *)0x0;
    lVar9 = 0;
  }
  else {
    if (param_2 == 0) {
      sVar14 = 0;
      sVar3 = 0;
    }
    else {
      sVar3 = _CFDataGetLength(param_2);
      uVar11 = (ulong)((uint)sVar3 & 0x3f);
      sVar14 = 0x40 - uVar11;
      if (uVar11 == 0) {
        sVar14 = 0;
      }
    }
    lVar9 = sVar3 + sVar14;
    pvVar6 = _malloc(lVar9 + 0x10U);
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (param_2 != 0) {
        pvVar7 = (void *)_CFDataGetBytePtr(param_2);
        _memcpy(pvVar6,pvVar7,sVar3);
        _memset((void *)((long)pvVar6 + sVar3),0xff,sVar14);
      }
      puVar13 = (undefined8 *)((long)pvVar6 + sVar14 + sVar3);
      sVar8 = _read(iVar1,puVar13,0);
      if (sVar8 == 0) {
        *puVar13 = 0x10005acffffffff;
        *(undefined4 *)(puVar13 + 1) = 0x10444655;
        uVar10 = 0xffffffff;
        if (lVar9 != 0) {
          lVar12 = 0;
          do {
            uVar10 = uVar10 >> 8 ^
                     *(uint *)(&__DFUComputeCRC_crctbl +
                              (ulong)(byte)(*(byte *)((long)pvVar6 + lVar12) ^ (byte)uVar10) * 4);
            lVar12 = lVar12 + 1;
          } while (lVar9 != lVar12);
        }
        lVar12 = 0;
        do {
          uVar10 = uVar10 >> 8 ^
                   *(uint *)(&__DFUComputeCRC_crctbl +
                            (ulong)(byte)(*(byte *)((long)puVar13 + lVar12) ^ (byte)uVar10) * 4);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0xc);
        *(uint *)((long)puVar13 + 0xc) = uVar10;
        lVar9 = _CFDataCreateWithBytesNoCopy
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,pvVar6,lVar9 + 0x10U,
                           *(undefined8 *)PTR__kCFAllocatorMalloc_004410f0);
        goto LAB_000ebcf9;
      }
    }
    lVar9 = 0;
  }
LAB_000ebcf9:
  _close(iVar1);
  if (lVar9 == 0 && pvVar6 != (void *)0x0) {
    _free(pvVar6);
    lVar9 = 0;
  }
LAB_000ebd1e:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar9;
}


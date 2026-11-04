// rea decompile_all
// name: _usbDFU_appendSuffix
// address: 0x2650bf
// body: available
// range: 0x2650bf-0x265294 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x265290 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _usbDFU_appendSuffix(long param_1,FILE *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ssize_t sVar4;
  off_t oVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 local_120 [96];
  long local_c0;
  undefined2 local_90;
  undefined4 local_8e;
  undefined2 local_8a;
  undefined4 local_88;
  undefined4 local_84;
  long local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  iVar3 = -9;
  if (((param_1 == 0) || (param_2 == (FILE *)0x0)) || (iVar1 = _fileno(param_2), iVar1 == -1))
  goto LAB_00265260;
  _lseek(iVar1,-0x10,2);
  sVar4 = _read(iVar1,&local_90,0x10);
  if (sVar4 == 0x10) {
    iVar3 = 0;
    uVar2 = (local_88 & 0xff) - 0x44;
    if (((0x11 < uVar2) || ((0x20005U >> (uVar2 & 0x1f) & 1) == 0)) && (local_88._3_1_ != '\x10')) {
      oVar5 = _lseek(iVar1,0,0);
      if ((oVar5 == -1) || (iVar3 = _fstat_INODE64(iVar1,local_120), iVar3 < 0)) goto LAB_0026528b;
      local_80 = param_1;
      if (local_c0 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar8 = 0xffffffffffffffff;
        do {
          sVar4 = _read(iVar1,local_78,0x40);
          if (sVar4 != 0) {
            if (sVar4 == -1) {
              iVar3 = -9;
              goto LAB_00265255;
            }
            lVar6 = 0;
            do {
              uVar8 = (ulong)((uint)(uVar8 >> 8) & 0xffffff ^
                             *(uint *)(&_calculateCRC_crctbl +
                                      (ulong)(byte)(local_78[lVar6] ^ (byte)uVar8) * 4));
              lVar6 = lVar6 + 1;
            } while (sVar4 != lVar6);
          }
          uVar7 = (undefined4)uVar8;
          local_c0 = local_c0 - sVar4;
        } while (local_c0 != 0);
      }
      local_90 = 0xffff;
      auVar9 = pshuflw(ZEXT416(*(uint *)(local_80 + 0x24)),ZEXT416(*(uint *)(local_80 + 0x24)),0xe1)
      ;
      local_8e = auVar9._0_4_;
      local_8a = 0x100;
      local_88 = 0x10444655;
      local_84 = uVar7;
      sVar4 = _write(iVar1,&local_90,0x10);
      iVar3 = (uint)(sVar4 != -1) * 9 + -9;
    }
  }
  else {
LAB_0026528b:
    iVar3 = -9;
  }
LAB_00265255:
  if (-1 < iVar1) {
    _close(iVar1);
  }
LAB_00265260:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}


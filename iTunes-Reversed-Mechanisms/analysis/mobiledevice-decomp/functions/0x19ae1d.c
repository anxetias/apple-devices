// rea decompile_all
// name: _flash
// address: 0x19ae1d
// body: available
// range: 0x19ae1d-0x19b2f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19b2f2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _flash(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_ECX;
  undefined4 uVar4;
  uint in_EDX;
  long in_RSI;
  undefined8 *in_RDI;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  bVar10 = in_ECX != 0;
  uVar7 = 0x53465769;
  if (bVar10) {
    uVar7 = 0x41444669;
  }
  uVar4 = 0x53465764;
  if (bVar10) {
    uVar4 = 0x41444664;
  }
  uVar6 = 0x53465763;
  if (bVar10) {
    uVar6 = 0x41444663;
  }
  if (*(char *)((long)in_RDI + 0x55) == '\x01') {
    if (_inRestore == '\0') {
      _uarpLogError(3,"verify_only set! Should not be attempting to flash!\n");
    }
    else {
      _puts("verify_only set! Should not be attempting to flash!");
    }
    iVar1 = 0x1e;
LAB_0019b231:
    _handle_shared_spi(in_RDI,0);
    goto LAB_0019b23f;
  }
  if ((_inRestore == '\0') || ((_logLevel & 2) == 0)) {
    _uarpLogInfo(3,"Preparing to flash 0x%x bytes of image to rid %d\n",(ulong)in_EDX,
                 *(undefined1 *)((long)in_RDI + 0x66));
  }
  else {
    _printf("Preparing to flash 0x%x bytes of image to rid %d\n",(ulong)in_EDX,
            (ulong)*(byte *)((long)in_RDI + 0x66));
  }
  if ((((char)in_ECX == '\0') && (iVar1 = _handle_shared_spi(), iVar1 != 0)) ||
     (local_bc = uVar7,
     iVar1 = (**(code **)(*(long *)*in_RDI + 0x68))
                       ((long *)*in_RDI,1,&local_bc,&local_78,0,&local_b8,0,0x40,0x40,10,0,0),
     iVar1 != 0)) {
LAB_0019b2d4:
    _handle_shared_spi(in_RDI,0);
    if (iVar1 != -0x1ffffd17) goto LAB_0019b23f;
  }
  else {
    iVar1 = _check_task_result(local_b8 & 0xff,uVar7);
    if (iVar1 == 4 && (char)in_ECX == '\0') {
      _flash_cold_1();
    }
    else if ((iVar1 == 0) && (SBORROW1('\0',local_b8._2_1_ & 0xc0))) {
      if (in_EDX != 0) {
        uVar5 = 1;
        uVar2 = 0xffffffff;
        uVar8 = 0;
        do {
          uVar9 = in_EDX - uVar8;
          if (0x3f < uVar9) {
            uVar9 = 0x40;
          }
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          ___memcpy_chk(&local_78,(ulong)uVar8 + in_RSI,uVar9,0x40);
          uVar2 = _CRCBuffer(&local_78,0x40,uVar2);
          if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
            _printf("Flashing block %d, CRC = 0x%08x\n",(ulong)uVar5,(ulong)uVar2);
          }
          else {
            _uarpLogInfo(3,"Flashing block %d, CRC = 0x%08x\n");
          }
          local_bc = uVar4;
          iVar1 = (**(code **)(*(long *)*in_RDI + 0x68))
                            ((long *)*in_RDI,1,&local_bc,&local_78,0,&local_b8,0,0x40,0x40,10,0,0);
          if (iVar1 != 0) goto LAB_0019b2d4;
          iVar1 = _check_task_result(local_b8 & 0xff,uVar4);
          if (((iVar1 != 0) || (uVar2 != *(uint *)((long)&local_b8 + (ulong)(in_ECX & 0xff) + 3)))
             || (uVar5 != *(ushort *)((long)&local_b8 + (ulong)(in_ECX & 0xff) + 1)))
          goto LAB_0019b270;
          uVar8 = uVar9 + uVar8;
          if ((uVar8 == in_EDX) == (char)(byte)local_b8 < '\0') {
            if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
              _printf("Expected more data: actual_more_data=0x%X, length=0x%X, (current_index + bytes_to_write) = 0x%X\n"
                      ,(ulong)(uint)((byte)local_b8 >> 7),(ulong)in_EDX,(ulong)uVar8);
            }
            else {
              _uarpLogInfo(3,
                           "Expected more data: actual_more_data=0x%X, length=0x%X, (current_index + bytes_to_write) = 0x%X\n"
                           ,(uint)((byte)local_b8 >> 7),in_EDX);
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar8 != in_EDX);
      }
      local_bc = uVar6;
      iVar1 = (**(code **)(*(long *)*in_RDI + 0x68))
                        ((long *)*in_RDI,1,&local_bc,0,0,&local_b8,0,0,0x40,10,0,0);
      if (iVar1 != 0) goto LAB_0019b2d4;
      iVar3 = _check_task_result(local_b8 & 0xff,uVar6);
      iVar1 = 0;
      if (iVar3 == 0) goto LAB_0019b231;
    }
LAB_0019b270:
    _handle_shared_spi(in_RDI,0);
  }
  if (_inRestore == '\x01') {
    _printf("Device error RID=0x%d\n",(ulong)*(byte *)((long)in_RDI + 0x66));
  }
  else {
    _uarpLogError(3,"Device error RID=0x%d\n");
  }
  _print_fw_update_regs(*in_RDI);
  iVar1 = -0x1ffffd17;
LAB_0019b23f:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}


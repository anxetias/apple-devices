// name: FUN_1003a92b4
// address: 1003a92b4

undefined1 * FUN_1003a92b4(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = &DAT_ffffff30;
  if (param_2 - 0x59U < 2) {
    FUN_1001c631b(param_1,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0xc) = uVar1;
    FUN_1001c631b(param_1 + 9,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x10) = uVar1;
    FUN_1001c631b(param_1 + 0x12,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x14) = uVar1;
    FUN_1001c631b(param_1 + 0x1b,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x18) = uVar1;
    FUN_1001c631b(param_1 + 0x24,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
    FUN_1001c631b(param_1 + 0x2d,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x20) = uVar1;
    FUN_1001c631b(param_1 + 0x36,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x24) = uVar1;
    FUN_1001c631b(param_1 + 0x3f,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x28) = uVar1;
    FUN_1001c631b(param_1 + 0x48,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x2c) = uVar1;
    FUN_1001c631b(param_1 + 0x51,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x30) = uVar1;
    puVar2 = (undefined1 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


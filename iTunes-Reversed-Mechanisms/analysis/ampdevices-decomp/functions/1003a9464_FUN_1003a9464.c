// name: FUN_1003a9464
// address: 1003a9464

undefined1 * FUN_1003a9464(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_3,0x40);
  puVar2 = &DAT_ffffff30;
  if (param_2 - 0x73U < 2) {
    FUN_1001c631b(param_1,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0xc) = uVar1;
    FUN_1001c631b(param_1 + 9,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x10) = uVar1;
    lVar4 = param_1 + 0x12;
    if (*(char *)(param_1 + 0x1b) == ' ') {
      lVar4 = param_1 + 0x1b;
      FUN_1001c631b(param_1 + 0x12,local_68,9);
      local_68[0] = 8;
      uVar1 = FUN_1001e0fc3(local_68);
      *(undefined4 *)(param_3 + 0x14) = uVar1;
    }
    FUN_1001c631b(lVar4,local_68,0x11);
    local_68[0] = 0x10;
    uVar3 = FUN_1001e1030(local_68);
    *(undefined8 *)(param_3 + 0x18) = uVar3;
    FUN_1001c631b(lVar4 + 0x11,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x20) = uVar1;
    FUN_1001c631b(lVar4 + 0x1a,local_68,9);
    local_68[0] = 8;
    uVar1 = FUN_1001e0fc3(local_68);
    *(undefined4 *)(param_3 + 0x24) = uVar1;
    puVar2 = (undefined1 *)0xffffffce;
    if (*(long *)(param_3 + 0x18) != 0) {
      puVar2 = (undefined1 *)0x0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


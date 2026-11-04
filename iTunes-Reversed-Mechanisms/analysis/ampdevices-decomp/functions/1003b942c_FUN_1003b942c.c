// name: FUN_1003b942c
// address: 1003b942c

int FUN_1003b942c(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined1 local_508 [16];
  undefined2 local_4f8 [256];
  undefined1 local_2f8 [12];
  undefined8 local_2ec;
  undefined4 local_2e4;
  byte local_2e0;
  undefined2 *local_2dc;
  undefined1 *local_2d4;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4f8[0] = 0;
  local_508[0] = 0;
  FUN_1001c62d9(param_4,0x222);
  FUN_1001c62d9(local_2f8,0x2c0);
  local_2dc = local_4f8;
  local_2d4 = local_508;
  local_2ec = param_2;
  local_2e4 = param_3;
  iVar1 = FUN_1003b9558(param_1,0x636f6e66,local_2f8);
  if (iVar1 == 0) {
    FUN_1001e1c39(local_4f8,param_4);
    FUN_1001dfd41(local_508,param_4 + 0x200,0xf);
    *(byte *)(param_4 + 0x214) = local_2e0 & 1;
    *(byte *)(param_4 + 0x215) = local_2e0 >> 1 & 1;
    *(undefined4 *)(param_4 + 0x210) = local_2cc;
    *(undefined8 *)(param_4 + 0x216) = local_2c8;
    *(undefined4 *)(param_4 + 0x21e) = local_2c0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// name: FUN_1001a1b29
// address: 1001a1b29

void FUN_1001a1b29(long param_1,long param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar4 = 0;
  iVar5 = 0;
  if (1 < param_3) {
    iVar5 = 0;
    uVar3 = (ulong)param_3;
    do {
      iVar5 = iVar5 + 1;
      uVar2 = (uint)uVar3;
      uVar3 = uVar3 >> 1;
    } while (3 < uVar2);
  }
  if (1 < param_4) {
    iVar4 = 0;
    uVar3 = (ulong)param_4;
    do {
      iVar4 = iVar4 + 1;
      uVar2 = (uint)uVar3;
      uVar3 = uVar3 >> 1;
    } while (3 < uVar2);
    if (1 < param_3 && 1 < param_4) {
      if (param_4 * param_3 != 0) {
        uVar2 = 0;
        do {
          local_40 = 0;
          FUN_1001a1c9c(&local_40,uVar2,iVar5,iVar4);
          uVar1 = local_40._4_4_ * param_5 + (int)local_40;
          *(undefined2 *)(param_1 + (ulong)uVar2 * 2) = *(undefined2 *)(param_2 + (ulong)uVar1 * 2);
          *(undefined2 *)(param_1 + (ulong)(uVar2 + 1) * 2) =
               *(undefined2 *)(param_2 + (ulong)(uVar1 + param_5) * 2);
          *(undefined2 *)(param_1 + (ulong)(uVar2 + 2) * 2) =
               *(undefined2 *)
                (param_2 + (ulong)(uint)(local_40._4_4_ * param_5 + 1 + (int)local_40) * 2);
          *(undefined2 *)(param_1 + (ulong)(uVar2 + 3) * 2) =
               *(undefined2 *)(param_2 + (ulong)(param_5 + 1 + uVar1) * 2);
          uVar2 = uVar2 + 4;
        } while (uVar2 < param_4 * param_3);
      }
      goto LAB_1001a1c78;
    }
  }
  if (param_4 * param_3 != 0) {
    uVar3 = 0;
    do {
      local_40 = 0;
      FUN_1001a1c9c(&local_40,uVar3 & 0xffffffff,iVar5,iVar4);
      *(undefined2 *)(param_1 + uVar3 * 2) =
           *(undefined2 *)(param_2 + (ulong)(uint)(local_40._4_4_ * param_5 + (int)local_40) * 2);
      uVar3 = uVar3 + 1;
    } while (param_4 * param_3 != uVar3);
  }
LAB_1001a1c78:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


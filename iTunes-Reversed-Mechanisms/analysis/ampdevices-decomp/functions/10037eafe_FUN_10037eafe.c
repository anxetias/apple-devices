// name: FUN_10037eafe
// address: 10037eafe

void FUN_10037eafe(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  undefined4 local_88 [4];
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_5c;
  int local_58 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_3;
  local_68 = param_1;
  local_5c = param_2;
  if (DAT_1008c7550 == '\0') {
    DAT_1008c7550 = '\x01';
    uVar5 = 0;
    do {
      local_78 = uVar5;
      FUN_10031d3e5(uVar5 & 0xffffffff,local_58);
      iVar2 = local_58[0];
      FUN_1001c62d9(local_58,0x20);
      iVar4 = 0;
      do {
        piVar3 = (int *)FUN_1002ddacc(iVar4);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          while (iVar1 != 0) {
            piVar3 = piVar3 + 1;
            if (iVar1 == iVar2) {
              FUN_10031d3e5(iVar4,local_88);
              FUN_1005389ba(local_58,local_88[0]);
            }
            iVar1 = *piVar3;
          }
        }
        uVar5 = local_78;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x71);
      FUN_100538877(&DAT_1008c6730 + local_78 * 0x20,local_58);
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x71);
  }
  FUN_10037c628();
  FUN_100538877(local_70,&DAT_1008c6730 + (ulong)local_5c * 0x20);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


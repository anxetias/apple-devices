// name: FUN_1001e4913
// address: 1001e4913

void FUN_1001e4913(ushort *param_1,uint param_2,undefined8 param_3,ushort *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  bool bVar7;
  ushort local_848 [1032];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar6 = 0x400;
  if (param_2 < 0x400) {
    uVar6 = param_2;
  }
  FUN_1001e3dbd(param_3,param_1,uVar6);
  if (1 < *param_1) {
    uVar3 = 0x3a;
    puVar5 = (ushort *)0x0;
    puVar2 = param_1 + 2;
    do {
      if ((puVar2[-1] == 0x5e) || (puVar2[-1] == 0x25)) {
        uVar1 = *puVar2;
        if ((ushort)(uVar1 - 0x31) < 9) {
          if (uVar1 < uVar3) {
            puVar5 = puVar2;
            uVar3 = uVar1;
          }
        }
        else if (uVar1 == 0x73) goto LAB_1001e49b5;
      }
      bVar7 = puVar2 < param_1 + *param_1;
      puVar2 = puVar2 + 1;
    } while (bVar7);
    puVar2 = puVar5;
    if (puVar5 != (ushort *)0x0) {
LAB_1001e49b5:
      iVar4 = (int)((ulong)((long)puVar2 - (long)param_1) >> 1) + -1;
      FUN_1001dffe0(param_1,iVar4,2);
      puVar2 = param_4;
      if (uVar6 < (uint)*param_4 + (uint)*param_1) {
        puVar2 = local_848;
        FUN_1001e3c85(param_4,puVar2,uVar6 - *param_1);
      }
      FUN_1001e479c(puVar2,iVar4,param_1,uVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


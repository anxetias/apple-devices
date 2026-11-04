// name: FUN_1001a2ef9
// address: 1001a2ef9

void FUN_1001a2ef9(long param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_128 [264];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_10069c9bc(uVar6);
    }
  }
  else {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 0;
      local_128[0] = 0;
      for (pbVar7 = (byte *)(param_1 + -1); (pbVar7[1] & 0xdf) != 0; pbVar7 = pbVar7 + 1) {
      }
      do {
        pbVar8 = pbVar7;
        bVar2 = pbVar8[1];
        pbVar7 = pbVar8 + 1;
      } while (bVar2 == 0x20);
      uVar5 = 0;
      if (0x2f < bVar2) {
        do {
          if ((0x39 < bVar2) || (0xfe < uVar5)) break;
          local_128[uVar5] = bVar2;
          bVar2 = pbVar8[uVar5 + 2];
          uVar5 = uVar5 + 1;
        } while (0x2f < bVar2);
        pbVar7 = pbVar7 + uVar5;
        uVar5 = uVar5 & 0xffffffff;
      }
      local_128[uVar5] = 0;
      iVar4 = FUN_1001e3338(local_128);
      *param_2 = iVar4;
      if (iVar4 != 0) {
        for (; (*pbVar7 & 0xdf) != 0; pbVar7 = pbVar7 + 1) {
        }
        do {
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar2 == 0x20);
        while ((0xd < bVar2 || ((0x2401U >> (bVar2 & 0x1f) & 1) == 0))) {
          bVar1 = *(byte *)(param_2 + 1);
          if ((ulong)bVar1 == 0xff) break;
          *(byte *)(param_2 + 1) = bVar1 + 1;
          *(byte *)((long)param_2 + (ulong)bVar1 + 5) = bVar2;
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        }
      }
      goto LAB_1001a3033;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_10069c946(uVar6);
    }
  }
  FUN_1001782e9(0,0);
LAB_1001a3033:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


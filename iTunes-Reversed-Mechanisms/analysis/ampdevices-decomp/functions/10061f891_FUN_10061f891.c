// name: FUN_10061f891
// address: 10061f891

undefined1 FUN_10061f891(long param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((*(char *)(param_1 + 0x31c) != '\0') && (*(char *)(param_1 + 0xd30) != '\0')) &&
     ((*(char *)(param_1 + 0x2a2) == '\0' || (cVar2 = FUN_1003a7f56(param_2), cVar2 == '\0')))) {
    puVar1 = (undefined8 *)param_2[1];
    uVar3 = 0;
    uVar4 = FUN_1004744bf(puVar1,0);
    if ((uVar4 & 0x200004) != 0 && (uVar4 >> 0x10 & 1) == 0) goto LAB_10061f946;
    uVar6 = FUN_1004744bf(puVar1,0);
    if ((uVar6 & 0x20) == 0) {
      uVar3 = 0;
      uVar4 = FUN_1004744bf(puVar1,0);
      lVar7 = 0x36;
      if ((uVar4 >> 0x14 & 1) != 0) goto LAB_10061f946;
    }
    else {
      lVar7 = 0x37;
      if (*(char *)(param_1 + 0x31d) == '\0') goto LAB_10061f943;
    }
    if (*(char *)(param_1 + lVar7) == '\0') {
      uVar3 = 1;
      if (((((*(char *)(param_1 + 0x28b) == '\x01') || ((*(byte *)(*param_2 + 0x240) & 4) == 0)) ||
           (cVar2 = FUN_1002be216(*(undefined8 *)(param_1 + 0x7c0),*puVar1), cVar2 != '\0')) ||
          ((cVar2 = FUN_10061da63(puVar1[8]), cVar2 != '\0' &&
           (cVar2 = FUN_1002be216(*(undefined8 *)(param_1 + 2000),*(undefined8 *)(puVar1[8] + 0x18))
           , cVar2 != '\0')))) ||
         ((cVar2 = FUN_10061d990(puVar1[5]), cVar2 != '\0' &&
          (cVar2 = FUN_1002be216(*(undefined8 *)(param_1 + 0x7d8),*(undefined8 *)(puVar1[5] + 0x20))
          , cVar2 != '\0')))) goto LAB_10061f946;
      iVar5 = FUN_10047a7b5(puVar1,local_238);
      if (iVar5 == 0) {
        uVar3 = FUN_1002c16fa(*(undefined8 *)(param_1 + 0x7e0),local_238);
        goto LAB_10061f946;
      }
    }
  }
LAB_10061f943:
  uVar3 = 0;
LAB_10061f946:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}


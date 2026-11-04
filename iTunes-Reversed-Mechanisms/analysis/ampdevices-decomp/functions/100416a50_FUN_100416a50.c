// name: FUN_100416a50
// address: 100416a50

ulong FUN_100416a50(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_R12;
  ulong uVar9;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar9 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  if (param_3 == 0 || param_2 < 2) goto LAB_100416bc7;
  for (puVar6 = (undefined8 *)param_1[2]; local_68 = param_2, local_60 = param_3,
      puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
    uVar1 = puVar6[4];
    bVar2 = param_2 < uVar1;
    if (uVar1 == param_2) {
      bVar2 = param_3 < (ulong)puVar6[5];
    }
    if (!bVar2) {
      bVar2 = uVar1 < param_2;
      if (uVar1 == param_2) {
        bVar2 = (ulong)puVar6[5] < param_3;
      }
      if (!bVar2) goto LAB_100416ba6;
      puVar6 = puVar6 + 1;
    }
  }
  for (puVar6 = (undefined8 *)param_1[5]; puVar6 != (undefined8 *)0x0;
      puVar6 = (undefined8 *)*puVar6) {
    uVar1 = puVar6[4];
    bVar2 = param_2 < uVar1;
    if (uVar1 == param_2) {
      bVar2 = param_3 < (ulong)puVar6[5];
    }
    if (!bVar2) {
      bVar2 = uVar1 < param_2;
      if (uVar1 == param_2) {
        bVar2 = (ulong)puVar6[5] < param_3;
      }
      if (!bVar2) goto LAB_100416bc4;
      puVar6 = puVar6 + 1;
    }
  }
  lVar8 = *param_1;
  if (lVar8 == 0) {
    uVar9 = 0;
    iVar5 = FUN_10041503c(0,param_1);
    if (iVar5 == -0x80) goto LAB_100416bc7;
    if (iVar5 == 0) {
      lVar8 = *param_1;
      goto LAB_100416b42;
    }
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = iVar5;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  else {
LAB_100416b42:
    uVar4 = FUN_10041576c(lVar8);
    iVar5 = FUN_1000c5310(uVar4,param_2,param_3,0);
    if (iVar5 == 0) {
      FUN_100416e56(param_1 + 1,param_2,param_3,&local_68);
LAB_100416ba6:
      uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
      goto LAB_100416bc7;
    }
    FUN_100416e56(param_1 + 4,param_2,param_3,&local_68);
  }
LAB_100416bc4:
  uVar9 = 0;
LAB_100416bc7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


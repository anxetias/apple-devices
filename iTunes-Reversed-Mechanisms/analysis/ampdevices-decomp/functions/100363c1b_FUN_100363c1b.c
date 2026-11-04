// name: FUN_100363c1b
// address: 100363c1b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100363c1b(long param_1,int *param_2,uint param_3,int param_4,undefined1 *param_5)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  int local_c0;
  int local_bc;
  char *local_b8;
  uint local_ac;
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  int local_9a;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined6 uStack_92;
  undefined2 local_8c;
  int local_8a;
  undefined2 local_86;
  undefined8 local_84;
  undefined2 local_7c;
  uint local_7a;
  undefined2 local_76;
  double local_74;
  undefined2 local_6c;
  int local_6a;
  undefined2 local_66;
  char *local_64;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  local_ac = param_3;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x822;
      local_9a = 0x7b6950;
      uStack_96 = 1;
      uStack_94 = 0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 != (int *)0x0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar8 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        FUN_100476ac1(local_f8,param_1);
        local_b8 = (char *)FUN_1001b83ae(local_f8);
        local_c0 = *param_2;
        FUN_100363868(local_e8,param_2[1]);
        local_c8 = FUN_1001b83ae(local_e8);
        local_bc = param_2[2];
        FUN_100363868(local_d8,param_2[3]);
        local_84 = FUN_1001b83ae(local_d8);
        local_74 = (double)(uint)param_2[4] / _DAT_100708b48;
        local_6a = (int)(char)param_2[5];
        local_64 = "true";
        if (*(char *)((long)param_2 + 0x1d) == '\0') {
          local_64 = "false";
        }
        local_a8 = 0x8220902;
        local_a4 = local_b8;
        local_9c = 0x400;
        local_9a = local_c0;
        uStack_96 = 0x822;
        uStack_94 = (undefined2)local_c8;
        uStack_92 = (undefined6)((ulong)local_c8 >> 0x10);
        local_8c = 0x400;
        local_8a = local_bc;
        local_86 = 0x822;
        local_7c = 0x400;
        local_7a = (uint)*(byte *)((long)param_2 + 0x1e);
        local_76 = 0x800;
        local_6c = 0x400;
        local_66 = 0x822;
        __os_log_impl(0x100000000,uVar8,1,
                      "sync> updating play data for track \"%{public}s\": play count = %u, play date = %{public}s, skip count = %u, skip date = %{public}s, played state = %u, bookmark time = %.2f, rating = %d, deleted = %{public}s"
                      ,&local_a8,0x4c);
        FUN_1001b7a50(local_d8);
        FUN_1001b7a50(local_e8);
        FUN_1001b7a50(local_f8);
      }
      FUN_1001c62d9(local_58,0x20);
      local_b8 = *(char **)(param_1 + 0x28);
      if (param_4 == 1) {
        bVar9 = true;
        if (0x3e6 < *param_2 - 1U) goto LAB_100363f70;
        *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + *param_2;
LAB_100363f08:
        *(undefined4 *)(param_1 + 0x148) = 0;
        bVar9 = true;
LAB_100363f36:
        FUN_1005389ba(local_58,0x16);
        if ((*(uint *)(param_1 + 0xc2) >> 0x1d & 1) == 0) {
          *(uint *)(param_1 + 0xc2) = *(uint *)(param_1 + 0xc2) | 0x20000000;
          FUN_1005389ba(local_58,0x5f);
        }
      }
      else if (param_4 == 2) {
        uVar7 = FUN_100474dd0(param_1,0);
        bVar9 = (uVar7 & 0x200004) == 0;
        iVar6 = *param_2;
        if (iVar6 - 1U < 999) {
          *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar6;
          if ((uVar7 & 0x200004) == 0) goto LAB_100363f08;
LAB_100363f2c:
          *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + iVar6;
          bVar9 = false;
          goto LAB_100363f36;
        }
      }
      else {
        iVar6 = *param_2;
        if (iVar6 - 1U < 999) {
          *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + iVar6;
          goto LAB_100363f2c;
        }
        bVar9 = false;
      }
LAB_100363f70:
      uVar2 = param_2[1];
      if (((uVar2 <= local_ac) && (0xb91dbf00 < uVar2)) && (*(uint *)(param_1 + 0x14c) < uVar2)) {
        *(uint *)(param_1 + 0x14c) = uVar2;
        FUN_1005389ba(local_58,0x17);
      }
      iVar6 = param_2[2];
      if (iVar6 - 1U < 999) {
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + iVar6;
        iVar5 = 0;
        if (!bVar9) {
          iVar5 = iVar6 + *(int *)(param_1 + 0x154);
        }
        *(int *)(param_1 + 0x154) = iVar5;
        FUN_1005389ba(local_58,0x44);
      }
      uVar2 = param_2[3];
      if (((uVar2 <= local_ac) && (0xc02a9480 < uVar2)) && (*(uint *)(param_1 + 0x158) < uVar2)) {
        *(uint *)(param_1 + 0x158) = uVar2;
        FUN_1005389ba(local_58,0x45);
      }
      if ((*(char *)((long)param_2 + 0x1e) == '\x01') &&
         ((*(uint *)(param_1 + 0xc2) >> 0x1d & 1) == 0)) {
        *(uint *)(param_1 + 0xc2) = *(uint *)(param_1 + 0xc2) | 0x20000000;
        FUN_1005389ba(local_58,0x5f);
      }
      bVar1 = *(byte *)(param_2 + 5);
      if ((bVar1 < 0x65) && (bVar1 != *(byte *)(param_1 + 300))) {
        FUN_100320aca(param_1,(int)(char)bVar1,0);
        FUN_1005389ba(local_58,0x19);
      }
      bVar1 = *(byte *)((long)param_2 + 0x16);
      if ((bVar1 < 4) && (bVar1 != *(byte *)(param_1 + 0x134))) {
        *(byte *)(param_1 + 0x134) = bVar1;
        FUN_1005389ba(local_58,0x9a);
        iVar6 = param_2[6];
        if (iVar6 == 0) {
          iVar6 = FUN_100177d5c(0);
        }
        *(int *)(param_1 + 0x130) = iVar6;
        FUN_1005389ba(local_58,0xb7);
      }
      bVar1 = *(byte *)(param_2 + 7);
      if ((bVar1 < 4) && (bVar1 != local_b8[0xe6])) {
        FUN_1003a2e74(local_b8,bVar1,0);
        FUN_1005389ba(local_58,0x9c);
      }
      cVar3 = FUN_10047f358(param_1);
      if ((cVar3 == '\0') || (cVar3 = FUN_10047f4fd(param_1,param_2[4]), cVar3 == '\0')) {
        uVar8 = 0;
      }
      else {
        FUN_1005389ba(local_58,0x5d);
        FUN_10047f8d8(param_1,1,local_58);
        uVar8 = 1;
      }
      if (*(char *)((long)param_2 + 0x1d) == '\0') {
        cVar3 = FUN_100539270(local_58);
        if (cVar3 != '\0') {
          FUN_1004755ef(param_1,0,local_58);
          uVar8 = 1;
        }
        uVar4 = 0;
      }
      else {
        if (*(long *)(param_2 + 8) != 0) {
          FUN_1003627d4(*(long *)(param_2 + 8),param_1);
        }
        FUN_1004737f5(param_1);
        uVar4 = 1;
        uVar8 = 1;
      }
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = uVar4;
      }
      goto LAB_100363e9e;
    }
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x822;
      local_9a = 0x7c4cba;
      uStack_96 = 1;
      uStack_94 = 0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar8 = 0;
LAB_100363e9e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}


// name: FUN_1004b132d
// address: 1004b132d

int FUN_1004b132d(long param_1,char param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0xb0) == 0) {
    uStack_60 = *(undefined4 *)(param_1 + 0xb8);
    local_68 = 0;
    uStack_64 = 0;
    local_5c = (undefined2)*(undefined4 *)(param_1 + 0xc0);
    uStack_5a = (undefined2)((uint)*(undefined4 *)(param_1 + 0xc0) >> 0x10);
    uStack_58 = 0x1b00;
    uStack_56 = 0x1007a;
    uStack_52 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    iVar4 = FUN_1001ec886(&local_68,param_1 + 0xb0);
    if (iVar4 == -0x80) goto LAB_1004b157a;
    if (iVar4 == 0) goto LAB_1004b135c;
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 == '\0') goto LAB_1004b157a;
    puVar8 = &local_88;
    local_88 = 0x8220202;
    local_84 = "Assertion failure";
    local_7c = 0x400;
    local_7a = iVar4;
LAB_1004b152d:
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar8,0x12);
  }
  else {
LAB_1004b135c:
    if (param_2 != '\0') {
      FUN_1001e9de0(param_1 + 200);
    }
    uVar3 = 0;
    lVar7 = 0x22;
    do {
      lVar1 = *(long *)(param_1 + lVar7 * 8);
      if (lVar1 != 0) {
        uVar3 = uVar3 + (*(char *)(lVar1 + 0x70) == '\0');
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x28);
    iVar4 = 0;
    if (uVar3 < *(uint *)(param_1 + 0xbc)) {
      puVar5 = (undefined8 *)FUN_1001c629e(0x80,&DAT_100711c6e);
      if (puVar5 == (undefined8 *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_68 = 0x8220202;
          uStack_64 = 0x7a0a90;
          uStack_60 = 1;
          local_5c = 0x822;
          uStack_5a = 0x457c;
          uStack_58 = 0x7d;
          uStack_56 = 1;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        FUN_1001782e9(0,0);
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        iVar4 = -0x6c;
        if (cVar2 == '\0') goto LAB_1004b157a;
        puVar8 = &local_68;
        local_68 = 0x8220202;
        uStack_64 = 0x7a0a90;
        uStack_60 = 1;
        local_5c = 0x400;
        uStack_5a = 0xff94;
        uStack_58 = 0xffff;
        goto LAB_1004b152d;
      }
      lVar7 = 0;
      puVar5[8] = 0;
      puVar5[2] = 0;
      puVar5[0xc] = 0;
      *puVar5 = 0x164777469;
      puVar5[1] = param_1;
      puVar5[10] = FUN_1004b17d9;
      puVar5[0xb] = puVar5;
      do {
        if (*(long *)(param_1 + 0x110 + lVar7 * 8) == 0) {
          *(undefined4 *)((long)puVar5 + 4) = 2;
          *(undefined8 **)(param_1 + 0x110 + lVar7 * 8) = puVar5;
          break;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 6);
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      iVar4 = FUN_1001ebfee(*(undefined8 *)(param_1 + 0xb0),puVar5 + 2);
    }
    if (param_2 != '\0') {
      FUN_1001e9eb9(param_1 + 200);
    }
  }
LAB_1004b157a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}


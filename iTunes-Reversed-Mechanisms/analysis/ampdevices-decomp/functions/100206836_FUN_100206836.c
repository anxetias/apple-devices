// name: FUN_100206836
// address: 100206836

undefined8 FUN_100206836(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long local_78;
  undefined8 local_70;
  long local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = 0;
  if ((*(byte *)(param_1 + 0x20) & 8) != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "not file->readOnly";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 3;
    goto LAB_1002069be;
  }
  local_60 = param_4;
  uVar3 = FUN_1001c4cf4(*(undefined8 *)(param_1 + 0x28));
  lVar8 = (long)param_3;
  if (uVar3 < local_60) {
    local_70 = param_2;
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = ___dynamic_cast(*(long *)(param_1 + 8),&PTR_DAT_100852a70,&PTR_DAT_10083d9b8,0);
    }
    iVar2 = FUN_1002dd26a(lVar4);
    if (iVar2 == -0x80) {
      uVar5 = 0x30a;
      goto LAB_1002069be;
    }
    if (iVar2 == 0) {
      local_68 = lVar8;
      for (uVar9 = (ulong)(uint)((int)local_60 - (int)uVar3); uVar9 != 0; uVar9 = uVar9 - uVar7) {
        uVar7 = *(ulong *)(lVar4 + 0x1a0);
        if (uVar9 < *(ulong *)(lVar4 + 0x1a0)) {
          uVar7 = uVar9;
        }
        iVar2 = FUN_1001c508c(*(undefined8 *)(param_1 + 0x28),uVar3 & 0xffffffff,
                              *(undefined8 *)(lVar4 + 0x198),uVar7,&local_58);
        if ((iVar2 != 0) || (CONCAT44(uStack_54,local_58) != uVar7)) break;
        uVar3 = uVar3 + uVar7;
      }
      lVar8 = local_68;
      param_2 = local_70;
      if (uVar3 != local_60) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "eof == inPos";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      goto LAB_100206987;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    lVar4 = 0;
  }
  else {
LAB_100206987:
    iVar2 = FUN_1001c508c(*(undefined8 *)(param_1 + 0x28),local_60 & 0xffffffff,param_2,lVar8,
                          &local_78);
    lVar4 = local_78;
  }
  uVar6 = 0xd;
  if (lVar4 == lVar8) {
    uVar6 = 0;
  }
  uVar5 = 0x30a;
  if (iVar2 == 0) {
    uVar5 = uVar6;
  }
LAB_1002069be:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}


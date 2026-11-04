// name: FUN_100259e39
// address: 100259e39

undefined8 FUN_100259e39(long param_1,ulong param_2,long *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined7 uVar5;
  undefined4 local_c8 [2];
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined1 local_b0 [32];
  int local_90;
  int local_8c;
  char local_88;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100249c30(local_b0);
  local_c8[0] = 0;
  FUN_1001c62d9(local_c0,8);
  local_b8 = 0;
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  if ((param_4 != 0) == (param_1 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "(handlerData != nullptr) ^ (rawObjectID != 0)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
    goto LAB_100259fd0;
  }
  if (param_1 != 0) {
    param_4 = *(int *)(param_1 + 0x28);
  }
  iVar2 = FUN_100256203(param_4,local_b0,local_c8,0);
  if (iVar2 == -0x80) {
LAB_100259fba:
    lVar4 = 0;
    uVar3 = 0;
  }
  else {
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_10025a102:
        local_3c = 0x400;
        uStack_40 = 1;
        uStack_44 = 0x7a0a90;
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      goto LAB_100259fba;
    }
    if (((local_90 == 0) && (local_8c == 0)) && (local_88 == '\0')) goto LAB_100259fba;
    iVar2 = FUN_10024a34a(local_c8,&local_b8);
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        goto LAB_10025a102;
      }
      goto LAB_100259fba;
    }
    local_48 = 0;
    uStack_44 = 0;
    FUN_10024d72a(0,param_2 & 0xffffffff,local_b0,local_b8,1,0,0,0,0,0,0,0,&local_48,0);
    lVar4 = CONCAT44(uStack_44,local_48);
    uVar5 = (undefined7)((param_2 & 0xffffffff) >> 8);
    uVar3 = CONCAT71(uVar5,lVar4 != 0);
    if (lVar4 != 0 && param_3 != (long *)0x0) {
      *param_3 = lVar4;
      uVar3 = CONCAT71(uVar5,1);
      lVar4 = 0;
    }
  }
  FUN_10017060f(lVar4);
  FUN_10017060f(local_b8);
LAB_100259fd0:
  FUN_100249fca(local_c8);
  FUN_100249ea6(local_b0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


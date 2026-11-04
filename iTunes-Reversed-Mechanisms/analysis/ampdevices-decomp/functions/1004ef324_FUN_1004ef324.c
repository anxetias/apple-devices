// name: FUN_1004ef324
// address: 1004ef324

int FUN_1004ef324(long param_1,ulong param_2,undefined1 param_3)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined6 uStack_66;
  long *local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = 0;
  if (((*(char *)(param_1 + 0x6abd) == '\0') || (*(long *)(param_1 + 0x30) == 0)) ||
     (cVar2 = FUN_1004e1666(param_1), cVar2 == '\0')) goto LAB_1004ef416;
  iVar3 = 0;
  if ((param_2 & 1) == 0) {
    uVar7 = param_2;
    if ((param_2 & 4) != 0) {
      if (*(char *)(param_1 + 0x1542a) == '\0') {
        uVar7 = param_2 & 0xfffffffffffffffa;
        goto joined_r0x0001004ef577;
      }
      *(undefined1 *)(param_1 + 0x15949) = param_3;
    }
  }
  else {
    cVar2 = FUN_100316309(*(undefined8 *)(param_1 + 0x30),0xf);
    if ((cVar2 == '\0') && (*(char *)(param_1 + 0x1542a) == '\0')) {
      uVar7 = param_2 & 0xfffffffffffffff8;
joined_r0x0001004ef577:
      if (uVar7 == 0) goto LAB_1004ef416;
    }
    else {
      *(undefined1 *)(param_1 + 0x15949) = param_3;
      uVar5 = FUN_1001ebd46();
      *(undefined8 *)(param_1 + 0x15950) = uVar5;
      uVar7 = param_2 & 0xfffffffffffffff9;
      if (*(char *)(param_1 + 0x396) != '\0') {
        uVar7 = param_2 & 0xfffffffffffffff9 | 0x100000000;
      }
    }
  }
  *(ulong *)(param_1 + 0x15940) = *(ulong *)(param_1 + 0x15940) | uVar7;
  *(undefined1 *)(param_1 + 0x15948) = 1;
  if (((uVar7 & 1) != 0) && (*(char *)(param_1 + 0x1594a) == '\0')) {
    *(undefined1 *)(param_1 + 0x1594a) = 1;
    FUN_1004ed4f6(param_1);
  }
  if ((*(int *)(param_1 + 0x15934) != 0) || (iVar3 = FUN_1004dccf5(param_1,""), iVar3 == -0x80))
  goto LAB_1004ef416;
  if (iVar3 != 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      local_70 = 1;
      uStack_6c = 0x400;
      uStack_6a = (undefined2)iVar3;
      uStack_68 = (undefined2)((uint)iVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_78,0x12);
    }
    goto LAB_1004ef416;
  }
  if (*(int *)(param_1 + 0x15934) != 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData->saveFilesFiberID == kInvalidFiberID";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
    *psVar1 = *psVar1 + 1;
  }
  *(short *)(param_1 + 0x15938) = *(short *)(param_1 + 0x15938) + 1;
  local_78 = 0x854778;
  uStack_74 = 1;
  local_70 = 0x51ed3d;
  uStack_6c = 1;
  uStack_6a = 0;
  uStack_68 = (undefined2)param_1;
  uStack_66 = (undefined6)((ulong)param_1 >> 0x10);
  local_58 = (long *)&local_78;
  iVar4 = FUN_1001b1a89(&local_78,"SaveIPodFilesFiber",(int *)(param_1 + 0x15934),0);
  if (local_58 == (long *)&local_78) {
    lVar6 = 0x20;
LAB_1004ef587:
    (**(code **)(*local_58 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_58 != (long *)0x0) goto LAB_1004ef587;
  }
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1004dd69c(param_1,"");
    *(short *)(param_1 + 0x15938) = *(short *)(param_1 + 0x15938) + -1;
    if (*(long *)(param_1 + 0x30) != 0) {
      psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
      *psVar1 = *psVar1 + -1;
    }
    iVar3 = -0x80;
    if (iVar4 != -0x80) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      iVar3 = iVar4;
      if (cVar2 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        local_70 = 1;
        uStack_6c = 0x400;
        uStack_6a = (undefined2)iVar4;
        uStack_68 = (undefined2)((uint)iVar4 >> 0x10);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_78,0x12);
      }
    }
  }
LAB_1004ef416:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


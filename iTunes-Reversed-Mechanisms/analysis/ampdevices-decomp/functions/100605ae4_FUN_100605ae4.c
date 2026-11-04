// name: FUN_100605ae4
// address: 100605ae4

void FUN_100605ae4(long param_1,ulong param_2,undefined4 param_3)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined **local_78;
  code *local_70;
  long local_68;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar6 = *(ulong *)(param_1 + 0x6b20);
  if ((param_2 & 0x14000) != 0) {
    uVar6 = uVar6 & 0xfffffffffffebfff;
    *(ulong *)(param_1 + 0x6b20) = uVar6;
  }
  uVar6 = uVar6 | param_2;
  *(ulong *)(param_1 + 0x6b20) = uVar6;
  *(undefined8 *)(param_1 + 0x6b28) = 0;
  *(undefined4 *)(param_1 + 0x6b38) = param_3;
  if ((((uVar6 >> 0x2a & 1) != 0) && (*(char *)(param_1 + 0x14dc9) != '\0')) &&
     (cVar2 = FUN_1004f1514(param_1,(uint)uVar6 & 1), cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 0x14dc9) = 0;
    *(byte *)(param_1 + 0x6b25) = *(byte *)(param_1 + 0x6b25) & 0xfb;
  }
  if (*(char *)(param_1 + 0x6aca) == '\0') {
    iVar3 = FUN_1004dccf5(param_1,"");
    if (iVar3 == 0) {
      iVar3 = FUN_1004ee8bd(param_1,1);
      if (iVar3 != 0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
          FUN_1004eeb56(param_1,iVar3);
          return;
        }
        goto LAB_100605e26;
      }
      if (*(char *)(param_1 + 0x6ad0) != '\0') {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "handlerData->reverseSyncInProgress == false";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (*(int *)(param_1 + 0x6b10) != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "handlerData->syncFiberID == kInvalidFiberID";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined1 *)(param_1 + 0x6aca) = 1;
      *(undefined1 *)(param_1 + 0x6acb) = 0;
      *(undefined1 *)(param_1 + 0x6acc) = 0;
      *(undefined4 *)(param_1 + 0x152d8) = 0;
      *(undefined4 *)(param_1 + 0x6b10) = 0;
      *(undefined1 *)(param_1 + 0x1684a) = 0;
      *(undefined1 *)(param_1 + 0x6acd) = 0;
      if (*(long *)(param_1 + 0x30) != 0) {
        psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
        *psVar1 = *psVar1 + 1;
      }
      FUN_10023318f(param_1,"");
      local_78 = &PTR_FUN_100854778;
      local_70 = FUN_100606570;
      local_68 = param_1;
      local_58 = &local_78;
      iVar3 = FUN_1001b1a89(&local_78,"SynchronizeIPodFiber",param_1 + 0x6b10,0);
      if (local_58 == &local_78) {
        lVar5 = 0x20;
LAB_100605cef:
        (**(code **)((long)*local_58 + lVar5))();
      }
      else {
        lVar5 = 0x28;
        if (local_58 != (undefined ***)0x0) goto LAB_100605cef;
      }
      if (iVar3 == -0x80) {
LAB_100605d2a:
        if (*(long *)(param_1 + 0x30) != 0) {
          psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
          *psVar1 = *psVar1 + -1;
        }
      }
      else if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        if (iVar3 != 0) goto LAB_100605d2a;
      }
    }
  }
  else if (*(char *)(param_1 + 0x6ad0) == '\0') {
    *(undefined1 *)(param_1 + 0x6acb) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_100605e26:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


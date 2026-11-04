// name: FUN_10042bf9c
// address: 10042bf9c

undefined4 FUN_10042bf9c(long param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(byte *)(param_1 + 0xb) < 2) || (cVar1 = FUN_1001e5474(param_3,param_4), cVar1 != '\0')) {
    lVar6 = 0xff;
    puVar3 = local_258;
    if (param_4 < 0x100) {
LAB_10042c012:
      FUN_1001e7247(param_3,param_4,puVar3,lVar6);
      uVar2 = FUN_10042be5d(param_1,param_2,puVar3,local_58);
      if (puVar3 == local_258) goto LAB_10042c21d;
LAB_10042c054:
      FUN_1001c64c1(puVar3);
      goto LAB_10042c21d;
    }
    lVar6 = (ulong)param_4 * 2;
    puVar3 = (undefined1 *)FUN_1001c63e1(lVar6);
    if (puVar3 != (undefined1 *)0x0) goto LAB_10042c012;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "latin1Ptr != nullptr";
      goto LAB_10042c1ea;
    }
  }
  else {
    puVar3 = local_258;
    if (param_4 < 0x100) {
      uVar5 = (ulong)(param_4 * 2);
LAB_10042c0d1:
      FUN_1001c631b(param_3,puVar3,uVar5);
      lVar6 = FUN_1001c6429((ulong)(param_4 + 2) * 2 + 0x19);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x12) = 1;
        *(uint *)(lVar6 + 0xc) = (param_4 + 2) * 2 | 1;
        FUN_1001c631b(puVar3,lVar6 + 0x15,uVar5);
        *(undefined2 *)(lVar6 + 0x13) = 0xfeff;
        *(undefined4 *)(lVar6 + 8) = param_2;
        *(int *)(param_1 + 0xe) =
             *(int *)(param_1 + 0xe) + *(int *)(param_1 + 0x20) + *(int *)(lVar6 + 0xc);
        FUN_1001c2470(param_1 + 0x28,lVar6);
        uVar2 = 0;
        if (puVar3 == local_258) goto LAB_10042c21d;
        goto LAB_10042c054;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 == '\0') goto LAB_10042c20f;
      local_4a = "tag != nullptr";
    }
    else {
      uVar5 = (ulong)param_4 * 2;
      puVar3 = (undefined1 *)FUN_1001c63e1(uVar5);
      if (puVar3 != (undefined1 *)0x0) goto LAB_10042c0d1;
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 == '\0') goto LAB_10042c20f;
      local_4a = "tagText != nullptr";
    }
LAB_10042c1ea:
    local_4c = 0x822;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
LAB_10042c20f:
  FUN_1001782e9(0,0);
  uVar2 = 0xffffff94;
LAB_10042c21d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}


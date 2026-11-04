// name: FUN_10042b271
// address: 10042b271

undefined4
FUN_10042b271(long param_1,undefined4 param_2,long param_3,uint param_4,long param_5,uint param_6)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0 || param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "(ownerID != nullptr) && (ownerIDLength > 0)";
LAB_10042b433:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    uVar4 = (ulong)param_6;
    if (param_5 != 0 && param_6 != 0) {
      uVar6 = (ulong)param_4;
      lVar2 = FUN_1001c6429(uVar6 + uVar4 + 0x1a);
      if (lVar2 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "tag != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar5 = 0xffffff94;
      }
      else {
        *(uint *)(lVar2 + 0xc) = param_4 + param_6 + 2;
        FUN_1001c631b(param_3,lVar2 + 0x12,uVar6);
        uVar5 = 0;
        *(undefined1 *)(lVar2 + 0x12 + uVar6) = 0;
        FUN_1001c631b(param_5,lVar2 + uVar6 + 0x13,uVar4);
        *(undefined1 *)(uVar4 + lVar2 + uVar6 + 0x13) = 0;
        *(undefined4 *)(lVar2 + 8) = param_2;
        *(int *)(param_1 + 0xe) =
             *(int *)(param_1 + 0xe) + *(int *)(param_1 + 0x20) + *(int *)(lVar2 + 0xc);
        FUN_1001c2470(param_1 + 0x28,lVar2);
      }
      goto LAB_10042b3bf;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "(ufid != nullptr) && (ufidLength > 0)";
      goto LAB_10042b433;
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_10042b3bf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


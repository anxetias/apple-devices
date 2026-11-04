// name: FUN_10042be5d
// address: 10042be5d

undefined8 FUN_10042be5d(long param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = (ulong)param_4;
  lVar3 = FUN_1001c6429(uVar5 + 0x1a);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "tag != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffff94;
  }
  else {
    *(undefined1 *)(lVar3 + 0x12) = 0;
    *(uint *)(lVar3 + 0xc) = param_4 + 2;
    lVar6 = lVar3 + 0x13;
    FUN_1001c631b(param_3,lVar6,uVar5);
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 & 1) == 0) {
      FUN_1001e7dee(lVar6,uVar5);
      uVar2 = *(uint *)(param_1 + 4);
    }
    if ((uVar2 & 2) != 0) {
      FUN_1001e7dee(lVar6,uVar5);
    }
    *(undefined4 *)(lVar3 + 8) = param_2;
    *(int *)(param_1 + 0xe) =
         *(int *)(param_1 + 0xe) + *(int *)(param_1 + 0x20) + *(int *)(lVar3 + 0xc);
    FUN_1001c2470(param_1 + 0x28,lVar3);
    uVar4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


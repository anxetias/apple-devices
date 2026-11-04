// name: FUN_10042b0c7
// address: 10042b0c7

undefined8
FUN_10042b0c7(long param_1,undefined4 param_2,undefined8 param_3,uint param_4,undefined8 param_5,
             uint param_6)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (ulong)param_6;
  uVar7 = (ulong)param_4;
  lVar4 = FUN_1001c6429(uVar7 + uVar3 + 0x1e);
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "tag != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffff94;
  }
  else {
    *(uint *)(lVar4 + 0xc) = param_4 + param_6 + 6;
    *(undefined4 *)(lVar4 + 0x12) = 0x676e6500;
    puVar6 = (undefined1 *)(lVar4 + 0x16);
    if (param_4 != 0) {
      FUN_1001c631b(param_3,puVar6,uVar7);
      uVar2 = *(uint *)(param_1 + 4);
      if ((uVar2 & 1) == 0) {
        FUN_1001e7dee(puVar6,uVar7);
        uVar2 = *(uint *)(param_1 + 4);
      }
      if ((uVar2 & 2) != 0) {
        FUN_1001e7dee(puVar6,uVar7);
      }
      puVar6 = puVar6 + uVar7;
    }
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
    FUN_1001c631b(param_5,puVar6,uVar3);
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 & 1) == 0) {
      FUN_1001e7dee(puVar6,uVar3);
      uVar2 = *(uint *)(param_1 + 4);
    }
    if ((uVar2 & 2) != 0) {
      FUN_1001e7dee(puVar6,uVar3);
    }
    puVar6[uVar3] = 0;
    *(undefined4 *)(lVar4 + 8) = param_2;
    *(int *)(param_1 + 0xe) =
         *(int *)(param_1 + 0xe) + *(int *)(param_1 + 0x20) + *(int *)(lVar4 + 0xc);
    FUN_1001c2470(param_1 + 0x28,lVar4);
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// name: FUN_1002bb612
// address: 1002bb612

long FUN_1002bb612(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  undefined4 uStack_228;
  undefined2 uStack_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined1 local_208;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002bb744:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      uStack_234 = 0x7a0a90;
      uStack_230 = 1;
      uStack_22c = 0x822;
      uStack_22a = 0x696c;
      uStack_228 = 0x1007b;
      uStack_224 = 0;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_238 = 0x8220202;
        uStack_234 = 0x7ab58c;
        uStack_230 = 1;
        uStack_22c = 0x822;
        uStack_22a = 0xec03;
        uStack_228 = 0x1007a;
        uStack_224 = 0;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002bb744;
    }
    FUN_100313e0b(param_1);
    local_220 = 0;
    local_210 = 0;
    local_208 = 0;
    local_238 = 0;
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_22a = 0;
    uStack_228 = 0;
    local_218 = 0x48545450;
    lVar3 = FUN_100472d20(param_1,4);
    if (lVar3 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_238 = 0x8220202;
        uStack_234 = 0x7a0a90;
        uStack_230 = 1;
        uStack_22c = 0x822;
        uStack_22a = 0x581f;
        uStack_228 = 0x1007b;
        uStack_224 = 0;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      *(uint *)(lVar3 + 0xd4) = *(uint *)(lVar3 + 0xd4) & 0xffdffffb | 4;
      *(byte *)(lVar3 + 0xc5) = *(byte *)(lVar3 + 0xc5) | 6;
      FUN_100471a46(lVar3);
      *(undefined8 *)(*(long *)(lVar3 + 0x70) + 0x38) = param_3;
      cVar1 = FUN_1001b8428(param_2);
      if (cVar1 == '\0') {
        FUN_1001bb41a(param_2,&local_238);
        FUN_100476cf8(lVar3,&local_238);
        FUN_1001bb41a(param_2,&local_238);
        FUN_1004776c6(lVar3,&local_238);
      }
      FUN_100474ebf(lVar3,0);
    }
    FUN_1002fbbfc(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


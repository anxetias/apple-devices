// name: FUN_100356f08
// address: 100356f08

ulong FUN_100356f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  uint local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = 0;
  uVar1 = local_4a;
  if (*(char *)(param_1 + 0x353) != '\0') {
    cVar2 = FUN_1003539aa(param_1,param_3);
    if (cVar2 == '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        uVar5 = FUN_10035693b(param_1,param_2);
        return uVar5;
      }
      goto LAB_1003570a2;
    }
    uVar1 = local_4a;
    if (*(char *)(param_1 + 0x14d00) != '\0') {
      uVar3 = FUN_1004f2b0b(param_1,1);
      uVar5 = (ulong)uVar3;
      uVar1 = local_4a;
      if (uVar3 != 0xffffff80) {
        if (uVar3 == 0) {
          uVar3 = FUN_100355ef5(param_1,param_2,param_3,2,param_4);
          uVar5 = (ulong)uVar3;
          uVar1 = local_4a;
          if ((uVar3 == 0xffffff80) || (uVar3 == 0)) goto LAB_10035703d;
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          uVar1 = local_4a;
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          uVar1 = local_4a;
        }
        local_4a = uVar3;
        if (cVar2 != '\0') {
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          uVar1 = local_4a;
        }
      }
    }
  }
LAB_10035703d:
  local_4a = uVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
LAB_1003570a2:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


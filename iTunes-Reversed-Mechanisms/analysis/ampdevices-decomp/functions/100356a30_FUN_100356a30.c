// name: FUN_100356a30
// address: 100356a30

ulong FUN_100356a30(long param_1,long param_2,long param_3,undefined8 param_4)

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
  if ((((*(char *)(param_1 + 0x353) != '\0') &&
       (*(int *)(*(long *)(param_2 + 0x58) + 0x3c) == 0x46494c45)) &&
      (*(int *)(*(long *)(param_3 + 0x58) + 0x3c) == 0x46494c45)) &&
     (uVar5 = 0, -1 < *(int *)(param_2 + 0xc2))) {
    cVar2 = FUN_1003537ab(param_1,param_3);
    if (cVar2 == '\0') {
      uVar5 = FUN_100356836(param_1,param_2);
      *(undefined1 *)(param_2 + 0xb9) = 2;
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return uVar5;
      }
      goto LAB_100356bfb;
    }
    uVar1 = local_4a;
    if (*(char *)(param_1 + 0x14d00) != '\0') {
      uVar3 = FUN_1004f2b0b(param_1,1);
      uVar5 = (ulong)uVar3;
      uVar1 = local_4a;
      if (uVar3 != 0xffffff80) {
        if (uVar3 == 0) {
          uVar3 = FUN_100354d30(param_1,param_2,param_3,0,2,param_4);
          uVar5 = (ulong)uVar3;
          uVar1 = local_4a;
          if (uVar3 != 0xffffff80) {
            if (uVar3 != 0) {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              uVar1 = local_4a;
              goto joined_r0x000100356b4a;
            }
            *(undefined1 *)(param_2 + 0xb9) = 1;
            uVar5 = 0;
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          uVar1 = local_4a;
joined_r0x000100356b4a:
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
  }
  local_4a = uVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
LAB_100356bfb:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


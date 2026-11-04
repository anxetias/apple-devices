// name: FUN_10017dfe0
// address: 10017dfe0

long FUN_10017dfe0(int *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068619a(uVar3);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_100181923();
    if (lVar2 != 0) {
      do {
        if (*(int *)(lVar2 + 0x10) != 0x4d56496d) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "mountedInfo->magic == kMountedVolumeInfoMagic";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        cVar1 = FUN_10017ec13(param_1,lVar2 + 0x18);
        if (cVar1 != '\0') goto LAB_10017e101;
        lVar2 = FUN_100181973(lVar2);
      } while (lVar2 != 0);
    }
    lVar2 = 0;
  }
LAB_10017e101:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar2;
}


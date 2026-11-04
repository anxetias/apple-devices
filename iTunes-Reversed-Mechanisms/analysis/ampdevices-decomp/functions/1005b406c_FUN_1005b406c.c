// name: FUN_1005b406c
// address: 1005b406c

long FUN_1005b406c(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_a8;
  undefined1 local_a0 [8];
  cfstringStruct *local_98;
  undefined1 local_90 [16];
  long local_80;
  long local_78;
  long *local_70;
  long local_68 [2];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = param_3;
  if (param_1[0x10] == 0) {
    FUN_10032f0f2(local_68);
  }
  else {
    local_70 = param_1 + 0x10;
    local_80 = FUN_1001a7bfa();
    if (local_80 != 0) {
      lVar3 = 0;
      do {
        FUN_1005b3b7e(&local_58,local_70,lVar3);
        local_98 = &cf_pid;
        FUN_1001a7b90(local_a0,&local_98);
        cVar1 = FUN_1001a9810(&local_58,local_a0,&local_a8);
        lVar4 = local_a8;
        if (cVar1 == '\0') {
          lVar4 = 0;
        }
        FUN_1001ab240(local_a0);
        if (lVar4 == local_78) {
          FUN_1001a7d8c(local_70,lVar3);
          FUN_1001a7a9e(local_68,&local_58);
          FUN_1001a8fac(&local_58);
          goto LAB_1005b416d;
        }
        FUN_1001a8fac(&local_58);
        lVar3 = lVar3 + 1;
      } while (local_80 != lVar3);
    }
    FUN_10032f0f2(local_68);
  }
LAB_1005b416d:
  if (local_68[0] == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_1001a7a9e(local_90,local_68);
    FUN_1005b3cf4(param_1,uVar2,local_90);
    FUN_1001a8fac(local_90);
    lVar3 = FUN_1004cfdd1(uVar2,local_78);
    if (lVar3 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "artist != nullptr";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      lVar3 = 0;
      FUN_1001782e9(0,0);
    }
  }
  FUN_1001a8fac(local_68);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar3;
}


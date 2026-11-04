// name: FUN_100206492
// address: 100206492

ulong FUN_100206492(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong unaff_R13;
  ulong uVar5;
  char local_5a;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  uint local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (lVar3 = FUN_10017076e(*(undefined8 *)(param_1 + 0x38)), 0 < lVar3)) {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
    uVar2 = FUN_100325516(param_1,param_2,param_1 + 0x50,0,&local_5a,&local_59);
    if ((uVar2 != 0xffffff80) && (unaff_R13 = (ulong)uVar2, uVar2 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = uVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if ((local_5a != '\0') ||
       ((uVar5 = CONCAT71((int7)(unaff_R13 >> 8),1), local_59 == '\0' &&
        (cVar1 = FUN_100325496(param_1), cVar1 == '\0')))) {
      param_2 = 0;
      do {
        FUN_10017060f(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x50) = 0;
        uVar2 = FUN_100325516(param_1,param_2,param_1 + 0x50,0,&local_5a,&local_59);
        if ((uVar2 != 0xffffff80) && (uVar2 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = uVar2;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        if ((local_5a == '\0') &&
           ((local_59 != '\0' || (cVar1 = FUN_100325496(param_1), cVar1 != '\0'))))
        goto LAB_100206614;
        param_2 = param_2 + 1;
      } while (lVar3 != param_2);
      param_2 = 0;
LAB_100206614:
      uVar5 = 0;
    }
    *(long *)(param_1 + 0x60) = param_2;
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5 & 0xffffffff;
}


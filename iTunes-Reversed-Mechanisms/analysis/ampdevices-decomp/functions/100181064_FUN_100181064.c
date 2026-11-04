// name: FUN_100181064
// address: 100181064

int FUN_100181064(long param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_300 [80];
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined4 local_298;
  long local_290;
  code *local_288;
  undefined1 *local_280;
  undefined1 local_278 [64];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100688b44(uVar4);
    }
  }
  else if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100688ace(uVar4);
    }
  }
  else {
    if (param_3 != 0) {
      iVar2 = FUN_100181256(param_1,param_2,param_3);
      if ((iVar2 != -0x30) && (iVar2 != 0)) {
        FUN_1001e40a7(param_2,local_238,local_278);
        FUN_1001c62d9(&local_2b0,0x38);
        local_2a8 = local_278;
        local_2b0 = local_238;
        local_290 = param_1;
        local_280 = local_238;
        if (iVar2 == -0x25) {
          FUN_1001e7c3a(local_238,0);
          FUN_10017e4d0(&local_2b0);
          iVar3 = FUN_100181256(param_1,local_238,param_3);
          iVar2 = 0;
          if ((iVar3 == -0x30) || (iVar2 = 0, iVar3 == 0)) goto LAB_10018121a;
        }
        local_298 = 0x1f;
        local_288 = FUN_10017e3e5;
        FUN_10017e4d0();
        iVar2 = FUN_10017ecc9(param_1,local_238,param_3,local_300);
        if (iVar2 == 0) {
          iVar2 = -0x30;
        }
        else {
          iVar2 = FUN_100181256(param_1,local_238,param_3);
        }
      }
      goto LAB_10018121a;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100688a58(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10018121a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


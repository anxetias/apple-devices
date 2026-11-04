// name: FUN_100181359
// address: 100181359

int FUN_100181359(long param_1,short *param_2,ulong param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_308 [80];
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined4 local_2a0;
  long local_298;
  code *local_290;
  undefined1 *local_288;
  undefined4 local_27c;
  undefined1 local_278 [64];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100688e7e(uVar4);
    }
  }
  else if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100688e08(uVar4);
    }
  }
  else {
    if (param_5 != 0) {
      local_27c = (undefined4)param_4;
      iVar2 = FUN_10018156b(param_1,param_2,param_3,param_4,param_5);
      if ((iVar2 != -0x30) && (iVar2 != 0)) {
        FUN_1001e40a7(param_2,local_238,local_278);
        FUN_1001c62d9(&local_2b8,0x38);
        local_2b8 = local_238;
        local_2b0 = local_278;
        local_298 = param_1;
        local_288 = local_2b8;
        if (iVar2 == -0x25) {
          iVar2 = 0;
          FUN_1001e7c3a(local_238,0);
          FUN_10018166a(param_1,&local_2b8);
          iVar3 = FUN_10018156b(param_1,local_238,param_3 & 0xffffffff,local_27c,param_5);
          if (iVar3 == 0) goto LAB_10018150c;
        }
        local_2a0 = 0x1f;
        local_290 = FUN_10017e3e5;
        FUN_10017e4d0();
        iVar2 = FUN_10017ecc9(param_1,local_238,param_5,local_308);
        if (iVar2 == 0) {
          iVar2 = -0x30;
        }
        else {
          iVar2 = FUN_10018156b(param_1,local_238,param_3 & 0xffffffff,local_27c,param_5);
        }
      }
      goto LAB_10018150c;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100688d92(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10018150c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


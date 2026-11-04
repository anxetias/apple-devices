// name: FUN_1004bdda7
// address: 1004bdda7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004bdda7(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined1 *)(param_1 + 0x618) = 0;
  if ((*(int *)(*(long *)(param_1 + 0x158) + 0x60) < 1) &&
     ((*(int *)(*(long *)(param_1 + 0x150) + 0x60) == 0 ||
      ((((*(char *)(param_1 + 0x628) == '\0' && (*(char *)(param_1 + 0x629) == '\0')) &&
        (cVar1 = FUN_1004adbcd(*(long *)(param_1 + 0x150),0), cVar1 == '\0')) &&
       (*(char *)(*(long *)(param_1 + 0x150) + 0x147) == '\0')))))) {
    dVar4 = _DAT_100707dc0;
    if ((*(double *)(param_1 + 0x610) == _DAT_100707dc0) &&
       (!NAN(*(double *)(param_1 + 0x610)) && !NAN(_DAT_100707dc0))) goto LAB_1004bde2d;
  }
  else {
    dVar4 = *(double *)(param_1 + 0x5e8);
    if ((dVar4 == *(double *)(param_1 + 0x610)) &&
       (!NAN(dVar4) && !NAN(*(double *)(param_1 + 0x610)))) goto LAB_1004bde2d;
    *(undefined8 *)(param_1 + 0x5e0) = 0;
  }
  if (*(long *)(param_1 + 0x608) != 0) {
    FUN_1001eed65((undefined8 *)(param_1 + 0x608));
    *(undefined8 *)(param_1 + 0x608) = 0;
  }
LAB_1004bde2d:
  iVar2 = 0;
  if ((*(long *)(param_1 + 0x608) == 0) &&
     (iVar2 = FUN_1001ee941(0,dVar4,0,0,FUN_1004be23d,param_1,param_1 + 0x608), iVar2 != -0x80)) {
    if (iVar2 == 0) {
      *(double *)(param_1 + 0x610) = dVar4;
      iVar2 = 0;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}


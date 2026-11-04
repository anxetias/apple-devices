// name: FUN_10017a41b
// address: 10017a41b

int FUN_10017a41b(long param_1,undefined1 param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  char local_98 [72];
  undefined1 local_50 [4];
  undefined4 local_4c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50[0] = 0;
  local_4c = 0;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006847ce(uVar4);
    }
  }
  else {
    if (param_3 != (char *)0x0) {
      iVar2 = FUN_100179ff4(param_1,0,0xffffffffffffffff,0,0,param_2,local_50);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          pcVar5 = local_98;
          if (param_4 != (char *)0x0) {
            pcVar5 = param_4;
          }
          FUN_100179ae2(local_50,pcVar5,0,0x40);
          iVar3 = _strcasecmp(param_3,pcVar5);
          iVar2 = -100000;
          if (iVar3 == 0) {
            iVar2 = 0;
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_1006846ec(iVar2,uVar4);
          }
        }
      }
      goto LAB_10017a511;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100684758(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10017a511:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}


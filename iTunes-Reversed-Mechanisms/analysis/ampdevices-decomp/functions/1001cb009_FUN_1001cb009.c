// name: FUN_1001cb009
// address: 1001cb009

int FUN_1001cb009(undefined8 param_1,ulong param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long local_440;
  int local_438 [258];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001c955b(param_1,param_2,0,0,&local_440);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (*param_3 == 0) {
        if (local_440 == 0) {
          iVar2 = 0;
        }
        else {
          local_438[0] = 0;
          iVar2 = FUN_1001ca647();
          if ((iVar2 == 0) && (1 < local_438[0])) {
            iVar2 = FUN_1001caeb4(local_440,1);
          }
          else {
            iVar2 = FUN_1001c9e7d(local_440,local_440);
          }
        }
      }
      else {
        if (local_440 == 0) {
          iVar2 = FUN_1001c9b1d(param_1,&local_440);
          if (iVar2 == -0x80) goto LAB_1001cb0ec;
          if (iVar2 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_1006adc04(iVar2,uVar4);
            }
            goto LAB_1001cb0ec;
          }
          iVar2 = FUN_1001c9f0c(local_440,param_2 & 0xffffffff,0,0);
          if (iVar2 == -0x80) goto LAB_1001cb0ec;
          if (iVar2 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_1006adb98(iVar2,uVar4);
            }
            goto LAB_1001cb0ec;
          }
        }
        uVar3 = FUN_1001e5b77(param_3,local_438,0x400);
        iVar2 = FUN_1001cacbc(local_440,1,1,local_438,uVar3);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_1006adb2c(iVar2,uVar4);
          }
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006adc70(iVar2,uVar4);
      }
    }
  }
LAB_1001cb0ec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}


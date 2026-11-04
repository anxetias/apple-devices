// name: FUN_1001f9145
// address: 1001f9145

int FUN_1001f9145(void *param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  char local_6a8 [80];
  undefined1 local_658 [1056];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (void *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006caaf3(uVar4);
    }
  }
  else if (param_2 == (char *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006caa7d(uVar4);
    }
  }
  else {
    if (param_3 != (void *)0x0) {
      _memcpy(param_3,param_1,0x420);
      pcVar3 = _strchr(param_2,0x2f);
      if (pcVar3 != (char *)0x0) {
        do {
          iVar2 = FUN_1001e5811(param_2,(long)pcVar3 - (long)param_2,local_238);
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                FUN_1006ca99b(iVar2,uVar4);
              }
            }
            goto LAB_1001f92bb;
          }
          iVar2 = FUN_10017ecc9(param_3,local_238,local_658,local_6a8);
          if (iVar2 == 0) {
            if (local_6a8[0] == '\0') {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                FUN_1006ca925(uVar4);
              }
              FUN_1001782e9(0,0);
              iVar2 = -0x78;
              goto LAB_1001f92bb;
            }
          }
          else {
            iVar2 = FUN_100181256(param_3,local_238,local_658);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  FUN_1006ca8b9(iVar2,uVar4);
                }
              }
              goto LAB_1001f92bb;
            }
          }
          _memcpy(param_3,local_658,0x420);
          param_2 = pcVar3 + 1;
          pcVar3 = _strchr(param_2,0x2f);
        } while (pcVar3 != (char *)0x0);
      }
      iVar2 = 0;
      goto LAB_1001f92bb;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006caa07(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1001f92bb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


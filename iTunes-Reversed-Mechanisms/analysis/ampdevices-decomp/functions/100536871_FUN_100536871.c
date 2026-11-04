// name: FUN_100536871
// address: 100536871

ulong FUN_100536871(long param_1,undefined8 param_2,int param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int local_91c;
  char local_918 [52];
  int local_8e4;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 < 0x69706120) {
    if (param_3 < 0x504c5320) {
      if (param_3 < 0x4d345220) {
        if (param_3 == 0x4150504c) {
          if ((param_1 != 0) && (iVar3 = FUN_10017d477(param_1,local_918,0), iVar3 == 0)) {
            local_91c = 0;
            if (local_918[0] != '\0') {
              FUN_10018e085(param_1,&local_91c,0);
              local_8e4 = local_91c;
            }
            uVar4 = 0x20;
            if ((local_8e4 == 0x61706c74) || (local_8e4 == 0x64706c74)) goto LAB_100536b18;
          }
        }
        else {
          if (param_3 == 0x4344544b) {
LAB_100536a37:
            uVar4 = 0x80;
            goto LAB_100536b18;
          }
          if (param_3 == 0x45505542) goto LAB_100536a4b;
        }
      }
      else {
        if (param_3 == 0x4d345220) {
          uVar4 = 0x20000;
          goto LAB_100536b18;
        }
        if (param_3 == 0x4d503355) {
          uVar2 = FUN_100536b8c(param_1,param_2);
          uVar4 = 8;
          if (uVar2 != 1) {
            uVar4 = (ulong)uVar2;
          }
          goto LAB_100536b18;
        }
        if (param_3 == 0x50444620) {
          uVar4 = 0x1000;
          goto LAB_100536b18;
        }
      }
    }
    else if (param_3 < 0x69626f6f) {
      if (param_3 == 0x504c5320) {
        uVar4 = 4;
        goto LAB_100536b18;
      }
      if (param_3 == 0x524d5020) {
        uVar4 = 2;
        goto LAB_100536b18;
      }
      if (param_3 == 0x6876706c) {
        uVar4 = 0x40;
        goto LAB_100536b18;
      }
    }
    else {
      if (param_3 == 0x69626f6f) {
LAB_100536a4b:
        uVar4 = 0x1000000;
        goto LAB_100536b18;
      }
      if (param_3 == 0x696c6765) {
        uVar4 = 0x200;
        goto LAB_100536b18;
      }
      if (param_3 == 0x696c6874) goto LAB_100536a11;
    }
  }
  else if (param_3 < 0x69746d73) {
    if (param_3 < 0x69707377) {
      if (param_3 == 0x69706120) {
        uVar4 = 0x100000;
        goto LAB_100536b18;
      }
      if (param_3 == 0x69706420) {
        uVar4 = 0x400000;
        goto LAB_100536b18;
      }
      if (param_3 == 0x69706720) {
        uVar4 = 0x8000;
        goto LAB_100536b18;
      }
    }
    else {
      if (param_3 == 0x69707377) {
        uVar4 = 0x10000;
        goto LAB_100536b18;
      }
      if ((param_3 == 0x69746520) || (param_3 == 0x69746c70)) {
        uVar4 = 0x40000;
        goto LAB_100536b18;
      }
    }
  }
  else if (param_3 < 0x6f736173) {
    if (param_3 == 0x69746d73) {
LAB_100536a11:
      uVar4 = 0x100;
      goto LAB_100536b18;
    }
    if (param_3 == 0x69747063) {
LAB_100536a41:
      uVar4 = 0x2000;
      goto LAB_100536b18;
    }
    if (param_3 == 0x6f706d6c) {
      uVar4 = 0x4000;
      goto LAB_100536b18;
    }
  }
  else {
    if (param_3 == 0x6f736173) {
      uVar4 = 0x20;
      goto LAB_100536b18;
    }
    if (param_3 == 0x70637374) goto LAB_100536a41;
    if (param_3 == 0x7472616b) goto LAB_100536a37;
  }
  uVar4 = FUN_100536b8c(param_1,param_2);
  if ((int)uVar4 == 1) {
    if (param_4 != '\0') {
      FUN_10024209c(local_918,param_1,param_3,0);
      cVar1 = FUN_100240d22(local_918,0,0);
      uVar4 = 0x10;
      if (cVar1 != '\0') goto LAB_100536b18;
    }
    uVar4 = 1;
  }
LAB_100536b18:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}


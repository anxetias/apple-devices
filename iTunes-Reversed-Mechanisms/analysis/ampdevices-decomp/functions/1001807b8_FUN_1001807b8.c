// name: FUN_1001807b8
// address: 1001807b8

int FUN_1001807b8(long param_1,ulong param_2,long param_3,long param_4,void *param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_460;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006883aa(uVar3);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100688334(uVar3);
    }
  }
  else {
    if (param_4 != 0) {
      iVar2 = FUN_10017ecc9(param_3,param_4,local_458,0);
      if (iVar2 == 0) {
        if ((param_6 & 1) == 0) {
          FUN_1001892ae(local_458,0);
          goto LAB_100180837;
        }
      }
      else {
LAB_100180837:
        iVar2 = FUN_10018156b(param_3,param_4,0,0,local_458);
        if (iVar2 != 0) goto LAB_100180918;
      }
      iVar2 = FUN_10017cc65(local_458,0x64617461,
                            (param_6 & 4) * 0x200 + (param_6 & 8) * 0x80 + 0x202,&local_460);
      if (iVar2 == 0) {
        FUN_10017d068(local_460,0);
        if ((param_2 == 0) ||
           (iVar2 = FUN_10017d230(local_460,param_1,param_2 & 0xffffffff,1,0), iVar2 == 0)) {
          iVar2 = FUN_10017cf3c(local_460,param_2);
          FUN_10017cdfb(local_460);
          if (iVar2 == 0) {
            iVar2 = 0;
            if (param_5 != (void *)0x0) {
              _memcpy(param_5,local_458,0x420);
            }
            goto LAB_100180918;
          }
        }
        else {
          FUN_10017cdfb(local_460);
        }
      }
      FUN_1001892ae(local_458,0);
      goto LAB_100180918;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006882be(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100180918:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}


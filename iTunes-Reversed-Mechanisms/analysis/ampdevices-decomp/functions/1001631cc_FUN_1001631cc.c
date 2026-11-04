// name: FUN_1001631cc
// address: 1001631cc

ulong FUN_1001631cc(long param_1,long param_2,ulong param_3,undefined8 param_4,code *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long local_40;
  long local_38;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067148b(uVar3);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100671415(uVar3);
    }
  }
  else {
    if (param_5 != (code *)0x0) {
      FUN_1001e9de0();
      uVar3 = FUN_100174812(param_2);
      iVar2 = FUN_10017489a(param_2);
      iVar7 = 0;
      if (iVar2 != -1) {
        iVar7 = iVar2;
      }
      uVar4 = FUN_1001628ba(param_1,param_3,param_2);
      local_38 = FUN_1001620b6();
      if (local_38 == 0) {
        param_3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(param_3,0x10);
        if (cVar1 != '\0') {
          FUN_10067123d(param_3);
        }
        FUN_1001782e9(0,0);
      }
      uVar5 = FUN_100171475(*(undefined8 *)(param_1 + 0xa8),local_38);
      lVar6 = FUN_1001705fc(uVar5);
      FUN_1001e9eb9(param_1);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006712b3(uVar5);
        }
        param_3 = 0;
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 != '\0') goto LAB_1001632d4;
      }
      else {
LAB_1001632d4:
        local_40 = 0;
        cVar1 = (*param_5)(param_2,uVar3,iVar7,uVar4,lVar6,0,0,param_4,&local_40);
        param_3 = CONCAT71((int7)(param_3 >> 8),cVar1 != '\0');
        if (cVar1 != '\0') {
          if (local_40 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              FUN_100671329(uVar5);
            }
            cVar1 = FUN_1001782e9(0,0);
            if (cVar1 == '\0') goto LAB_10016335d;
          }
          _CFURLCredentialStorageSetDefaultCredentialForProtectionSpace
                    (*(undefined8 *)(param_1 + 0x90),local_40,local_38);
          FUN_10017060f(local_40);
        }
LAB_10016335d:
        FUN_10017060f(lVar6);
      }
      FUN_10017060f(uVar3);
      FUN_10017060f(local_38);
      FUN_10017060f(uVar4);
      goto LAB_1001633ed;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067139f(uVar3);
    }
  }
  param_3 = 0;
  FUN_1001782e9(0,0);
LAB_1001633ed:
  return param_3 & 0xffffffff;
}


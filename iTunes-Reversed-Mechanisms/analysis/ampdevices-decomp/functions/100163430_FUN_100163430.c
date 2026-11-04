// name: FUN_100163430
// address: 100163430

ulong FUN_100163430(long param_1,long param_2,long param_3,undefined8 param_4,code *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  ulong unaff_R12;
  long local_38;
  
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006716d9(uVar4);
    }
  }
  else if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100671663(uVar4);
    }
  }
  else {
    if (param_5 != (code *)0x0) {
      FUN_1001e9de0();
      uVar4 = _CFURLProtectionSpaceGetHost(param_3);
      uVar4 = FUN_1001705fc(uVar4);
      uVar2 = _CFURLProtectionSpaceGetPort(param_3);
      iVar3 = _CFURLProtectionSpaceGetServerType(param_3);
      if (iVar3 - 5U < 4) {
        puVar9 = (&PTR_cf_http_10083c078)[iVar3 - 5U];
      }
      else {
        puVar9 = (undefined *)0x0;
      }
      uVar5 = FUN_1001705fc(puVar9);
      uVar6 = FUN_100162cea(param_1,param_2);
      uVar7 = FUN_100171475(*(undefined8 *)(param_1 + 0xa8),param_3);
      lVar8 = FUN_1001705fc(uVar7);
      FUN_1001e9eb9(param_1);
      if (lVar8 == 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          FUN_100671501(uVar7);
        }
        unaff_R12 = 0;
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 != '\0') goto LAB_100163596;
      }
      else {
LAB_100163596:
        local_38 = 0;
        cVar1 = (*param_5)(param_2,uVar4,uVar2,uVar6,lVar8,1,uVar5,param_4,&local_38);
        unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),cVar1 != '\0');
        if (cVar1 != '\0') {
          if (local_38 == 0) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 != '\0') {
              FUN_100671577(uVar7);
            }
            cVar1 = FUN_1001782e9(0,0);
            if (cVar1 == '\0') goto LAB_10016361d;
          }
          _CFURLCredentialStorageSetDefaultCredentialForProtectionSpace
                    (*(undefined8 *)(param_1 + 0x90),local_38,param_3);
          FUN_10017060f(local_38);
        }
LAB_10016361d:
        FUN_10017060f(lVar8);
      }
      FUN_10017060f(uVar4);
      FUN_10017060f(uVar5);
      FUN_10017060f(uVar6);
      goto LAB_100163640;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006715ed(uVar4);
    }
  }
  unaff_R12 = 0;
  FUN_1001782e9(0,0);
LAB_100163640:
  return unaff_R12 & 0xffffffff;
}


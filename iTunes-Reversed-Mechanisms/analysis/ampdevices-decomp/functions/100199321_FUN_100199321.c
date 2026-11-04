// name: FUN_100199321
// address: 100199321

undefined8 FUN_100199321(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if (param_1 == 0) {
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      FUN_100697b2e(uVar8);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      if (*param_2 == 0) {
        lVar2 = FUN_1001719b7(param_1);
      }
      else {
        lVar2 = FUN_1001705fc();
      }
      if (lVar2 == 0) {
        lVar2 = FUN_100199671(param_1);
        if (1 < lVar2 + 1U) {
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            FUN_100697a42(uVar8);
          }
          FUN_1001782e9(0,0);
        }
        lVar4 = 0;
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_100171a6c(param_1,&cf_Content_Encoding);
        if (lVar3 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = FUN_100174062(DAT_1008c4d90,lVar3,&cf__);
          if (lVar4 == 0) {
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              FUN_1006979cc(uVar8);
            }
            lVar4 = 0;
            FUN_1001782e9(0,0);
            uVar8 = 0xffffff94;
            goto LAB_100199541;
          }
          lVar5 = FUN_10017076e(lVar4);
          if (0 < lVar5) {
            uVar9 = lVar5 + 1;
            do {
              uVar8 = DAT_1008c4d90;
              uVar6 = FUN_100170853(lVar4,uVar9 - 2);
              lVar5 = FUN_1001737e5(uVar8,0,uVar6);
              if (lVar5 == 0) {
                uVar8 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar8,0x10);
                if (cVar1 != '\0') {
                  FUN_100697956(uVar8);
                }
                FUN_1001782e9(0,0);
                uVar8 = 0xffffff94;
                goto LAB_100199541;
              }
              FUN_100174381(lVar5);
              lVar7 = FUN_100173bb7(lVar5,&cf_gzip,1);
              if ((lVar7 != 0) && (lVar7 = FUN_100173bb7(lVar5,&cf_x_gzip,1), lVar7 != 0)) {
LAB_1001995f2:
                FUN_10017060f(lVar5);
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                uVar8 = 0xffffffce;
                if (cVar1 != '\0') {
                  FUN_1006978e3(uVar6);
                }
                goto LAB_100199541;
              }
              uVar8 = _CFGetAllocator(lVar2);
              lVar7 = FUN_100197bcc(uVar8,lVar2);
              if (lVar7 == 0) {
                uVar8 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar8,0x10);
                if (cVar1 != '\0') {
                  FUN_10069786d(uVar8);
                }
                FUN_1001782e9(0,0);
                goto LAB_1001995f2;
              }
              FUN_10017060f(lVar5);
              FUN_10017060f(lVar2);
              uVar9 = uVar9 - 1;
              lVar2 = lVar7;
            } while (1 < uVar9);
          }
        }
        uVar8 = 0;
        if (lVar2 == *param_2) goto LAB_100199541;
        FUN_10017060f();
        *param_2 = lVar2;
      }
      lVar2 = 0;
      uVar8 = 0;
      goto LAB_100199541;
    }
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      FUN_100697ab8(uVar8);
    }
  }
  lVar2 = 0;
  FUN_1001782e9(0,0);
  uVar8 = 0xffffffce;
  lVar4 = 0;
  lVar3 = 0;
LAB_100199541:
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar2);
  FUN_10017060f(0);
  return uVar8;
}


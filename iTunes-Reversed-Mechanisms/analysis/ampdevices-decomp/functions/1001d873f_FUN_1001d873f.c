// name: FUN_1001d873f
// address: 1001d873f

int FUN_1001d873f(undefined8 param_1,ulong param_2,long param_3,code *param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_50;
  long local_48;
  ulong local_40;
  float local_34;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1001d7456(param_1,&local_50);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = -0x27;
        if (param_2 <= local_50) {
          lVar4 = local_50 - param_2;
          if (param_3 + param_2 <= local_50) {
            lVar4 = param_3;
          }
          local_48 = FUN_1001c63e1(1000000);
          if (local_48 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_1006b67b0(uVar3);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x6c;
          }
          else {
            lVar5 = lVar4 + param_2;
            uVar6 = local_50 - lVar5;
            if (uVar6 != 0) {
              local_34 = (float)uVar6;
              uVar7 = uVar6;
              do {
                uVar8 = 1000000;
                if (uVar7 < 1000000) {
                  uVar8 = uVar7;
                }
                local_40 = uVar8;
                iVar2 = FUN_1001d7378(param_1,lVar5);
                if (iVar2 != 0) {
                  if (iVar2 != -0x80) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      FUN_1006b6744(iVar2,uVar3);
                    }
                  }
                  goto LAB_1001d8988;
                }
                iVar2 = FUN_1001d6a08(param_1,&local_40,local_48,2);
                if (iVar2 != 0) {
                  if (iVar2 != -0x80) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      FUN_1006b66d8(iVar2,uVar3);
                    }
                  }
                  goto LAB_1001d8988;
                }
                if (local_40 != uVar8) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    FUN_1006b64a8(uVar3);
                  }
LAB_1001d8ae2:
                  FUN_1001782e9(0,0);
                  iVar2 = -0x24;
                  goto LAB_1001d8988;
                }
                iVar2 = FUN_1001d7378(param_1,param_2);
                if (iVar2 != 0) {
                  if (iVar2 != -0x80) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      FUN_1006b666c(iVar2,uVar3);
                    }
                  }
                  goto LAB_1001d8988;
                }
                iVar2 = FUN_1001d717d(param_1,&local_40,local_48,2);
                if (iVar2 != 0) {
                  if (iVar2 != -0x80) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      FUN_1006b6600(iVar2,uVar3);
                    }
                  }
                  goto LAB_1001d8988;
                }
                if (local_40 != uVar8) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    FUN_1006b651e(uVar3);
                  }
                  goto LAB_1001d8ae2;
                }
                uVar7 = uVar7 - uVar8;
                if ((param_4 != (code *)0x0) &&
                   (iVar2 = (*param_4)((int)(((float)(uVar6 - uVar7) * DAT_10070bcf0) / local_34) &
                                       0xffff,param_5), iVar2 != 0)) {
                  if (iVar2 != -0x80) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      FUN_1006b6594(iVar2,uVar3);
                    }
                  }
                  goto LAB_1001d8988;
                }
                lVar5 = lVar5 + uVar8;
                param_2 = param_2 + uVar8;
              } while (uVar7 != 0);
            }
            iVar2 = FUN_1001d767c(param_1,local_50 - lVar4);
LAB_1001d8988:
            FUN_1001c64c1(local_48);
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b6826(iVar2,uVar3);
        }
      }
    }
  }
  return iVar2;
}


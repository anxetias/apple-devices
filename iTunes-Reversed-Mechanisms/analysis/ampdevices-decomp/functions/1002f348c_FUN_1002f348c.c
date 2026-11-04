// name: FUN_1002f348c
// address: 1002f348c

long FUN_1002f348c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 local_80 [16];
  long local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  char local_31;
  
  local_48 = param_4;
  uVar2 = _CFStringGetLength(param_2);
  local_50 = param_2;
  local_31 = FUN_100173c2a(param_2,&cf__,0,uVar2,4,local_80);
  local_60 = param_1;
  local_58 = _CFTreeGetChildCount(param_1);
  if (0 < local_58) {
    lVar7 = 0;
    local_40 = param_3;
    do {
      lVar3 = _CFTreeGetChildAtIndex(local_60,lVar7);
      if (((lVar3 != 0) && (lVar4 = FUN_100174e82(lVar3), lVar4 != 0)) &&
         (lVar5 = FUN_100174e3e(lVar4), lVar5 == 2)) {
        uVar2 = FUN_100174f0a(lVar4);
        lVar5 = FUN_1001705fc(uVar2);
        if ((local_31 == '\0') && (lVar5 != 0)) {
          lVar6 = _CFStringGetLength(lVar5);
          cVar1 = FUN_100173c2a(lVar5,&cf__,0,lVar6,4,&local_70);
          param_3 = local_40;
          if (cVar1 != '\0') {
            local_70 = local_70 + 1;
            local_68 = lVar6 - local_70;
            lVar6 = FUN_100173623(DAT_1008c4d90,lVar5,local_70,local_68);
            param_3 = local_40;
            if (lVar6 != 0) {
              FUN_10017060f(lVar5);
              param_3 = local_40;
              lVar5 = lVar6;
            }
          }
        }
        else if (lVar5 == 0) goto LAB_1002f360b;
        cVar1 = FUN_100169da8(local_50,lVar5);
        if ((cVar1 != '\0') &&
           ((param_3 == 0 ||
            ((lVar4 = FUN_1002f3c5d(lVar4,param_3), lVar4 != 0 &&
             ((local_48 == 0 || (cVar1 = FUN_100169da8(lVar4,local_48), cVar1 != '\0')))))))) {
          FUN_10017060f(lVar5);
          return lVar3;
        }
        FUN_10017060f(lVar5);
      }
LAB_1002f360b:
      lVar7 = lVar7 + 1;
    } while (local_58 != lVar7);
  }
  return 0;
}


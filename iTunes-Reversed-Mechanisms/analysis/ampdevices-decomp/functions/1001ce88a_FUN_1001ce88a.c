// name: FUN_1001ce88a
// address: 1001ce88a

long FUN_1001ce88a(long param_1,long param_2,undefined8 *param_3,undefined2 *param_4)

{
  char cVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  long local_40;
  undefined8 *local_38;
  
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006afb12(uVar5);
    }
  }
  else {
    if (0 < param_2) {
      puVar7 = &local_58;
      if (param_3 != (undefined8 *)0x0) {
        puVar7 = param_3;
      }
      *puVar7 = 0;
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = 0;
      }
      sVar2 = _GetNextProcess(puVar7);
      if (sVar2 != 0) {
        return -1;
      }
      local_50 = *(undefined8 *)PTR__kCFBundleIdentifierKey_10082e048;
      local_48 = param_4;
      local_38 = puVar7;
      do {
        lVar3 = _ProcessInformationCopyDictionary(puVar7,0xffffffff);
        if (lVar3 != 0) {
          local_40 = lVar3;
          lVar3 = FUN_100166c1b(lVar3,local_50);
          if (lVar3 == 0) {
            lVar6 = -1;
          }
          else {
            lVar6 = 0;
            do {
              uVar5 = *(undefined8 *)(param_1 + lVar6 * 8);
              cVar1 = FUN_100173fef(uVar5,&cf__);
              if (cVar1 == '\0') {
                lVar4 = FUN_100173bb7(lVar3,uVar5,1);
                if (lVar4 == 0) goto LAB_1001ce978;
              }
              else {
                cVar1 = FUN_100169fa1(lVar3,uVar5);
                if (cVar1 != '\0') goto LAB_1001ce978;
              }
              lVar6 = lVar6 + 1;
            } while (param_2 != lVar6);
            lVar6 = -1;
LAB_1001ce978:
            lVar3 = local_40;
            if (lVar6 != -1 && local_48 != (undefined2 *)0x0) {
              FUN_100166ce2(local_40,*(undefined8 *)PTR__kCFBundleNameKey_10082e050,local_48);
              FUN_10017060f(lVar3);
              return lVar6;
            }
          }
          puVar7 = local_38;
          FUN_10017060f(local_40);
          if (lVar6 != -1) {
            return lVar6;
          }
        }
        sVar2 = _GetNextProcess(puVar7);
        if (sVar2 != 0) {
          return -1;
        }
      } while( true );
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006afa9c(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return -1;
}


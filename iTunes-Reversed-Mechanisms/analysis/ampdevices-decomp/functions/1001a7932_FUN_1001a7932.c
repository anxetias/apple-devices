// name: FUN_1001a7932
// address: 1001a7932

void FUN_1001a7932(undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      if (*(long *)(param_2 + lVar3) == 0) {
        if (param_3 * 8 - lVar3 != 0) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            FUN_10069ea79(uVar2);
          }
          FUN_1001782e9(0,1);
        }
        break;
      }
      lVar3 = lVar3 + 8;
    } while (param_3 * 8 - lVar3 != 0);
    uVar2 = _CFArrayCreate(DAT_1008c4d98,param_2,param_3,PTR__kCFTypeArrayCallBacks_10082e130);
    *param_1 = uVar2;
  }
  return;
}


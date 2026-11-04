// name: FUN_1001ca162
// address: 1001ca162

int FUN_1001ca162(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_20;
  
  iVar2 = FUN_10015d28d(param_1,param_2,&local_20);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_20 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_10015d516(param_1);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            iVar2 = FUN_10015ccc4(local_20,1);
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                FUN_1006ac8d2(iVar2,uVar3);
              }
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_1006ac93e(iVar2,uVar3);
            }
          }
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006ac9aa(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}


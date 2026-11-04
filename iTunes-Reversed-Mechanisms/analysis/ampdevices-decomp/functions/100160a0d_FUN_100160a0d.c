// name: FUN_100160a0d
// address: 100160a0d

int FUN_100160a0d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined8 local_38;
  
  local_38 = in_RAX;
  iVar2 = FUN_100160255(param_1,&local_38);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_100160772(param_1,param_2);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = FUN_100160894(param_1,param_3,param_4);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              iVar2 = FUN_100160772(param_1,local_38);
              if ((iVar2 != -0x80) && (iVar2 != 0)) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  FUN_10066efc5(iVar2,uVar3);
                }
              }
            }
            else {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                FUN_10066f031(iVar2,uVar3);
              }
            }
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_10066f09d(iVar2,uVar3);
          }
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066f109(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}


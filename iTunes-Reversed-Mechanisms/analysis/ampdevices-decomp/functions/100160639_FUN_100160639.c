// name: FUN_100160639
// address: 100160639

int FUN_100160639(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
          iVar2 = FUN_100160380(param_1,param_3,param_4);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              iVar2 = FUN_100160772(param_1,local_38);
              if ((iVar2 != -0x80) && (iVar2 != 0)) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  FUN_10066ec51(iVar2,uVar3);
                }
              }
            }
            else {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                FUN_10066ecbd(iVar2,uVar3);
              }
            }
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_10066ed29(iVar2,uVar3);
          }
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066ed95(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}


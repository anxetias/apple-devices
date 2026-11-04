// name: FUN_1001977c4
// address: 1001977c4

int FUN_1001977c4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
                 )

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_54 [12];
  long local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  local_40 = param_4;
  local_34 = param_5;
  iVar2 = FUN_100197158(param_1,local_54,0,0,0,0,0,0,0,&local_48);
  if (iVar2 == 0) {
    iVar3 = FUN_100197445(local_48,(param_1 + param_2) - local_48,param_3,local_40,local_34);
    iVar2 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      iVar2 = iVar3;
      if (cVar1 != '\0') {
        FUN_1006966b6(iVar3,uVar4);
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069664a(iVar2,uVar4);
    }
  }
  return iVar2;
}


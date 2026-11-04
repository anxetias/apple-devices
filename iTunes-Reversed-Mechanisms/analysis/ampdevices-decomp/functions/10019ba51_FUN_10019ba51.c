// name: FUN_10019ba51
// address: 10019ba51

int FUN_10019ba51(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  iVar2 = FUN_1001ed4fd(*(undefined8 *)(param_1 + 8),FUN_10019bac9,&local_38,1);
  if ((iVar2 != -0x27) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100698e66(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  return iVar2;
}


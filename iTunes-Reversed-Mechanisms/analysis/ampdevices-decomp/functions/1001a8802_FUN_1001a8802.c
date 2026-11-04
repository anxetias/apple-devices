// name: FUN_1001a8802
// address: 1001a8802

undefined8 * FUN_1001a8802(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  if ((*param_2 != 0) && (lVar2 = _CFDataGetLength(), lVar2 != 0)) {
    if (*param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = _CFDataGetLength();
    }
    uVar4 = FUN_1001979ca(uVar3);
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_1001a86a4(&local_38,uVar4);
    if (*param_2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = _CFDataGetBytePtr();
    }
    uVar6 = FUN_1001a863c(&local_38);
    iVar1 = FUN_100197a47(uVar5,uVar3,uVar6,uVar4,&local_40);
    if (iVar1 == 0) {
      FUN_1001a86a4(&local_38,local_40);
      *param_1 = local_38;
      *(undefined1 *)(param_1 + 1) = local_30;
      local_38 = 0;
    }
    else {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
    FUN_1001a85b8(&local_38);
    return param_1;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


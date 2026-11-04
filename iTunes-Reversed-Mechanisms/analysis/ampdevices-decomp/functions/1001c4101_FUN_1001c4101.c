// name: FUN_1001c4101
// address: 1001c4101

undefined8 FUN_1001c4101(undefined4 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1001c3dbc(0xffff8002,param_1,param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_1001c3d42(lVar1,param_3,param_4 != '\0');
    return uVar2;
  }
  return 0;
}


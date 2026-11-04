// name: FUN_10010648d
// address: 10010648d

void FUN_10010648d(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x19f4) >> 1;
  FUN_100106ed9(param_1,*(undefined8 *)(param_2 + 0x1918),*(undefined8 *)(param_2 + 0x1920),bVar1);
  (**(code **)(param_2 + 0x19e8))(param_1,param_1,1);
  FUN_100106fd7(param_1,*(undefined8 *)(param_2 + 0x1928),param_2 + 0x1960,bVar1);
  return;
}


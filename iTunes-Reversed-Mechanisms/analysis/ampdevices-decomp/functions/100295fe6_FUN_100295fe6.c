// name: FUN_100295fe6
// address: 100295fe6

undefined8 FUN_100295fe6(long param_1,uint param_2,undefined4 *param_3,ulong *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xd21) == '\0') {
LAB_10029605f:
    *param_3 = 0;
    *param_4 = 0xffffffffffffffff;
    uVar2 = 0xffffffce;
  }
  else {
    if (param_2 == 0xffffffff) {
      *param_4 = *(ulong *)(param_1 + 0xd40);
      *param_3 = *(undefined4 *)(param_1 + 0xd2c);
    }
    else {
      if (param_2 != 0) {
        if ((param_2 < *(uint *)(param_1 + 0xd2c)) &&
           (uVar1 = FUN_100299fc5(0,param_1,0,param_2,param_3), uVar1 <= *(uint *)(param_1 + 0x474))
           ) {
          *param_4 = (ulong)uVar1;
          return 0;
        }
        goto LAB_10029605f;
      }
      *param_4 = *(ulong *)(param_1 + 0xd38);
      *param_3 = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

